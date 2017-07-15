#!/usr/bin/env bash

CPUS=$(lscpu | grep "^CPU(s):" | sed s/"CPU(s):                "//)

git clone https://github.com/artyom-beilis/cppcms.git cppcms
pushd cppcms
mkdir -p build
pushd build
rm -Rf *
cmake ..
make -j ${CPUS}
make -j ${CPUS} test
sudo make -j ${CPUS} install
popd
popd

