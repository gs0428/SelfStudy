const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const num = input[0].split(' ').map((n) => Number(n));
if (num[0] === num[1]) {
    console.log(1)
} else {
    console.log(0)
}