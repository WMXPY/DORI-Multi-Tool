dorimt: gypRebuild examples

gypRebuild:
	node-gyp rebuild

examples:
	node example/main.js

install:
	npm install node-gyp -g
	npm install --only=dev

tests:
	mocha -r ts-node/register test/**/*.test.ts