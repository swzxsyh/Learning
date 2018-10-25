FROM sshd:dockerfile

MAINTAINER swzxsyh

RUN apt-get install -y nginx && rm -rf /var/lib/apt/lists/* && echo "\ndaemon off;">>/etc/nginx/nginx.conf && chown -R www-data:www-data /var/lib/nginx
RUN apt-get update && apt-get upgrade
RUN apt-get -yq install tzdata

RUN echo "Asia/Shanghai" > /etc/timezone 
RUN ln -sf /usr/share/zoneinfo/${TIME_ZONE} /etc/localtime
RUN dpkg-reconfigure -f noninteractive tzdata

ADD run.sh /run.sh
RUN chmod 755 /*.sh

VOLUME ["/etc/nginx/sites-enabled","etc/nginx/certs","/etc/nginx/conf.d","/var/log/nginx"]


WORKDIR /etc/nginx

CMD ["/run.sh"]
EXPOSE 80
EXPOSE 443
EXPOSE 22



