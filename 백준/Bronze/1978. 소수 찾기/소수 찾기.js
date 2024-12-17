const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
let total = +input[0];
const nums = input[1].split(" ").map(Number);
nums.forEach((num) => {
  if (!isDecimal(num)) total -= 1;
});

function isDecimal(num) {
  if (num === 1) return false;

  for (let i = 2; i < num; i++) {
    if (num % i === 0) return false;
  }

  return true;
}

console.log(total);
