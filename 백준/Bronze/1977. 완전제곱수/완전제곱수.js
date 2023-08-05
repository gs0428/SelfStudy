const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const min = Number(input[0]);
const max = Number(input[1]);
let start = Math.floor(Math.sqrt(min));
let ans = 0;
let minValue;
while (Math.pow(start, 2) <= max) {
    if (Math.pow(start, 2) >= min && Math.pow(start, 2) <= max) {
        if (ans === 0) {
            minValue = Math.pow(start, 2);
        }
        ans += Math.pow(start, 2);
    }
    start++;
}

if(ans === 0) {
    console.log(-1);
}
if(ans !== 0) {
    console.log(ans)
    console.log(minValue)
}
