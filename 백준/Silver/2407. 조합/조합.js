const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const [n, m] = input[0].split(' ').map(BigInt);

const combination = (n, m) => {
    let top = BigInt(1);
    let bot = BigInt(1);
    const repeat = BigInt(m);

    for (let i = BigInt(0); i < repeat; i++) {
        top *= n - i;
        bot *= m - i;
    }

    return top / bot;
}

console.log(combination(n, m).toString().replace('n', ' '));