const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const T = +input[0];

for (let i = 1; i <= T * 2; i += 2) {
  const k = +input[i];
  const n = +input[i + 1];

  let arr = Array.from({ length: n }, (_, i) => i + 1);

  for (let j = 1; j < k; j++) {
    for (let l = 1; l < n; l++) {
      arr[l] = arr[l - 1] + arr[l];
    }
  }
  const sum = arr.reduce((prev, acc) => prev + acc);
  console.log(sum);
}
