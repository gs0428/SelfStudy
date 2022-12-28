package bronze3;

import java.util.*;
import java.io.*;
public class Num2455 { // 지능형 기차
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int total = 0, big = 0;                                         // 기차에 타고 있는 총 인원과 가장 많았을 때의 인원 0으로 초기화

        for(int i = 0;i<4;i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());    // 역이 4개이니까 4번 반복

            int outP = Integer.parseInt(st.nextToken());                // 첫 번째 칸은 내리는 사람의 수
            int inP = Integer.parseInt(st.nextToken());                 // 두 번재 칸은 타는 사람의 수

            if(i>0){
                if(total < outP)                                        // 기차의 총 인원보다 내리는 사람이 더 많을 경우 반복 중지
                    break;
            }

            if(inP > outP){                                             // 타는 사람이 더 많을 경우 총 인원에 둘을 뺀 값을 더함
                total += (inP - outP);
            } else                                                      // 내리는 사람이 더 많을 경우 총 인원에 둘을 뺀 값을 뺌
                total -= (outP - inP);

            if(total > big)                                             // 가장 많았을 때의 인원 최신화
                big = total;
        }

        bw.write(String.valueOf(big));                                  // 가장 많았을 때의 인원 출력
        bw.flush();
        bw.close();
    }
}
