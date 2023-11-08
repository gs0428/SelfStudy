const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
if (input[0].toLowerCase() === 'n') {
    console.log('Naver D2');
} else {
    console.log('Naver Whale');
}