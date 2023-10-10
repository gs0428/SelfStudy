const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const money = input.splice(1).map(Number).sort((a, b) => {
    if (a < b) {
        return 1;
    } else {
        return -1;
    }
});
let totalTip = 0;
money.map((m, idx) => {
    if (m > idx) {
        totalTip += m - idx;
    }
});

console.log(totalTip)