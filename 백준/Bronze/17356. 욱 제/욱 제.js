const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const [A, B] = input[0].split(' ').map(Number);
const M = (B - A) / 400;
console.log(1 / (1 + Math.pow(10, M)));