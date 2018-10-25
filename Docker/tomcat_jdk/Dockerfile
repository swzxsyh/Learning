FROM sshd:dockerfile

MAINTAINER swzxsyh

ENV DEBAIN_FRONTEND noninteractive

RUN apt-get update -y && apt-get upgrade -y
RUN apt-get -yq install tzdata

RUN echo "Asia/Shanghai" > /etc/timezone
RUN ln -sf /usr/share/zoneinfo/${TIME_ZONE} /etc/localtime
RUN dpkg-reconfigure -f noninteractive tzdata

RUN apt-get install -qy --no-install-recommends wget pwgen ca-certificates && apt-get clean && rm -rf /var/lib/apt/lists/*

ENV CATALINA_HOME /tomcat
ENV JAVA_HOME /jdk

ADD tomcat /tomcat 
ADD jdk /jdk

ADD create_tomcat_admin_user.sh /create_tomcat_admin_user.sh
ADD run.sh /run.sh
RUN chmod +x /*.sh
RUN chmod +x /tomcat/bin/*.sh

EXPOSE 8080
CMD ["/run.sh"]
 
