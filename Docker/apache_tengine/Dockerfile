FROM sshd:dockerfile
MAINTAINER swzxsyh

RUN apt-get update && apt-get upgrade
RUN apt-get -yq install tzdata

RUN apt-get install -y build-essential debhelper make autoconf automake patch
RUN apt-get install -y dpkg-dev fakeroot pbuilder gnupg dh-make libssl-dev libpcre3-dev git-core

RUN echo "Asia/Shanghai" > /etc/timezone
RUN ln -sf /usr/share/zoneinfo/${TIME_ZONE} /etc/localtime
RUN dpkg-reconfigure -f noninteractive tzdata

RUN adduser --disabled-login -gecos 'Tenginx' nginx

WORKDIR /home/nginx
RUN su nginx -c 'git clone https://github.com/alibaba/tengine.git'

WORKDIR /home/nginx/tengine
RUN su nginx -c 'mv packages/debian .'

ENV DEB_BUILD_OPTIONS nocheck
RUN su nginx -c 'dpkg-buildpackage -rfakeroot -uc -b' 

WORKDIR /home/nginx
RUN dpkg -i tengine_2*.deb

VOLUME ["/data","/etc/nginx/sites-enabled","/var/log/nginx"]

RUN echo "\ndaemon off;">>/etc/nginx/nginx.conf

WORKDIR /etc/nginx

ADD run.sh /run.sh
RUN chmod 755 /*.sh

CMD ["/run.sh"]
EXPOSE 80
EXPOSE 443
EXPOSE 22

