const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
let min = 101;
let num;
let sum = 0;
const uni = input[0].split(' ').map((n, idx)=> {
    let tmp;
    tmp = Number(n);
    if (tmp < min) {
        min = tmp
        num = idx;
    }
    sum += tmp;
})
if (sum >= 100) {
    console.log("OK");
} else {
    switch (num) {
        case 0 :
            console.log("Soongsil");
            break;
        case 1:
            console.log("Korea");
            break;
        case 2:
            console.log("Hanyang");
            break;
    }
}