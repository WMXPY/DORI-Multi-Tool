const {
    ArrStatic,
    IsNumber,
    IsArray
} = require("../build/Release/dorimt.node"); // native c++
const isPrime = require('./isPrime.js'); // js


let a = [];
for (let i = 0; i < 100000; i++) {
    a.push(i);
}
console.time("native");
ArrStatic(a);
console.timeEnd("native");
console.time("js");
let sum = 0;
for (let i = 0; i < a.length; i++) {
    sum = sum + a[i];
}
let result = sum / a.length;
console.timeEnd("js");
// console.log(IsNumber("450"))
// console.log(IsArray(["450"]))