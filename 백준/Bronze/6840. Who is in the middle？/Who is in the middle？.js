const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const num = input.map((n) => Number(n));
num.sort((a,b)=>{
    if(a > b) {
        return 1;
    } else {
        return -1
    }
})
console.log(num[1])