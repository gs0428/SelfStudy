const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
let max = 0;
let person
for (let i = 0; i < 5; i++) {
    const num = input[i].split(' ').map((n) => Number(n));
    const sum = num.reduce((a, b) => a + b);
    if(sum > max) {
        max = sum;
        person = i + 1;
    }
}
console.log(person + ' ' + max)