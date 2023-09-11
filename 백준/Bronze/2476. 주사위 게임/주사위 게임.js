const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const repeat = Number(input[0]);
let money = 0;
for (let i = 1; i <= repeat; i++) {
    let tmp;
    const number = input[i].split(' ').map((n) => Number(n)).sort((a, b) => {
        if (a > b) {
            return 1;
        } else {
            return -1;
        }
    });

    if (number[0] === number[2]) {
        tmp = 10000 + number[0] * 1000;
    } else if (number[0] === number[1] || number[2] === number[1]) {
        tmp = 1000 + number[1] * 100;
    } else {
        tmp = number[2] * 100;
    }
    if (tmp > money) {
        money = tmp;
    }
}
console.log(money)