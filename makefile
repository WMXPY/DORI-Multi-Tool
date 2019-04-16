dorimt: gypRebuild examples

gypRebuild:
	node-gyp rebuild

examples:
	node example/main.js

install:
	@echo "[INFO] Installing dev Dependencies"
	@yarn install --production=false

install-prod:
	@echo "[INFO] Installing Dependencies"
	@yarn install --production=true

tests:
	mocha -r ts-node/register test/**/*.test.ts
