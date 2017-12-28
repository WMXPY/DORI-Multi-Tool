declare const require: any;

const nodeComponent = require("../build/Release/addon.node");

export default nodeComponent;
export const Hello = nodeComponent.Hello;
export const isPrime = nodeComponent.isPrime;