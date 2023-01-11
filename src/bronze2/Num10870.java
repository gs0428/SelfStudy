package bronze2;

import java.io.*;

public class Num10870 { // 피보나치 수 5
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());        // n이 주어짐
        int[] num = new int[n+1];                       // 0번째부터 시작하므로 배열의 수는 n+1
        for(int i = 0;i<n+1;i++) {
            if(i>1) {
                num[i] = num[i-1] + num[i-2];           // 2번째부터는 앞 두 수의 합을 구할 수 있음
            } else
                num[i] = i;                             // 0번째와 1번째는 그 순서가 값
        }

        System.out.println(num[n]);                     // n번째 값이 정답
    }
}
