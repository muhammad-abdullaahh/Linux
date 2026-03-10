#!/bin/bash

    files=$( ls | wc -l) > s.txt
    echo "The total files are "$files

    number=$(find . -type d | wc -l) >>s.txt
    echo "THe total directories are "$number
    cat output.txt
