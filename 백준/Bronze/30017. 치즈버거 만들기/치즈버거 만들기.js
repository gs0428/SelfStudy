const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const [p, c] = input[0].split(' ').map(Number);
if(p <= c) {
    console.log(2 * p - 1);
} else {
    console.log(2 * c + 1);
}