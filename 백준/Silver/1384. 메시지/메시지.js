const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
let repeat = 1;
while (input[0] !== '0') {
    const std = input.splice(0, Number(input[0]) + 1);
    const num = Number(std[0]);
    let stdName = [];
    let stdPaper = [];
    for (let i = 1; i <= num; i++) {
        stdName.push(std[i].split(' ')[0]);
        stdPaper.push(std[i].split(' ').splice(1))
    }
    let cnt = 0;
    console.log(`Group ${repeat}`)
    for (let i = 0; i < num; i++) {
        while(stdPaper[i].indexOf('N') !== -1) {
            let bad = stdPaper[i].indexOf('N');
            stdPaper[i][bad] = 'P'
            let loc = i - bad - 1;
            if (loc < 0) {
                loc += num
            }
            if (loc > num - 1) {
                loc -= num;
            }
            console.log(`${stdName[loc]} was nasty about ${stdName[i]}`)
            cnt++;
        }
    }
    if (cnt === 0) {
        console.log('Nobody was nasty')
    }
    console.log()
    repeat++;
}