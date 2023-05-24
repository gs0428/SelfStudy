package bronze1;

import java.io.*;
import java.util.Arrays;

public class Num10989 { // 수 정렬하기 3
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int N = Integer.parseInt(br.readLine());
        int[] num = new int[N];

        for(int i = 0;i<N;i++) {
            num[i] = Integer.parseInt(br.readLine());
        }

        Arrays.sort(num);                                   // 오름차순 정렬

        for(int i = 0;i<N;i++) {
            bw.write(String.valueOf(num[i]) + "\n");
        }

        bw.flush();
        bw.close();
    }
}
