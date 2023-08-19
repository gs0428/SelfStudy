const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const [n, m] = input[0].split(' ').map((n) => Number(n));
if(n * 100 >= m) {
    console.log("Yes");
} else {
    console.log("No");
}