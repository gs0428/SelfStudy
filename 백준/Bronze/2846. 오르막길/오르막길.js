const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const road = Number(input[0]);
const height = input[1].split(' ').map((n) => Number(n));
if (road === 1) {
    console.log(0);
    return 0;
}

let start = 0, end = 0, max = -1;

for (let i = 1; i < road; i++) {
    if (height[i] > height[i - 1]) {
        end = i;
    } else if (height[i] <= height[i - 1]) {
        if (height[end] - height[start] > max) {
            max = height[end] - height[start];
        }
        start = i;
        end = i;
    }
}
if (height[end] - height[start] > max) {
    max = height[end] - height[start];
}

if(max === -1) {
    console.log(0)
} else {
    console.log(max)
}