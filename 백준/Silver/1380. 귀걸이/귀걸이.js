const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
let n = 0;
let re = 1;
while(input[n] !== '0') {
    let std = Number(input[n]);
    let name = [];
    for (let i = n + 1; i <= std + n; i++) {
        name.push([input[i], 0]);
    }
    let repeat = 2 * std - 1;
    let give = std + 1;
    for (let i = give + n; i < 3 * std + n; i++) {
        // console.log(name)
        // console.log(input[i])
        let num = Number(input[i].split(' ')[0]);
        name[num - 1][1]++;
    }
    name.map((n, idx)=> {
        if (n[1] === 1) {
            console.log(`${re} ${n[0]}`)
        }
    })
    n += give + repeat;
    re++;
}