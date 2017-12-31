const {
    LeastSquares,
    IsNumber,
    IsArray
} = require("../build/Release/dorimt.node"); // native c++
const isPrime = require('./isPrime.js'); // js

console.log(LeastSquares([4, 2, 8]))