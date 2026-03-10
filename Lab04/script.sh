#!/bin/bash

echo "Enter the name of the first file: "
read input1
gedit $input1.txt

echo "Enter the name of the second file: "
read input2
gedit $input2.txt

echo "Enter the name of the third file: "
read input3
gedit $input3.txt

cat $input1.txt $input2.txt $input3.txt > output.txt
