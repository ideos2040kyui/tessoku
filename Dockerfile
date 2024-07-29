# ベースとなるOSはubuntu 20.04を選択
FROM ubuntu:22.04

# パッケージの一覧更新
RUN apt-get update

# タイムゾーンの設定
RUN apt install -y tzdata
ENV TZ=Asia/Tokyo

# 開発環境のシステムインストール
RUN apt-get update && apt-get install -y \
  g++ \
  git \
  gdb 

WORKDIR /work
