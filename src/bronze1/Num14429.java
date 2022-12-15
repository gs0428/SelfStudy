package bronze1;

import java.util.*;
import java.io.*;

public class Num14429 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;


        int number = Integer.parseInt(br.readLine());   // 게임 횟수
        int len[] = new int[number + 1];    // 길이는 숫자를 개수로 나눈 몫에 1을 더하고 2를 곱한다 (len = ((lose / max) + 1) * 2)
        int small = 0;                      // small은 가장 짧은 횟수
        int smallNum = 0;                   // 가장 짧은 횟수의 번호


        for(int i = 0;i<number;i++){
            st = new StringTokenizer(br.readLine());
            int t1 = Integer.parseInt(st.nextToken());
            int t2 = Integer.parseInt(st.nextToken());

            if(t1 <= t2 || (t1 - 1) % (t2 + 1) == 0)
                break;
            else {
                len[i] = ((((t1 - 1) / (t2 + 1)) + 1) * 2);
                if(i == 0){
                    small = len[0];
                    smallNum = 1;
                }
                if(i > 0) {
                    if (small > len[i]) {
                        small = len[i];
                        smallNum = i + 1;
                    } else if (small == len[i])
                        continue;
                }
            }
        }

        bw.write(smallNum + " " + small);

        bw.close();
    }
}