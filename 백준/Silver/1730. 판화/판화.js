const fs = require("fs");
const dns = require("dns");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const area = Number(input[0]);
const move = input[1];
let pass = []
let shoes = []
for (let i = 0; i < area; i++) {
    pass.push([])
    shoes.push([])
    for (let k = 0; k < area; k++) {
        pass[i].push(false)
        shoes[i].push('.')
    }
}
if (move !== undefined) {
    let col = 0, row = 0;
    for (let i = 0; i < move.length; i++) {
        switch (move[i]) {
            case 'L': {
                if (col !== 0) {
                    if (pass[row][col] && shoes[row][col] === '|') {
                        shoes[row][col] = '+'
                    }
                    if (pass[row][col - 1] && shoes[row][col - 1] === '|') {
                        shoes[row][col - 1] = '+';
                    }
                    if(shoes[row][col] !== '+') {
                        shoes[row][col] = '-';
                    }
                    if (shoes[row][col - 1] !== '+') {
                        shoes[row][col - 1] = '-';
                    }
                    pass[row][col] = true;
                    pass[row][col - 1] = true;
                    col--;
                }
                break;
            }
            case 'R': {
                if (col !== area - 1) {
                    if (pass[row][col] && shoes[row][col] === '|') {
                        shoes[row][col] = '+'
                    }
                    if (pass[row][col + 1] && shoes[row][col + 1] === '|') {
                        shoes[row][col + 1] = '+'
                    }
                    if(shoes[row][col] !== '+') {
                        shoes[row][col] = '-';
                    }
                    if (shoes[row][col + 1] !== '+') {
                        shoes[row][col + 1] = '-';
                    }
                    pass[row][col] = true;
                    pass[row][col + 1] = true;
                    col++;
                }
                break;
            }
            case 'D': {
                if (row !== area - 1) {
                    if (pass[row][col] && shoes[row][col] === '-') {
                        shoes[row][col] = '+'
                    }
                    if (pass[row + 1][col] && shoes[row + 1][col] === '-') {
                        shoes[row + 1][col] = '+'
                    }
                    if(shoes[row][col] !== '+') {
                        shoes[row][col] = '|';
                    }
                    if (shoes[row + 1][col] !== '+') {
                        shoes[row + 1][col] = '|';
                    }
                    pass[row][col] = true;
                    pass[row + 1][col] = true;
                    row++;
                }
                break;
            }
            case 'U': {
                if (row !== 0) {
                    if (pass[row][col] && shoes[row][col] === '-') {
                        shoes[row][col] = '+'
                    }
                    if (pass[row - 1][col] && shoes[row - 1][col] === '-') {
                        shoes[row - 1][col] = '+'
                    }
                    if(shoes[row][col] !== '+') {
                        shoes[row][col] = '|';
                    }
                    if (shoes[row - 1][col] !== '+') {
                        shoes[row - 1][col] = '|';
                    }
                    pass[row][col] = true;
                    pass[row - 1][col] = true;
                    row--;
                }
                break;
            }
        }
    }
}
for (let i = 0; i < area; i++) {
    console.log(shoes[i].join().replace(/,/g, ''))
}