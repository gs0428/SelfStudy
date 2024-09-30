const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const n = +input[0];
if (n === 0) return console.log(0);
const cutLine = Math.round(n * 0.15);

const score = input
  .slice(1)
  .sort((prev, next) => {
    if (+prev > +next) return 1;
    else return -1;
  })
  .slice(cutLine, n - cutLine)
  .reduce((prev, cur) => Number(prev) + Number(cur));

console.log(Math.round(score / (n - cutLine * 2)));
