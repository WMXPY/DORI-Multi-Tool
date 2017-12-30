declare const require: any;

const nodeComponent: {
    Hello: Function,
    IsPrime: Function,
    IsNumber: Function,
    IsArray: Function,
    IsFunction: Function,
    IsObject: Function,
    IsString: Function,
    IsNativeError: Function,
    IsRegExp: Function,
    IsNull: Function,
    IsBoolean: Function,
    IsUndefined: Function,
    IsDate: Function,
    ArrStatic: Function
} = require("../build/Release/fv.node");

export default nodeComponent;

export const Hello: Function = nodeComponent.Hello;
export const isPrime: Function = nodeComponent.IsPrime;
export const isNumber: Function = nodeComponent.IsNumber;
export const isArray: Function = nodeComponent.IsArray;
export const isFunction: Function = nodeComponent.IsFunction;
export const isObject: Function = nodeComponent.IsObject;
export const isString: Function = nodeComponent.IsString;
export const isNativeError: Function = nodeComponent.IsNativeError;
export const isRegExp: Function = nodeComponent.IsRegExp;
export const isNull: Function = nodeComponent.IsNull;
export const isBoolean: Function = nodeComponent.IsBoolean;
export const isUndefined: Function = nodeComponent.IsUndefined;
export const isDate: Function = nodeComponent.IsDate;
export const arrStatic: Function = nodeComponent.ArrStatic;