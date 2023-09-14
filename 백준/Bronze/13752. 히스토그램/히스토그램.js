const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
input.slice(1).map((n)=>{
    let ans = "";
    for (let i = 0; i < Number(n); i++) {
        ans += "=";
    }
    console.log(ans)
})