# Atcoder 練習保存用リポジトリ

---

## プログラム実行方法

- `Problems/abc`ディレクトリ配下に問題を用意
- 問題の名前は`https://atcoder.jp/contests/{コンテスト名}`に記載のある問題名とする必要がある
- `Ctrl + Shift + B`にて、サンプルケースのテストが実行される。
- `Ctrl + Shift + D`にて、デバッグの実行が可能。サンプルケースは`input.txt`に記載

## テストファイル作成

- `sh make_file.sh abc{コンテスト No}`
- `Problems/abc`に問題が python ファイルとして作成される。

## Git で練習内容を記録

- `sh git.sh "commitメッセージ"`

## サンプルケースと解答を比較するコマンド

- `code -d ./CodeSample/out.txt  ./CodeSample/answer.txt`
