const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const N = +input[0];
const nums = input[1].split(" ").map(Number);
const maxNum = Math.max(...nums);
const newAverage = nums.reduce((acc, cur) => acc + (cur / maxNum) * 100, 0);

console.log(newAverage / N);
