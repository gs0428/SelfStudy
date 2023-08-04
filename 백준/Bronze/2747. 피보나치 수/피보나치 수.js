const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const num = Number(input)
if(num === 0) {
    console.log(0)

    return 0;
}

if(num === 1 || num === 2) {
    console.log(1)

    return 0;
}

let ans = [0, 1, 1];
for (let i = 3; i <= num; i++) {
    ans.push(ans[i - 1] + ans[i - 2]);
}
console.log(ans[num])