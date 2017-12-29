const {
    Hello,
    IsPrimeExample,
    IsPrime,
    IsNumber,
    IsArray
} = require("../build/Release/fv.node"); // native c++
const isPrime = require('./isPrime.js'); // js

// console.log(Hello());

// console.log(IsNumber("450"))
// console.log(IsArray(["450"]))