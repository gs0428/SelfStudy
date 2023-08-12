const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
input.slice(1).map(((n)=> {
    if (n.length >= 6 && n.length <= 9) console.log('yes')
    else console.log('no')
}))
