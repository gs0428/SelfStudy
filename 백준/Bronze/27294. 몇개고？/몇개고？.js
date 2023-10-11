const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const [mealTime, withDrink] = input[0].split(' ').map(Number);

if (mealTime >= 12 && mealTime <= 16 && withDrink === 0) {
    console.log(320);
} else {
    console.log(280);
}