const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const arr = Array.from({ length: 201 }, () => []);
input.splice(1).forEach((person) => {
  const [age, name] = person.split(" ");
  arr[age].push(name);
});
arr.forEach((a, idx) => {
  if (a.length === 0) return;
  a.forEach((n) => console.log(idx, n));
});
