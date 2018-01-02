# api

## imports

DORI multi tool have two ways to import

### Global

```js
import a from 'dorimt'
```

then you can call any function of tool by call `a.<function name>(<arguments>)`, see what function you can call in APIS

### ES6

```js
import {<Function Name 1>, <Function Name 2>} from 'dorimt'
```

then you can call any function of tool by directly call `<function name>(<arguments>)`, see what function you can import in APIS

### CommonJS

```js
const a = require('dorimt');
//or
const {<Function Name 1>, <Function Name 2>} = require('dorimt');
```

just same as two ways above, but commonjs way

## javascript object verifys

See [API of verify functions](https://github.com/WMXPY/DORI-Multi-Tool/blob/master/doc/verifysAPI.md)

## calculations

See [API of calculation functions](https://github.com/WMXPY/DORI-Multi-Tool/blob/master/doc/calcAPI.md)