#!/bin/bash
wget https://github.com/holbertonschool/0x18.c/blob/master/101-md5_gm -P ../
export LD_PRELOAD=../inject.so
