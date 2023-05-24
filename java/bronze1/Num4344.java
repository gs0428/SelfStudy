package bronze1;

import java.util.*;
import java.io.*;

public class Num4344 { // 평균은 넘겠지
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;

        int N = Integer.parseInt(br.readLine());                // 테스트 케이스 개수
        float[] per = new float[N];

        for(int k = 0;k<N;k++){
            st = new StringTokenizer(br.readLine());

            float n = Float.parseFloat(st.nextToken());         // 학생 수
            float total = 0;
            float count = 0;
            float[] num = new float[(int) n];

            for(int i = 0;i<n;i++){
                num[i] = Integer.parseInt(st.nextToken());      // 띄어쓰기 기준으로 점수 선언
                total += num[i];                                // 점수의 총합
            }

            float avg = total / n;                              // 평균

            for(int i = 0;i<n;i++){
                if(num[i] > avg)
                    count++;                                    // 점수가 평균보다 높으면 카운트
            }   

            per[k] = count / n;                                 // 평균 넘는 학생들의 비율
        }

        for(int i = 0;i<N;i++){
            System.out.println(String.format("%.3f%%", per[i] * 100));  // 소수점 3째자리에서 반올림
        }
    }
}
