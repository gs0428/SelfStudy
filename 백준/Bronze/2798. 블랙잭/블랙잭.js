const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const [N, M] = input[0].split(" ").map(Number);
const nums = input[1].split(" ").map(Number);
const sums = [];

for (let i = 0; i < N - 2; i++) {
  for (let k = i + 1; k < N - 1; k++) {
    for (let j = k + 1; j < N; j++) {
      sums.push(nums[i] + nums[k] + nums[j]);
    }
  }
}

const arr = Array.from(new Set([...sums]))
  .filter((value) => value <= M)
  .sort((a, b) => a - b);
console.log(arr.pop());
