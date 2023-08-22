const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
let num = input[0].split('').sort((a, b)=> {
    if(a < b) {
        return 1;
    } else {
        return -1;
    }
});
if (num.indexOf('0') === -1) {
    console.log(-1)
} else {
    const ans = num.join('');
    num = num.filter((a)=>a !== '0')
    num = num.reduce((a, b) => Number(a) + Number(b));
    if(num % 3 === 0) {
        console.log(ans)
    } else {
        console.log(-1)
    }
}