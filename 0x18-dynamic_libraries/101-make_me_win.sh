#!/bin/bash

# Create a new directory
mkdir temp_dir

# Move to the new directory
cd temp_dir

# Run the gm program with your numbers
echo "9 8 10 24 75 9" > numbers.txt
../gm $(cat numbers.txt)

# Cleanup: Remove temporary directory and files
cd ..
rm -rf temp_dir
