#!/bin/bash

DIR="."

file_count=$(find "$DIR" -type f | wc -l)

dir_count=$(find "$DIR" -type d | wc -l)

total_count=$((file_count + dir_count))

echo "Directory: $DIR" > output.txt
echo "Number of files: $file_count" >> output.txt
echo "Number of folders: $dir_count" >> output.txt
echo "Total items: $total_count" >> output.txt

cat output.txt
