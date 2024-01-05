#!/bin/bash

HERE=$(pwd)
LOWER=$HERE/espurna
UPPER=$HERE
DESTINATION=$HERE/build
WORK=$HERE/.workdir

if [ -d $LOWER ]; then
    pushd $LOWER
    git checkout -- .
    popd
else
    git clone -q -b dev git@github.com:xoseperez/espurna.git $LOWER
fi

sudo mount -t overlay overlay -o lowerdir=$LOWER/code,upperdir=$UPPER/code,workdir=$WORK $DESTINATION
