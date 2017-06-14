#!/bin/bash

make clean
make
sudo make modules_install
make user XED=1
sudo ./sptcmd -K -c test ./test
#sudo ./sptdecode -i --sideband ptout.sideband --pt ptout.$1  > new.out
