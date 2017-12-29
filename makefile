fasterV: gypRebuild example

gypRebuild:
	node-gyp rebuild

example:
	node example/main.js

install:
	npm install node-gyp -g
	npm install --only=dev

tests:
	mocha -r ts-node/register test/**/*.test.ts