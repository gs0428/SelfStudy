const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
if(input[0].indexOf('0') === -1) {
    const a = Number(input[0][0]);
    const b = Number(input[0][1]);
    console.log(a + b);
} else {
    const zeroLoc = input[0].indexOf('0');
    const tmp = input[0].split('');
    tmp.splice(zeroLoc - 1, 2);
    const b = Number(tmp.join(''));
    console.log(10 + b);
}