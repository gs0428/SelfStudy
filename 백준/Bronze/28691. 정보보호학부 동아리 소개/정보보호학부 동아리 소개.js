const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const ans = input[0];
if (ans === 'M') {
    console.log('MatKor');
} else if (ans === 'W') {
    console.log('WiCys');
} else if (ans === 'C') {
    console.log('CyKor');
} else if (ans === 'A') {
    console.log('AlKor');
} else if (ans === '$') {
    console.log('$clear');
}