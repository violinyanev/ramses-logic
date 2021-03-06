#!/bin/bash

#  -------------------------------------------------------------------------
#  Copyright (C) 2020 BMW AG
#  -------------------------------------------------------------------------
#  This Source Code Form is subject to the terms of the Mozilla Public
#  License, v. 2.0. If a copy of the MPL was not distributed with this
#  file, You can obtain one at https://mozilla.org/MPL/2.0/.
#  -------------------------------------------------------------------------

if [ $# -eq 2 ]; then
    TEST_DIR=$1
    INSTALL_DIR=$2
else
    echo "Usage: $0 <temp-build-dir> <install-dir>"
    exit 1
fi

set -e

SCRIPT_DIR=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )

echo "++++ Create test environment for install check of shared lib ++++"

# test here
mkdir -p $TEST_DIR
cd $TEST_DIR

# run cmake config
echo "++++ Build with cmake config for install check of shared lib ++++"
echo "++++ Using installation from $INSTALL_DIR ++++"
rm -rf test-cmake.config
mkdir test-cmake.config
cd test-cmake.config

export LD_LIBRARY_PATH=${INSTALL_DIR}/lib:${LD_LIBRARY_PATH}

cmake -DCMAKE_PREFIX_PATH=$INSTALL_DIR --build test-cmake.config $SCRIPT_DIR/shared-lib-check/
make run-all

echo "++++ build check done for install check of shared lib ++++"
