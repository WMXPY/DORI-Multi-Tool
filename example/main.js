const {
    LeastSquares,
    IsNumber,
    IsArray,
    DDD
} = require("../build/Release/dorimt.node"); // native c++
const isPrime = require('./isPrime.js'); // js

console.log(DDD([4, 2, 8]))