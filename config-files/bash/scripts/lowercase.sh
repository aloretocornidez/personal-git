#!/bin/bash

# This script renames all of my files to my preferred format

# while IFS= read -r file;
for i in *.pdf
do 
  # mv $i `(echo ${i,,} | sed 's/[_ \\]/-/g')`; 
  # mv $i `(echo ${i,,} | sed 's/[_ ]/-/g')`; 
  echo `(echo ${i,,} | sed 's/[_ ]/-/g')`; 
done
