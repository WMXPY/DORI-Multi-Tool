# DORI Multi Tool

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

Check out [API and way to import](https://github.com/WMXPY/DORI-Multi-Tool/blob/master/doc/api.md) of DORI multi tool

Also:

- [API about verify functions](https://github.com/WMXPY/DORI-Multi-Tool/blob/master/doc/verifysAPI.md)
- [API about calculation functions](https://github.com/WMXPY/DORI-Multi-Tool/blob/master/doc/calcAPI.md)

[What about?](https://github.com/WMXPY/DORI-Multi-Tool/blob/master/doc/what.md) DORI multi tool

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
    is***blablabla
} from 'dorimt';

console.log(is***(***));
// true/false
console.log(a.IsArray(***), a.Is***(***)); // Important: Not camelcase -> IsArray instead of isArray
```
 
### Calculation

#### MD5

```js
import a, 
{
    MD5
} from 'dorimt';
console.log(MD5("test"));
// return 098f6bcd4621d373cade4e832627b4f6
console.log(a.md5("test"));
```

#### Trendline

```js
import a, 
{
    leastSquares
} from 'dorimt';
console.log(leastSquares([4, 2, 8]));
// return { a: 2, b: 0.6666666666666666 } that y=2x+0.666666
console.log(a.LeastSquares([4, 2, 8])); // Important: Not camelcase -> LeastSquares instead of leastSquares
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
