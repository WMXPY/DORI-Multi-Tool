declare const require: any;

const nodeComponent = require("../build/Release/fv.node");

export default nodeComponent;
export const Hello = nodeComponent.Hello;
export const isPrime = nodeComponent.IsPrime;
export const isNumber = nodeComponent.IsNumber;
export const isArray = nodeComponent.IsArray;
export const isFunction = nodeComponent.IsFunction;
export const isObject = nodeComponent.IsObject;
export const isString = nodeComponent.IsString;