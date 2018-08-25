#!/bin/sh

# foo="jurij"
# echo $foo
foo="zadatak"
# for i in {1..31};do mv "$foo$i" "../$foo$i/";done
for i in {1..31};do cd "$foo$i"; make clean;cd ..;done