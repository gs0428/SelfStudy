const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
input.map((s)=> {
    let str = s.split('');
    for (let i = 0; i < str.length; i++) {
        if (str[i] === 'e') {
            str[i] = 'i';
        } else if (str[i] === 'i') {
            str[i] = 'e';
        } else if (str[i] === 'E') {
            str[i] = 'I';
        } else if (str[i] === 'I') {
            str[i] = 'E';
        }
    }
    console.log(str.join(''));
})