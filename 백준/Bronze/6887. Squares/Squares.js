const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const num = Math.floor(Math.sqrt(Number(input[0])));
console.log(`The largest square has side length ${num}.`)