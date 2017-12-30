const {
    Hello,
    IsNumber,
    IsArray
} = require("../build/Release/fv.node"); // native c++
const isPrime = require('./isPrime.js'); // js

console.log(Hello(3));
console.log(IsNumber("450"))
console.log(IsArray(["450"]))