build:
  git pull
  mkdir -p public
  rm -rf public/*
  hugo

dev:
  hugo serve -D --bind 0.0.0.0

install_deps:
  git submodule init && git submodule update
