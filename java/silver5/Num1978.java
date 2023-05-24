package silver5;

import java.io.*;
import java.util.*;

public class Num1978 { // 소수 찾기
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());
        int count = 0;                          // 소수 찾으면 카운트
        int same = 0;                           // 주어진 숫자 중 같은 숫자가 있으면 카운트
        int[] num = new int[n];                 // n개의 배열 생성
        StringTokenizer st = new StringTokenizer(br.readLine());

        for(int i = 0;i < n;i++) {
            num[i] = Integer.parseInt(st.nextToken());  // 공백을 기준으로 배열에 값 선언

            if(i>0){
                for(int k = 0;k<i;k++)
                    if(num[i] == num[k]){       // 2번째 값부터 이전 값들 중 같은 값이 있나 탐색
                        same++;                 // 같은 값이 있다면 카운트
                        break;                  // 찾았으니 반복문 탈출
                    }
            }

            if(isPrime(num[i]))                 // 소수 판별하는 함수
                count++;                        // 소수가 맞다면 카운트
        }

        System.out.println(count-same);         // 카운트 된 값들 중 중복되는 값 뺀 값이 정답
    }

    static boolean isPrime(int n) {
        if(n == 1)
            return false;
        else {
            int check = 0;
            for(int i = 2;i<n;i++) {
                if(n % i == 0)
                    check++;
            }
            if(check == 0)
                return true;
            else
                return false;
        }
    }
}

