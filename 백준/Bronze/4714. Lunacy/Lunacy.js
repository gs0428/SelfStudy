const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const length = input.length;
const numbers = input.map(Number).splice(0, length - 1).map((number) => {
    console.log(`Objects weighing ${number.toFixed(2)} on Earth will weigh ${(number * 0.167).toFixed(2)} on the moon.` );
})