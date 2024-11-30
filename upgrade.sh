#!/bin/bash

release=/etc/os-release

if grep -q "Arch" $release
then
    sudo pacman -Syu
fi

if grep -q "Ubuntu" $release || grep -q "Debian" $release
then
    sudo apt update
    sudo apt dist-upgrade
fi

