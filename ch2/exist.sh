#!/bin/bash

# Check if the usser supplied exactly one argument
if [ "$#" -ne 1 ]; then
    echo "You must provide exactley one argument."
    echo "Example: $0 /etc"
    exit 1
fi

# Check if file/directory exists
test -e "$1"
if [ "$?" -eq 0 ]; then
    echo "File or directory exist."
elif [ "$?" -eq 1 ]; then
    echo "File or directory does not exist."
    exit 3
else
    echo "Unkwown return value from test..."
    exit 1
fi

exit 0
