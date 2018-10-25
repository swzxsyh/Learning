FROM ubuntu:16.04

RUN cp /etc/apt/sources.list /etc/apt/sources.list.bak


RUN apt-get update
RUN apt-get upgrade
RUN apt-get install -yq vim
RUN apt-get install -yq tzdata

RUN apt-get install -y openssh-server
RUN mkdir -p /var/run/sshd
RUN mkdir -p /root/.ssh

RUN sed -ri 's/session required pam_logiuid_so/#session requried pam_logiuid.so/g' /etc/pam.d/sshd

ADD authorized_keys.pub /root/.ssh/authorized_keys
ADD run.sh /run.sh
RUN chmod 755 /run.sh

EXPOSE 22
CMD ["/run.sh"]


