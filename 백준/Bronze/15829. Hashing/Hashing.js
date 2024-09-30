const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const str = input[1].split("");

let result = 0;
str.forEach((s, i) => {
  result += Math.floor(((s.codePointAt() - 96) * Math.pow(31, i)) % 1234567891);
});

console.log(result);
