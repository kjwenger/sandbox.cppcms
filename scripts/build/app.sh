#!/usr/bin/env bash

CPUS=$(lscpu | grep "^CPU(s):" | sed s/"CPU(s):                "//)

mkdir -p build
pushd build
cmake ..
make -j ${CPUS}
popd