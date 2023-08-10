const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const repeat = Number(input[0]);
let cows = [-1,-1,-1,-1,-1,-1,-1,-1,-1,-1]
let cross = 0;
for (let i = 1; i <= repeat; i++) {
    const num = input[i].split(' ').map((n) => Number(n));
    const cowNum = num[0];
    const cowLoc = num[1];
    if (cows[cowNum - 1] === -1) {
        cows[cowNum - 1] = cowLoc;
        continue;
    }

    if(cows[cowNum - 1] !== cowLoc) {
        cross++;
        cows[cowNum - 1] = cowLoc;
    }
}
console.log(cross)