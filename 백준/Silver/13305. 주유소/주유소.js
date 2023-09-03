const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const countries = Number(input[0]);
const distance = input[1].split(' ').map((n) => Number(n));
const price = input[2].split(' ').map((n) => Number(n));
let total = 0;
for (let i = 0; i < countries - 1; i++) {
    let k = i;
    let dis = 0;
    while (price[i] <= price[k + 1] && k < countries - 2) {
        dis += distance[k];
        k++;
    }
    dis += distance[k];
    total += dis * price[i]
    if (k === countries - 2) {
        break;
    }
}
console.log(total)