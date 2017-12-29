# faster-verify

> Now 10% test covered

:white_check_mark: A sample type check package for NodeJS, fast, native

## Install

```bash

npm install faster-verify --save
# Or
npm install faster-verify --save-dev

```

Normally, compile will be complete shortly.

If error occurs, you can run it again by your self.

```bash

# Goto the folder
cd node_modules/faster-verify
make compile
# Or
npm run compile

```

## Basic usage

### Test compile

```js

import {Hello} from 'faster-verify';

console.log(Hello());
// Hello from C++!

```

### Verifys

```js

import a, {isArray, isPrime, isNumber, isString, isFunction, isObject} from 'faster-verify';

console.log(is***(***));
// true/false
console.log(a.IsArray(***), a.Is***(***)); // Important: Not camelcase -> IsArray instead of isArray
// true/false

```

## Performance

```text
c++: checking 654188429 is a prime number
true
native: 1273.028ms
js: checking 654188429 is a prime number
true
js: 2143.402ms
```
