#!/usr/bin/env bash

# Add ARM HF for BeagleBone
sudo dpkg --add-architecture armhf
sudo apt-get update
sudo dpkg --print-foreign-architectures