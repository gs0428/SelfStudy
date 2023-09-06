const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split("\n");
const koreanMelon = Number(input[0]);
const direction = [[], [], [], []];
const ans = [];
let rect = 1;
input.slice(1).map((n, idx) => {
    const [dir, distance] = n.split(' ');
    direction[Number(dir) - 1].push([Number(distance), idx]);
    if (direction[Number(dir) - 1].length === 2) {
        ans.push(...direction[Number(dir) - 1])
    }
});
direction.map((n)=> {
    if (n.length === 1) {
        rect *= n[0][0];
    }
})
ans.sort((a, b)=>{
    if (a[1] > b[1]) {
        return 1;
    } else {
        return -1;
    }
})
if (ans[3][1] - ans[0][1] !== 3) {
    while (ans[0][1] - ans[3][1] !== 3) {
        const tmp = ans.shift();
        ans.push(tmp)
    }
}
const del = ans[1][0] * ans[2][0];
const area = rect - del;
console.log(area * koreanMelon)