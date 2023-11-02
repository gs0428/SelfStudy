const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const [n1, k1, n2, k2] = input[0].split(' ').map(Number);
console.log(n1 * k1 + n2 * k2);