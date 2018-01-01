# DORI Multi Tool

> Now 40% test covered

:white_check_mark: A sample util tool package for NodeJS, fast, native

## Install

```bash
npm install dorimt --save
# Or
npm install dorimt --save-dev
```

Normally, compile will be complete shortly.

If error occurs, you can run it again by your self.

```bash
# Goto the folder
cd node_modules/dorimt
make compile
# Or
npm run compile
```

## Documents

[API](http://www.google.com/)
[What about?](http://www.google.com/)

## Basic usage

### Test compile

```js
import {Hello} from 'dorimt';

console.log(Hello());
// Hello from C++!
```

### Verifys

```js
import a, 
{
    isArray,
    isPrime,
    isNumber,
    isString,
    isFunction,
    isObject,
    isBoolean,
    isDate,
    isNull,
    isUndefinded,
    isRegExp,
    isNativeError,
    arrStatic
} from 'dorimt';

console.log(is***(***));
// true/false
console.log(a.IsArray(***), a.Is***(***)); // Important: Not camelcase -> IsArray instead of isArray
// true/false
```
 
### Calculation

#### Trendline

```js
import a, 
{
    leastSquares
} from 'dorimt';
console.log(leastSquares([4, 2, 8]));
// return { a: 2, b: 0.6666666666666666 } that y=2x+0.666666
console.log(a.LeastSquares([4, 2, 8])); // Important: Not camelcase -> LeastSquares instead of leastSquares
// return { a: 2, b: 0.6666666666666666 } that y=2x+0.666666
```

## Performance

> Important: Sometimes native is slower then js way due to v8 optimize  
> For example -> script have better performance to verify many example of `undefined` is undefined or not  
> Please do benchmark testing before deploy.

```bash
c++: checking 857692584 is a prime number
true
native: 1273.028ms
js: checking 857692584 is a prime number
true
js: 2143.402ms
```

## Testing

```bash
make tests
# Or
npm test
```
