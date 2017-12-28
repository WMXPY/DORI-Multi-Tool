# faster-verify

> In Development

:white_check_mark: A sample type check package for NodeJS, fast, native

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
console.log(a.IsArray(***), a.Is***(***)); // Important: capital I
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
