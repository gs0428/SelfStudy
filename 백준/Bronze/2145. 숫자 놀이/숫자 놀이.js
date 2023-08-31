const fs = require("fs");
const dns = require("dns");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
let n = 0;
while (input[n] !== '0') {
    let num = input[n].split('').map((n) => Number(n));
    while (num.length !== 1) {
        let sum = 0;
        num.map((n) => sum += n);
        num = sum.toString().split('').map((n) => Number(n));
    }
    console.log(num[0])
    n++;
}