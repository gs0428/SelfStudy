const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const arr = input[0].split(" ").map(Number);
let [max, min] = arr[0] < arr[1] ? [arr[1], arr[0]] : arr;

const originMax = max;
const originMin = min;

let minNum = 0;

while (1) {
  let result = max % min;
  if (result === 0) {
    minNum = min;
    break;
  } else if (min % result === 0) {
    minNum = result;
    break;
  }
  max = min;
  min = result;
}

console.log(minNum);
console.log((originMax * originMin) / minNum);
