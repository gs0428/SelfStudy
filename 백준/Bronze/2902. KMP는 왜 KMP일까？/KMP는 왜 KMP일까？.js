const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const name = input[0].split('-');
let ans = ''
name.map((n) => ans += n[0]);
console.log(ans)