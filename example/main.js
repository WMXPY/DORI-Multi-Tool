const {
    Hello
} = require("../build/Release/dorimt.node"); // native c++
const isPrime = require('./isPrime.js'); // js

console.log(Hello(0.2, [1.2, 0.8, 1.1, 0.1, 2]));