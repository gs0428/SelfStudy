const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
let tmp = input[0].split(' ').map((n) => Number(n));
const repeat = tmp[0];
const find = tmp[1];
tmp = input[1].split(' ').map((n) => Number(n));
const sum = [0];
for (let i = 1; i <= repeat; i++) {
    sum.push(tmp[i - 1] + sum[i - 1]);
}
let start = 0, end = 0;
let len = 100001;
while (1) {
    if(end > repeat || start > end)
        break;

    if (sum[end] - sum[start] < find) {
        end++;
    } else if (sum[end] - sum[start] >= find) {
        if(end - start < len) {
            len = end - start;
        }
        start++;
    }
}
if(len === 100001) {
    console.log(0)
} else {
    console.log(len)
}