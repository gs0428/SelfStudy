const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const num = input[0].split(' ').map(Number);
console.log(Math.abs(num[3] + num[0] - num[1] - num[2]));