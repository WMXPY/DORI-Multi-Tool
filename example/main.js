const {
    ArrStatic,
    IsNumber,
    IsArray
} = require("../build/Release/fv.node"); // native c++
const isPrime = require('./isPrime.js'); // js

console.log(ArrStatic([3, 4, 5]));
// console.log(IsNumber("450"))
// console.log(IsArray(["450"]))