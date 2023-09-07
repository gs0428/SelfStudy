const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const [A, B] = input[0].split(' ').map((n) => Number(n));
let isPrime = [];
let cnt = 0;
const prime = []

const dividing = (n) => {
    let i = 0;
    let dived = 0;
    while(n !== 1) {
        if (n % prime[i] === 0) {
            n /= prime[i]
            dived++;
        } else {
            i++;
        }
    }
    return dived;
}

for (let i = 0; i <= B; i++) {
    isPrime.push(true)
}
for (let i = 2; i <= Math.floor(Math.sqrt(B)); i++) {
    if (!isPrime) {
        continue;
    }
    for (let k = 2 * i; k <= B; k += i) {
        isPrime[k] = false;
    }
}
isPrime.slice(2).map((n, idx) => {
    if (n)
        prime.push(idx + 2)
});
for (let i = A; i <= B; i++) {
    const number = dividing(i);
    if (isPrime[number] && number > 1) {
        cnt++;
    }
}
console.log(cnt)