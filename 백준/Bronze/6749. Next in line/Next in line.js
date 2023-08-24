const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const young = Number(input[0]);
const middle = Number(input[1]);
console.log(2 * middle - young)