const {
    Hello,
    IsPrimeExample,
    IsNumber,
    IsArray
} = require("../build/Release/fv.node"); // native c++
const isPrime = require('./isPrime.js'); // js

console.log(Hello());
// console.time('native');
// console.log('c++: checking 654188429 is a prime number');
// console.log(IsPrime(654188429));
// console.timeEnd('native');
// console.time('js');
// console.log('js: checking 654188429 is a prime number');
// console.log(isPrime(654188429));
// console.timeEnd('js');

console.log(IsNumber("450"))
console.log(IsArray(["450"]))