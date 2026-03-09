#!/bin/bash

> record.txt

find . -type f | while read file
do
    fullpath=$(realpath "$file")

    lines=$(wc -l < "$file")
    words=$(wc -w < "$file")
    chars=$(wc -c < "$file")

    echo "File: $fullpath" >> record.txt
    echo "Lines: $lines" >> record.txt
    echo "Words: $words" >> record.txt
    echo "Characters: $chars" >> record.txt
    echo "----------------------" >> record.txt

done

echo "Data saved in record.txt"
