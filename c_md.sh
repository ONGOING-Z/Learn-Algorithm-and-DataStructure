#/bin/bash

# generate markdown template file


name=$1
md_name=$(basename $name)
if [ ! $name ];
  then echo "input file name."
  exit -1
fi

echo "
# "$md_name"
type:

difficulty:

---

## [Problem Info][problem_link]

## Answer - 1

- time:
- beat %

## Answer - 2

## Attention

[problem_link]:
" > $1.md

echo "done."