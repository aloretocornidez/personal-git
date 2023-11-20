#!/bin/bash

# This script renames all of my files to my preferred format


for i in *
do 
  # mv $i `(echo ${i,,} | sed 's/[_ \\]/-/g')`; 
  echo `(echo ${i,,} | sed 's/[_ ]/-/g' | sed 's/[\\\/]//g')`; 
done
