FROM dockerfile/ubuntu
RUN \
    sudo add-apt-repository ppa:k-dg/litecoin && \
    sudo apt-get update && \
    sudo apt-get install -y litecoind
EXPOSE 9332
CMD ["/usr/bin/litecoind", "-datadir=/data", "--printtoconsole"]
