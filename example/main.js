const {
    LeastSquares,
    IsNumber,
    IsArray,
    MD5
} = require("../build/Release/dorimt.node"); // native c++
const isPrime = require('./isPrime.js'); // js

console.log(MD5([4, 2, 8]))