const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const num = +input[0];
if (num >= 620 && num <= 780) {
    console.log("Red");
} else if (num >= 590 && num < 620) {
    console.log("Orange");
}  else if (num >= 570 && num < 590) {
    console.log("Yellow");
} else if (num >= 495 && num < 570) {
    console.log("Green");
} else if (num >= 450 && num < 495) {
    console.log("Blue");
} else if (num >= 425 && num < 450) {
    console.log("Indigo");
} else if (num >= 380 && num < 425) {
    console.log("Violet");
}