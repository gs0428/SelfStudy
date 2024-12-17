const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const [N, K] = input[0].split(" ").map(Number);

const factorial = (n) => {
  if (n === 1 || n === 0) return 1;
  let num = 1;
  for (let i = n; i >= 2; i--) {
    num *= i;
  }
  return num;
};

const combination = (n, k) => {
  const top = factorial(n);
  const bot = factorial(k) * factorial(n - k);
  return top / bot;
};

console.log(combination(N, K));
