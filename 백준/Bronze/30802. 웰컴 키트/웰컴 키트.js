const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const total = +input[0];
const sizes = input[1].split(" ").map(Number);
const [T, P] = input[2].split(" ").map(Number);
const totalShirts = sizes.reduce((acc, cur) => {
  return (acc += cur % T === 0 ? cur / T : Math.floor(cur / T) + 1);
}, 0);
console.log(totalShirts);
const share = Math.floor(total / P);
const rest = total % P;
console.log(share, rest);
