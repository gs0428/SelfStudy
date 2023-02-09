package silver5;

import java.io.*;

public class Num1676 { // 팩토리얼 0의 개수 (백준 질문 게시판 참고)
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int n = Integer.parseInt(br.readLine());

        bw.write(String.valueOf(Counting(n)));
        bw.flush();
        bw.close();
    }

    static int Counting(int n) {
        int count = 0;

        while(n >= 5) {
            count += n / 5;
            n /= 5;
        }

        return count;
    }
}