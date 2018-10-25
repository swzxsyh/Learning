FROM sshd:dockerfile

MAINTAINER swzxsyh

ENV DEBAIN_FRONTEND noninteractive

RUN apt-get -yq install apache2 && rm -rf /var/lib/apt/lists/*


RUN apt-get update && apt-get upgrade
#RUN apt-get -yq install vim
RUN apt-get -yq install tzdata

RUN echo "Asia/Shanghai" > /etc/timezone 
RUN ln -sf /usr/share/zoneinfo/${TIME_ZONE} /etc/localtime
RUN dpkg-reconfigure -f noninteractive tzdata

ADD run.sh /run.sh
RUN chmod 755 /*.sh

RUN mkdir -p /var/lock/apache2 && mkdir -p /app && rm -rf /var/www/html/ && ln -s /app /var/www/html
COPY sample /app

ENV APACHE_RUN_USER www-data
ENV APACHE_RUN_GROUP www-data
ENV APACHE_LOG_DIR /var/log/apache2
ENV APACHE_PID_FILE /var/run/apache2.pid
#ENV APACHE_PID_FILE /var/run/apache2.pid
ENV APACHE_RUN_DIR /var/run/apache2
ENV APACHE_LOCK_DIR /var/lock/apache2
ENV APACHE_SERVERADMIN admin@localhost
ENV APACHE_SERVERNAME localhost
ENV APACHE_SERVERALIAS docker.localhost
ENV APACHE_DOCUMENT_ROOT /var/www


EXPOSE 80
WORKDIR /app
CMD ["/run.sh"]



