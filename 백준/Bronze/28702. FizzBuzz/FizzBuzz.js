const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const numIndex = input.findIndex((n) => !isNaN(+n));

const value = +input[numIndex] + (3 - Number(numIndex));

if (value % 15 === 0) return console.log("FizzBuzz");
if (value % 3 === 0) return console.log("Fizz");
if (value % 5 === 0) return console.log("Buzz");
console.log(value);
