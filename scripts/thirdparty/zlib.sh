#!/usr/bin/env bash

#set -x

CPUS=$(lscpu | grep "^CPU(s):" | sed s/"CPU(s):                "//)

CURRENT_DIR="$(pwd)"
PARENT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
THIRDPARTY_DIR="${PARENT_DIR}"
SCRIPTS_DIR="$(dirname "${THIRDPARTY_DIR}")"
PROJECT_DIR="$(dirname "${SCRIPTS_DIR}")"
USR_DIR="${PROJECT_DIR}/usr"
ZLIB_DIR="${THIRDPARTY_DIR}/zlib"
TMP_DIR="${PROJECT_DIR}/tmp"

mkdir -p "${ZLIB_DIR}"
mkdir -p "${TMP_DIR}"
cd "${TMP_DIR}"
wget -c https://netix.dl.sourceforge.net/project/gnuwin32/zlib/1.2.3/zlib-1.2.3-src.zip
unzip -o -d zlib-1.2.3-src zlib-1.2.3-src.zip
cp -R "${TMP_DIR}/zlib-1.2.3-src/src/zlib/1.2.3/zlib-1.2.3/*" "${ZLIB_DIR}"
cd "${CURRENT_DIR}"

cd "${ZLIB_DIR}"
PREFIX="${USR_DIR}"
INCLUDE_PATH="${PREFIX}/include"
LIBRARY_PATH="${PREFIX}/lib"
INSTALL=cp
make -j ${CPUS} libz.a zlib1.dll libzdll.a
make install
cd "${CURRENT_DIR}"
