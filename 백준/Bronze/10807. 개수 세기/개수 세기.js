const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
let input = fs.readFileSync(filePath).toString().trim().split("\n");
const repeat = Number(input[0]);
const arr = input[1].split(' ');
const ans = [];
for (let i = 0; i < repeat; i++) {
    ans.push(Number(arr[i]));
}
const num = Number(input[2]);
let cnt = 0;
for (let i = 0; i < repeat; i++) {
    if(ans[i] === num)
        cnt++;
}
console.log(cnt)