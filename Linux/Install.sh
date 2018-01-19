#!/bin/bash

DIR_INSTALL=~/bin

if [ ! -d "$DIR_INSTALL" ]; then
  mkdir $DIR_INSTALL
fi

cp Pascalina $DIR_INSTALL

cp Pascalina.desktop ~/.local/share/applications

cp -r icons ~/.local/share

