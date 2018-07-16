const {
    Hello,
    ForEach,
} = require("../build/Release/dorimt.node"); // native c++
const isPrime = require('./isPrime.js'); // js

ForEach([1.2, 0.8, 1.1, 0.1, 2], (a) => console.log(a));