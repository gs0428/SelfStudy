const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const arrGroup = Array.from({ length: 51 }, () => []);
const uniqueWords = Array.from(new Set(input.splice(1)));
uniqueWords.forEach((word) => {
  const len = word.length;
  arrGroup[len].push(word);
});
const filteredArr = arrGroup
  .filter((arr) => arr.length !== 0)
  .map((arr) => arr.sort());
filteredArr.forEach((arr) => arr.forEach((a) => console.log(a)));
