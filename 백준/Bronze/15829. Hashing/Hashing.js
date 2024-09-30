const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const str = input[1].split("");

let result = 0n;
const M = BigInt(1234567891);
str.forEach((s, i) => {
  const a = BigInt(s.codePointAt() - 96);
  const r = BigInt(31n ** BigInt(i));
  result += a * r;
});

console.log((result % M).toString());
