package bronze3;

import java.io.*;
import java.util.*;

public class Num2506 { // 점수 계산
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int N = Integer.parseInt(br.readLine());
        int[] ans = new int[N];
        StringTokenizer st = new StringTokenizer(br.readLine());
        int score = 0;
        int plus = 1;

        for(int i = 0;i<N;i++) {
            ans[i] = Integer.parseInt(st.nextToken());
            if(i > 0){
                if(ans[i-1] == 0 && ans[i] == 1) {          // 이전 문제가 틀리고 이번 답이 맞으면 1점 추가
                    score += plus;
                } else if(ans[i-1] == 1 && ans[i] == 1) {   // 이전 문제와 이번 문제 둘 다 맞으면 추가 점수
                    plus++;
                    score += plus;
                } else if(ans[i-1] == 1 && ans[i] == 0) {   // 이전 문제가 맞고 이번 답이 틀리면 추가 점수 1로 초기화
                    plus = 1;
                }
            } else if(ans[i] == 1)                          // 맨 처음 실행 했을 때 경우
                score += plus;
        }

        bw.write(String.valueOf(score));
        bw.flush();
        bw.close();
    }
}
