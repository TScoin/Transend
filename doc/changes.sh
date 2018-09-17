#!/bin/bash

IFS=$'\n'
for doc in $(find -type f -print )
do
 IFS=""
 echo $(sed -e 's/Transend/Transend/g; s/transend/transend/g' $doc) > $doc
 IFS=$'\n'
done
