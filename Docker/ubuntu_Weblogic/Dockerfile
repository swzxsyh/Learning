FROM weblogic_1
MAINTAINER swzxsyh

ENV DEBAIN_FRONTEND noninteractive

RUN echo "Asia/Shanghai" > /etc/timezone
RUN ln -sf /usr/share/zoneinfo/${TIME_ZONE} /etc/localtime
RUN dpkg-reconfigure -f noninteractive tzdata

COPY jdk /jdk
RUN run.sh /run.sh

RUN chmod+x /run.sh

EXPOSE 7001
CMD ["/run.sh"]
































