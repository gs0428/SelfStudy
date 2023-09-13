const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const repeat = Number(input[0]);
const arr = []
let ans = "";
const number = input[1].split(' ').map((n) => Number(n));
const beforeSort = [...number];
number.sort((a, b) => {
    if (a > b) {
        return 1;
    } else {
        return -1;
    }
}).map((n, idx) => arr.push([n, idx]));
for (let i = 0; i < repeat; i++) {
    const num = number.indexOf(beforeSort[i]);
    number[num] = -1;
    ans += `${num} `;
}
console.log(ans)