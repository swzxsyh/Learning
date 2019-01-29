FROM ubuntu:16.04

COPY Cisco_Packet_Tracer_7.2.1_for_Linux_64_bit.tar.gz /root/pt.tar.gz

RUN apt-get update && apt-get install -y --no-install-recommends libqtwebkit4 libqt4-scripttools libqt4-svg libssl1.0.0 ca-certificates libqt5script* && \
mkdir -p /opt/pt && \
tar zxvf /root/pt.tar.gz -C /opt/pt && \
#--strip 1 && \
sed 's/III/\/opt\/pt/' /opt/pt/tpl.packettracer > /opt/pt/packettracer && \
sed 's/III/\/opt\/pt/' /opt/pt/tpl.linguist > /opt/pt/linguist && \
chmod +x /opt/pt/linguist /opt/pt/packettracer && \
rm -f /root/pt.tar.gz && \
apt-get clean && \
rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*

CMD /opt/pt/packettracer
