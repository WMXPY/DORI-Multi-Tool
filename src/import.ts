declare const require: any;

const nodeComponent: {

    // Hello
    Hello(): string,

    // Verifys
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

    // Calcs
    ForEach<T>(target: Array<T>, func: (element: T) => void): void;
    ArrStatic(target: Array<number>): {
        average: number
    },
    // Use a and b in y=ax+b trend line
    LeastSquares(target: Array<number>): {
        a: number,
        b: number
    },
    MD5(content: string): string,
    Similar(content: string, list: string[]): string[],
} = require("../build/Release/dorimt.node");

export default nodeComponent;

// Hello
export const Hello: Function = nodeComponent.Hello;

// Verify
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

// Calcs
export const forEach: Function = nodeComponent.ForEach;
export const arrStatic: Function = nodeComponent.ArrStatic;
export const leastSquares: Function = nodeComponent.LeastSquares;
export const md5: Function = nodeComponent.MD5;
export const similar: Function = nodeComponent.Similar;