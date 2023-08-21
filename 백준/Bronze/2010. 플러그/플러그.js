const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const total = Number(input[0]);
let sum = 0;
input.slice(1).map((n)=>sum += Number(n));
console.log(sum - (total - 1));