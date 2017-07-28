#!/usr/bin/env bash

CURRENT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

${CURRENT_DIR}/thirdparty/cppcms.sh
${CURRENT_DIR}/thirdparty/googletest.sh
${CURRENT_DIR}/thirdparty/hiperlite.sh
${CURRENT_DIR}/thirdparty/wrk.sh

${CURRENT_DIR}/app.sh