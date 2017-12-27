fasterV: gypRebuild run

gypRebuild:
	node-gyp rebuild

run:
	node example/main.js

install:
	npm install node-gyp -g
	npm install --only=dev