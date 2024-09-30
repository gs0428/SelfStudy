const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");

input.slice(0, input.length - 1).forEach((str) => {
  let arr = [];
  let i = 0;
  let isValid = true;

  while (str[i] !== ".") {
    if (str[i] === "(" || str[i] === "[") {
      arr.push(str[i]);
    } else if (str[i] === ")" || str[i] === "]") {
      if (
        arr.length === 0 ||
        (str[i] === ")" && arr[arr.length - 1] !== "(") ||
        (str[i] === "]" && arr[arr.length - 1] !== "[")
      ) {
        isValid = false;
        break;
      }
      arr.pop();
    }

    i++;
  }

  if (arr.length > 0 || !isValid) console.log("no");
  else console.log("yes");
});
