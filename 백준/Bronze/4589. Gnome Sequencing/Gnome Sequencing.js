const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
console.log("Gnomes:");
input.slice(1).map((n) => {
    let small = 0;
    let big = 0;
    const number = n.split(' ').map(Number);
    for (let i = 1; i < 3; i++) {
        if (number[i - 1] > number[i]) {
            big++;
        } else if (number[i - 1] < number[i]) {
            small++;
        }
    }

    if (small === 1 && big === 1) {
        console.log("Unordered");
    } else {
        console.log("Ordered")
    }
});