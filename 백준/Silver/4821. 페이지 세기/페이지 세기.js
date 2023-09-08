const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
while (input[0] !== '0') {
    const testCase = input.splice(0, 2);
    let cnt = 0;
    const isPrint = [];
    let min = 1000;
    for (let i = 0; i <= 1000; i++) {
        isPrint.push(false)
    }
    let [lastPage, pages] = testCase;
    lastPage = Number(lastPage);
    pages = pages.split(',');
    for (let i = 0; i < pages.length; i++) {
        let [low, high] = pages[i].split('-').map((n) => Number(n));
        if (high === undefined) {
            isPrint[low] = true;
            if (low < min) {
                min = low;
            }
            continue;
        }
        if (low > high) {
            continue;
        }
        if (high > lastPage) {
            high = lastPage;
        }
        for (let k = low; k <= high; k++) {
            isPrint[k] = true;
        }
        if (low < min) {
            min = low;
        }
    }
    for (let i = min; i <= lastPage; i++) {
        if (isPrint[i]) {
            cnt++;
        }
    }
    console.log(cnt);
}