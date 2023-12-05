const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const stars = +input[0];
for (let i = 1; i < stars * 2 ; i++) {
    let printStar = '';
    const reverseNum = i > stars ? 2 * stars - i : i;
    for (let k = 0; k < reverseNum; k++) {
        printStar += '*';
    }
    for (let k = stars - 1; k >= reverseNum; k--) {
        printStar += ' ';
    }
    console.log(printStar + printStar.split('').reverse().join(''));
}