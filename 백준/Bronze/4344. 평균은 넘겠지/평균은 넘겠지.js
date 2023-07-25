const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
let input = fs.readFileSync(filePath).toString().trim();
const testing = input.split("\n");
const test = Number(testing[0]);
const inputTestCase = [];

for (let i = 1; i <= test; ++i) {
  const arr = testing[i].split(" ").map((item) => Number(item));
  let sum = 0;
  for (let k = 1; k <= arr[0]; k++) {
    sum += arr[k];
  }
  let avg = sum / arr[0];

  let over = 0;
  for (let k = 1; k <= arr[0]; k++) {
    if (arr[k] > avg) over++;
  }
  console.log(((over / arr[0]) * 100).toFixed(3) + "%");
}