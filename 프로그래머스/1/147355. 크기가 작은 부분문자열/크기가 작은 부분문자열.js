function solution(t, p) {
    var answer = 0;
    const length = p.length;
    const numP = +p;
    for(let i = 0;i <= t.length - length; i++) {
        const num = +t.slice(i, i + length);
        if(num <= numP) {
            answer++;
        }
    }
    return answer;
}