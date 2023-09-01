const fs = require("fs");
const dns = require("dns");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const [book, maxWeight] = input[0].split(' ').map((n) => Number(n));
if(book === 0) {
    console.log(0);
    return 0;
}
const weights = input[1].split(' ').map((n) => Number(n));
let cnt = 0;
let sum = 0;
for (let i = 0; i < book; i++) {
    sum += weights[i];
    if(sum === maxWeight) {
        cnt++;
        sum = 0;
    } else if (sum > maxWeight) {
        cnt++;
        sum = weights[i];
    }
}
if (sum > 0) {
    cnt++;
}
console.log(cnt);