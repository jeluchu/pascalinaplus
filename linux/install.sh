#!/bin/bash

DIR_INSTALL=~/bin

if [ ! -d "$DIR_INSTALL" ]; then
  mkdir $DIR_INSTALL
fi

cp pascalina $DIR_INSTALL

cp pascalina.desktop ~/.local/share/applications

cp -r icons ~/.local/share

