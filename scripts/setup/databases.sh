#!/usr/bin/env bash

CURRENT_DIR="$(pwd)"
SETUP_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
SCRIPTS_DIR="$(dirname "${SETUP_DIR}")"
PROJECT_DIR="$(dirname "${SCRIPTS_DIR}")"

# Get latest packages
sudo apt update

# network tools
sudo apt install curl -y
sudo apt install wget -y

# Get version control tools
sudo apt install git -y
sudo apt install subversion -y

# Get thirdparty tools
sudo apt install build-essential -y
sudo apt install gcc -y
sudo apt install g++ -y
sudo apt install cmake -y

# Get CppCMS prerequisites
sudo apt install libpcre3-dev -y
sudo apt install zlib1g-dev -y
sudo apt install libgcrypt11-dev -y
sudo apt install libicu-dev -y
sudo apt install python -y

# Get SQLite
sudo apt install sqlite3 -y
sudo apt install libsqlite3-dev -y

# Create databases
touch "${PROJECT_DIR}/database/petstore_dev.db"
touch "${PROJECT_DIR}/database/petstore_test.db"
touch "${PROJECT_DIR}/database/petstore_prod.db"