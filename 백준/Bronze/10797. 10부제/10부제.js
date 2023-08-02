const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const find = input[0];
const nums = input[1].split(' ');
let cnt = 0;
const ans = nums.filter((num) => {
    if (num === find) cnt++
});
console.log(cnt)