const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const repeat = Number(input[0]);
for (let i = 1; i <= repeat; i++) {
    console.log(input[i].split(',').map((num) => Number(num)).reduce((a, b) => a + b));
}