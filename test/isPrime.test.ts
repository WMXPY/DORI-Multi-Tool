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

    it('3 should be a prime number', () => {
        let result: boolean = isPrime(3);
        expect(result).to.be.equal(true);
    });

    it('227 should be a prime number', () => {
        let result: boolean = isPrime(227);
        expect(result).to.be.equal(true);
    });

    it('1217 should be a prime number', () => {
        let result: boolean = isPrime(1217);
        expect(result).to.be.equal(true);
    });

    it('3607 should not be a prime number', () => {
        let result: boolean = isPrime(3627);
        expect(result).to.be.equal(false);
    });

});