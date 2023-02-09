package bronze3;

import java.io.*;
import java.util.*;

public class Num2566 { // 최댓값
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;

        int[][] num = new int[9][9];                            // 2차원 배열 생성
        int big = 0;
        int row = 1;                                            // 행렬은 1부터 시작이므로 1로 초기화
        int column = 1;

        for(int i = 0;i<9;i++) {
            st = new StringTokenizer(br.readLine());
            for(int k = 0;k<9;k++) {
                num[i][k] = Integer.parseInt(st.nextToken());   // 행마다 숫자 선언
                if(num[i][k] > big) {                           // 그때 숫자가 최대보다 크면 재선언
                    big = num[i][k];
                    row = i+1;                                  // 이때 행렬 재선언
                    column = k+1;                               // +1 한 이유는 배열의 숫자는 0부터 시작했기 때문
                }
            }
        }

        bw.write(String.valueOf(big + "\n" + row + " " + column));
        bw.flush();
        bw.close();
    }
}
