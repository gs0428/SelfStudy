const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const a = input.slice(0, 4).map((n) => Number(n));
const b = input.slice(4).map((n) => Number(n));
const sumA = a.reduce((n, m) => n + m);
const sumB = b.reduce((n, m) => n + m);
const minA = Math.min(...a);
const minB = Math.min(...b);
const ans = sumA + sumB - minA - minB;
console.log(ans)