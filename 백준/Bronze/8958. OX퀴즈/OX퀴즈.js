const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const repeat = Number(input[0]);
const test = input.splice(1).map((n) => n.split(''));
for (let i = 0; i < repeat; i++) {
    let ans = 0;
    let circle = 0;
    if(test[i][0] === 'O') {
        circle++;
    }
    ans += circle
    for (let k = 1; k < test[i].length; k++) {
        if (test[i][k] === 'O' && test[i][k - 1] === 'O') {
            circle++;
            ans += circle;
        } else if (test[i][k] === 'O' && test[i][k - 1] === 'X') {
            ans += 1;
            circle = 1;
        } else {
            circle = 0;
        }
    }
    console.log(ans)
}