const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
let cups = [1, 2, 3];
input.slice(1).map((switchCup) => {
    const [left, right] = switchCup.split(' ').map(Number);
    const indexOfLeft = cups.indexOf(left);
    const indexOfRight = cups.indexOf(right);

    let temp;
    temp = cups[indexOfLeft]
    cups[indexOfLeft] = cups[indexOfRight];
    cups[indexOfRight] = temp;
});

console.log(cups[0])