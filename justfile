build:
  mkdir -p public
  rm -rf public/*
  hugo

dev:
  hugo serve -D --bind 0.0.0.0

install_deps:
  #!/usr/bin/env bash
  mkdir -p assets
  cd ./assets
  git clone https://github.com/gondow/highlightjs-x86asmatt.git
  git clone https://github.com/hakimel/reveal.js.git reveal
  cd ./reveal
  git switch --detach 5.1.0
