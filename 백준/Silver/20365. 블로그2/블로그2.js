const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const N = Number(input[0]);
const problems = input[1].split('');
let cnt = 0;
for (let i = 1; i < N; i++) {
    if (problems[i - 1] !== problems[i]) {
        cnt++;
    }
}
if (cnt % 2 === 0) {
    console.log(cnt / 2 + 1);
} else {
    console.log(Math.ceil(cnt / 2) + 1);
}