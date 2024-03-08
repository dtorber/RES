#!/bin/bash
for file in `cat tmp.lst`;
do
echo $file;
rm data/Corpus_clean_lines/${file}*;
done
