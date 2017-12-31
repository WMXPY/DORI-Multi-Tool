declare const require: any;

const nodeComponent: {
    Hello(): string,
    IsPrime(target: number): boolean,
    IsNumber(target: any): boolean,
    IsArray(target: any): boolean,
    IsFunction(target: any): boolean,
    IsObject(target: any): boolean,
    IsString(target: any): boolean,
    IsNativeError(target: any): boolean,
    IsRegExp(target: any): boolean,
    IsNull(target: any): boolean,
    IsBoolean(target: any): boolean,
    IsUndefined(target: any): boolean,
    IsDate(target: any): boolean,
    ArrStatic(target: Array<number>): {
        average: number
    },
    // Use a and b in y=ax+b trendline
    LeastSquares(target: Array<number>): {
        a: number,
        b: number
    }
} = require("../build/Release/dorimt.node");

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
export const leastSquares: Function = nodeComponent.LeastSquares;