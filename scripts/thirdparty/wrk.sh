#!/usr/bin/env bash

#set -x

CPUS=$(lscpu | grep "^CPU(s):" | sed s/"CPU(s):                "//)

CURRENT_DIR="$(pwd)"
PARENT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
THIRDPARTY_DIR="${PARENT_DIR}"
SCRIPTS_DIR="$(dirname "${THIRDPARTY_DIR}")"
PROJECT_DIR="$(dirname "${SCRIPTS_DIR}")"
USR_DIR="${PROJECT_DIR}/usr"

cd "${THIRDPARTY_DIR}"
git clone https://github.com/wg/wrk.git wrk
pushd wrk
INSTALL_PREFIX="${USR_DIR}"
make -j ${CPUS} clean
make -j ${CPUS}
cp wrk "${INSTALL_PREFIX}/bin"
popd
popd
cd "${CURRENT_DIR}"
