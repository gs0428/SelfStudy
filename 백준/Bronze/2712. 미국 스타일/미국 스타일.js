const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
input.slice(1).map((test) => {
    const [weight, unit] = test.split(' ');
    if (unit === 'kg') {
        console.log(`${(Number(weight) * 2.2046).toFixed(4)} lb`)
    } else if (unit === 'lb') {
        console.log(`${(Number(weight) * 0.4536).toFixed(4)} kg`)
    } else if (unit === 'l') {
        console.log(`${(Number(weight) * 0.2642).toFixed(4)} g`)
    } else if (unit === 'g') {
        console.log(`${(Number(weight) * 3.7854).toFixed(4)} l`)
    }
});