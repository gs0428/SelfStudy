const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const temp = input[0].split(' ');
const nums = temp.map((num) => Number(num));
nums.sort(function(a, b){
    if(a > b)
        return 1;
    else if (a === b)
        return 0;
    else
        return -1;
})
console.log(nums[1])