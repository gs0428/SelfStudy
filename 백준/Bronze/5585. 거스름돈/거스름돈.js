const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
let change = 1000 - Number(input[0]);
let ans = 0;
if(change >= 500) {
    ans += Math.floor(change / 500);
    change %= 500;
}
if (change >= 100) {
    ans += Math.floor(change / 100);
    change %= 100;
}
if (change >= 50) {
    ans += Math.floor(change / 50);
    change %= 50;
}
if (change >= 10) {
    ans += Math.floor(change / 10);
    change %= 10;
}
if (change >= 5) {
    ans += Math.floor(change / 5);
    change %= 5;
}
if (change >= 1) {
    ans += change
}

console.log(ans)