declare const require: any;

const nodeComponent = require("../build/Release/fv.node");

export default nodeComponent;
export const Hello = nodeComponent.Hello;
export const isPrime = nodeComponent.isPrime;