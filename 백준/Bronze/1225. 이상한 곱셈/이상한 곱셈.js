const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const [A, B] = input[0].split(' ');
const sepA = A.split('').map((a) => Number(a));
const sepB = B.split('').map((b) => Number(b));
let sum = 0;
for (let i = 0; i < sepB.length; i++) {
    for (let k = 0; k < sepA.length; k++) {
        sum += sepA[k] * sepB[i];
    }
}
console.log(sum)