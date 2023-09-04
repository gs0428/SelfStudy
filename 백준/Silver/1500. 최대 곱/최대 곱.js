const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const [sum, num] = input[0].split(' ').map((n) => Number(n));
const div = Math.floor(sum / num);
const res = sum % num;
const same = Math.pow(div, num - res);
const bigger = Math.pow(div + 1, res);
console.log(Math.floor(same * bigger))