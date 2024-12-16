const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const nums = input[0].split(" ").map(Number);
let i = 1;
while (1) {
  const filteredNums = nums.filter((num) => i % num === 0);
  if (filteredNums.length >= 3) break;
  i++;
}
console.log(i);
