const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const rhythm = input[0].split(' ').map((n) => Number(n));
let isMixed = false;
let ans = 0;
for (let i = 1; i < 8; i++) {
    if (rhythm[i] - rhythm[i - 1] === 1 || rhythm[i] - rhythm[i - 1] === -1) {
        ans = rhythm[i] - rhythm[i - 1];
    } else {
        isMixed = true;
        break;
    }
}

if(isMixed) {
    console.log('mixed');
    return 0;
}
if(ans === 1) {
    console.log('ascending');
} else {
    console.log('descending');
}