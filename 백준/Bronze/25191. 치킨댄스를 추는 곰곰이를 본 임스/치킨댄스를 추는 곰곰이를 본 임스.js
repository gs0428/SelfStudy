const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const chickens = Number(input[0]);
const [coke, beer] = input[1].split(' ').map(Number);
let count = 0;
count += Math.floor(coke / 2);
count += beer;
if (count <= chickens) {
    console.log(count);
} else {
    console.log(chickens);
}