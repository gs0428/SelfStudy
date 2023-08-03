const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const s = input[0]
const len = s.length
const repeat = len % 10 === 0 ? len / 10 : Math.ceil(len / 10);
for (let i = 0; i < repeat; i++) {
    console.log(s.substring(i * 10, (i + 1) * 10))
}