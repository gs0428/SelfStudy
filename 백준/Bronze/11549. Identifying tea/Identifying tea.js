const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
let cnt = 0;
const number = Number(input[0]);
input[1].split(' ').map((n)=> {
    if (Number(n) === number) {
        cnt++;
    }
})
console.log(cnt);