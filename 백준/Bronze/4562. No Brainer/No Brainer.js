const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
input.slice(1).map((brains) => {
    const [currentBrain, requireBrain] = brains.split(' ').map(Number);
    if (currentBrain >= requireBrain) {
        console.log("MMM BRAINS");
    } else {
        console.log("NO BRAINS");
    }
})