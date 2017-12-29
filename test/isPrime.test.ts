import { expect } from 'chai';
import { isPrime } from '../src/import';

describe('isPrime testing', () => {

    it('1 should not be a prime number', () => {
        let result: boolean = isPrime(1);
        expect(result).to.be.equal(false);
    });

    it('2 should be a prime number', () => {
        let result: boolean = isPrime(2);
        expect(result).to.be.equal(true);
    });

    it('1217 should be a prime number', () => {
        let result: boolean = isPrime(1217);
        expect(result).to.be.equal(true);
    });

    it('3627 should not be a prime number', () => {
        let result: boolean = isPrime(3627);
        expect(result).to.be.equal(false);
    });

});