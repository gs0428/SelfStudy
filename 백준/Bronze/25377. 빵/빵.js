const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
let minute = 1001;
input.slice(1).map((time) => {
    const [A, B] = time.split(' ').map(Number);
    if(B >= A && B < minute) {
        minute = B;
    }
})

if(minute === 1001)
    console.log(-1);
else
    console.log(minute);