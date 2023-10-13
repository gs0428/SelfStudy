const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const heights = input.map(Number);
let same = 0;
let rising = 0;
let falling = 0;
for (let i = 1; i < 4; i++) {
    if (heights[i - 1] > heights[i]) {
        falling++;
    }
    else if (heights[i - 1] < heights[i]) {
        rising++;
    } else {
        same++;
    }
}

if (rising === 3) {
    console.log("Fish Rising");
} else if (falling === 3) {
    console.log("Fish Diving")
} else if (same === 3) {
    console.log("Fish At Constant Depth");
} else {
    console.log("No Fish");
}