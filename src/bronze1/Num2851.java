package bronze1;

import java.io.*;

public class Num2851 { // 슈퍼마리오
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int[] mushroom = new int[10];
        int total = 0;
        int stop = 0;

        for(int i = 0;i<10;i++) {
            mushroom[i] = Integer.parseInt(br.readLine());
        }

        for(int i = 0;i<10;i++) {
            total += mushroom[i];       // 점수를 더해나감
            if(total >= 100){           // 100보다 크거나 같아지면 멈춘 배열 번호 저장 후 반복문 탈출
                stop = i;
                break;
            }
        }

        if(total - 100 > Math.abs(total - mushroom[stop] - 100)) {      // 100이 넘어갔을 때 값과 넘어가기 전 값 중 어느 것이 100에 가깝나 비교
            bw.write(String.valueOf(total - mushroom[stop]));        // 넘어가기 전 값이 더 적다면 넘어가기 전 값으로
        } else {
            bw.write(String.valueOf(total));                            // 그렇지 않다면 그냥 총 합 그대로
        }

        bw.flush();
        bw.close();
    }
}
