#! /bin/bash

# example
# ----------------------------------------------------------------
# sh cmd/abc123
# >>>> abcディレクトリ配下にabc123が作成される
# ----------------------------------------------------------------

if [ $# -ne 1 ]; then
    echo "number of argments should be 1"
    return 1
fi


WORKDIR="/app"
CONTEST_DIR="${WORKDIR}/src/atcoder/abc"
PROBLEM_DIR="${CONTEST_DIR}/$1"
TEMPLATE="${WORKDIR}/templates/main.cpp"

mkdir -p $CONTEST_DIR
cd $CONTEST_DIR
acc new $1

### ダウンロードしたテストデータに対して，cppファイルを作成する
PROBLEMS="${PROBLEM_DIR}/*"
for DIRPATH in $PROBLEMS; do
    if [ ! -d $DIRPATH ]; then
        continue
    fi

    cp -n $TEMPLATE "${DIRPATH}/main.cpp"
done