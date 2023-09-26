const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const [currentFreq, wantFreq] = input[0].split(' ').map((n) => Number(n));
let minBtn = Math.abs(currentFreq - wantFreq);
let isShortCut = false;
input.slice(2).map((n) => {
    const shortCut = Number(n);
    const gap = Math.abs(shortCut - wantFreq);
    if (gap < minBtn) {
        minBtn = gap;
        isShortCut = true;
    }
});

if (isShortCut) {
    minBtn += 1;
}

console.log(minBtn)