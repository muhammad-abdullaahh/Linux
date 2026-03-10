#!/bin/bash

echo "Press 1 for file sort, 2 for file search, 3 for directory listing"
read inputUser

if [ "$inputUser" = "1" ]; then
    echo "Enter the name of the file (without extension):"
    read fileName
    if [ -f "$fileName.txt" ]; then
        sort "$fileName.txt" > sorted.txt
        echo "Sorted file saved as sorted.txt:"
        cat sorted.txt
    else
        echo "File does not exist!"
    fi

elif [ "$inputUser" = "2" ]; then
    echo "Enter the name of the file to search (with or without extension):"
    read fileSearch
    find . -type f -name "$fileSearch*" 

elif [ "$inputUser" = "3" ]; then
    echo "Enter the directory path to list:"
    read dirSearch
    if [ -d "$dirSearch" ]; then
        echo "Listing directory contents:"
        ls -alh "$dirSearch"
    else
        echo "Directory does not exist!"
    fi

else
    echo "Enter a valid choice!"
fi
