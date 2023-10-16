#!/usr/bin/env bash
set -e
set -x

MQTT_CPP_VERSION=$1

git clone --depth=1 --recurse-submodules --branch=${MQTT_CPP_VERSION} https://github.com/redboltz/mqtt_cpp.git
cd mqtt_cpp
mkdir build
cd build
cmake ..
make -j16
make install
cd ..
rm -rf mqtt_cpp
