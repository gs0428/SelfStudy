const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const [row, col] = input[0].split(' ').map((n) => Number(n));
let word = [];
let tmp = "";
for (let i = 1; i <= row; i++) {
    for (let k = 0; k < col; k++) {
        if(input[i][k] !== '#') {
            tmp += input[i][k];
        }
        if (input[i][k] === '#') {
            if (tmp.length > 1) {
                word.push(tmp);
            }
            tmp = "";
        }
    }
    if (tmp.length > 1) {
        word.push(tmp);
    }
    tmp = ""
}
for (let i = 0; i < col; i++) {
    for (let k = 1; k <= row; k++) {
        if (input[k][i] !== '#') {
            tmp += input[k][i];
        }
        if (input[k][i] === '#') {
            if (tmp.length > 1) {
                word.push(tmp);
            }
            tmp = ""
        }
    }
    if (tmp.length > 1) {
        word.push(tmp);
    }
    tmp = ""
}
word.sort();
console.log(word[0]);