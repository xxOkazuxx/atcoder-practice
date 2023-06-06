#!/bin/bash

# 実行する際に引数に対象となるディレクトリ名を入れる必要があり
# 例えばABC303だったら -> ./run.sh abc303
/usr/local/bin/g++-13 ./$1 && ./a.out 