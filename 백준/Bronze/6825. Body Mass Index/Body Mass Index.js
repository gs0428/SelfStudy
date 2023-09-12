const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const weight = Number(input[0]);
const height = Math.pow(Number(input[1]), 2);
const ans = Number((weight / height).toFixed(1));
if (ans > 25) {
    console.log("Overweight");
} else if (ans <= 25 && ans >= 18.5) {
    console.log("Normal weight");
} else {
    console.log("Underweight");
}