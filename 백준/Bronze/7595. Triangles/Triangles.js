const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const num = input.map((n) => Number(n));
for (let i = 0; i < num.length - 1; i++) {
    for (let k = 1; k <= num[i]; k++) {
        let ans = '';
        for (let j = 0; j < k; j++) {
            ans += '*'
        }
        console.log(ans)
    }
}