const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const subtractLoc = input[0].indexOf('-');
let min = 0;
if (subtractLoc === -1) {
    const num = input[0].split('+').map((n) => min += Number(n));
} else {
    const positiveInt = input[0].slice(0, subtractLoc).split('+');
    const negativeInt = input[0].slice(subtractLoc + 1).split('-').join(',').split('+').join(',').split(',');
    const sum = positiveInt.reduce((a, b) => Number(a) + Number(b));
    const sub = negativeInt.reduce((a, b) => Number(a) + Number(b));
    min = sum - sub
}
console.log(min)