const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
input.forEach((str) => {
  if (str === "0") return;
  const reversedStr = str.split("").reverse().join("");
  console.log(str === reversedStr ? "yes" : "no");
});
