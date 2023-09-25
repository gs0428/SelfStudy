const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
let num = BigInt(input[0]);
if (num === 0n) {
    console.log('NO');
    return 0;
}
const factorial = (n) => {
    let value = BigInt(1);
    while (n > 1) {
        value *= n;
        n--;
    }
    return value;
};
let increaseNum = BigInt(0);
while (num > factorial(increaseNum)) {
    increaseNum++;
}
while (num > 0n && increaseNum >= 0n) {
    const tempNum = factorial(increaseNum);
    num -= tempNum;
    if (num < 0n) {
        num += tempNum
    }
    increaseNum--;
}
if (num === 0n) {
    console.log('YES');
} else {
    console.log('NO');
}