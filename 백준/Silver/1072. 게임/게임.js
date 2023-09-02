const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
let [games, win] = input[0].split(' ').map((n) => Number(n));
const winRate = Math.floor(win / games * 100);
if (winRate >= 99) {
    console.log(-1);
    return 0;
}
const changeRate = Math.floor(win * 100 / games) + 1;
const ans = Math.ceil((changeRate * games - 100 * win) / (100 - changeRate));
console.log(ans);