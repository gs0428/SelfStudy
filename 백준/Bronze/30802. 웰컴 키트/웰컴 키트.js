const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const N = +input[0];
const [T, P] = input[2].split(" ").map((i) => +i);

let answerT = 0;
let quotientP = Math.floor(N / P);
let restP = N % P;

for (num of input[1].split(" ")) {
  answerT += +num % T === 0 ? Math.floor(+num / T) : Math.floor(+num / T) + 1;
}

console.log(answerT);
console.log(quotientP, restP);
