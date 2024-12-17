const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
input.forEach((data, idx) => {
  if (idx === input.length - 1) return;
  const nums = data.split(" ").map(Number);
  const maxNum = Math.max(...nums);
  const index = nums.indexOf(maxNum);
  const longLen = maxNum ** 2;
  let totalLen = 0;
  nums.forEach((num, i) => {
    if (i !== index) totalLen += num ** 2;
  });

  const isRight = longLen === totalLen;
  console.log(isRight ? "right" : "wrong");
});
