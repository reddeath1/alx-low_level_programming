#!/bin/bash

mkdir temp_dir
cd temp_dir
echo "9 8 10 24 75 9" > numbers.txt
../gm $(cat numbers.txt)

cd ..
rm -rf temp_dir
