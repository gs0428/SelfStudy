const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const people = input[0].split(' ').map(Number);
const [x, y, r] = input[1].split(' ').map(Number);
const ans = people.indexOf(x);
if(ans === -1) {
    console.log(0);
} else {
    console.log(ans + 1);
}