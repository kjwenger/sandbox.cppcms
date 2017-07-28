#!/usr/bin/env bash

CURRENT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PARENT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
SCRIPTS_DIR="$(dirname "${PARENT_DIR}")"
PROJECT_DIR="$(dirname "${SCRIPTS_DIR}")"

cd "${PROJECT_DIR}"
./build/sandbox-cppcms -c config.json
cd "${CURRENT_DIR}"
