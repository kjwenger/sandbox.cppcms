#!/usr/bin/env bash

CURRENT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

${CURRENT_DIR}/thirdparty/cppcms-arm-linux-gnueabihf.sh

${CURRENT_DIR}/app-arm-linux-gnueabihf.sh