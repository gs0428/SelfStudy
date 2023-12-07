const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const [N, M, K] = input[0].split(' ').map(Number);
console.log(`${Math.floor(K / M)} ${K % M}`);