#!/usr/bin/env bash

# Get latest packages
sudo apt update

# Get version control tools
sudo apt install git
sudo apt install subversion

# Get build tools
sudo apt install build-essential
sudo apt install gcc
sudo apt install g++
sudo apt install cmake

# Get CppCMS prerequisites
sudo apt install libpcre3-dev
sudo apt install zlib1g-dev
sudo apt install libgcrypt11-dev
sudo apt install libicu-dev python