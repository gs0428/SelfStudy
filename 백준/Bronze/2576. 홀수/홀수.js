const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
let ans = [];
input.map((n)=> {
    if(Number(n) % 2 === 1)
        ans.push(Number(n));
})
if (ans.length === 0) {
    console.log(-1);
    return;
}
ans.sort((a,b) => {
    if(a >=b)
        return 1;
    else
        return -1;
});
let sum = ans.reduce((a, b) => a + b);
console.log(sum)
console.log(ans[0]);