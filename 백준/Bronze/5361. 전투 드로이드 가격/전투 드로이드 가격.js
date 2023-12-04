const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
input.slice(1).map((information) => {
    let total = 0;
    const prices = [350.34, 230.90, 190.55, 125.30, 180.90];
    information.split(' ').map(Number).map((money, idx)=>{
        total += money * prices[idx];
    })
    console.log(`$${total.toFixed(2)}`)
})