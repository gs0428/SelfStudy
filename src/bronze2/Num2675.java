package bronze2;

import java.io.*;
import java.util.*;

public class Num2675 { // 문자열 반복
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int T = Integer.parseInt(br.readLine());                    // 테스트 개수
        String[] ans = new String[T];

        for(int i = 0;i<T;i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            int N = Integer.parseInt(st.nextToken());               // 문자 반복 할 횟수
            String s = st.nextToken();                              // 문자
            ans[i] = Slice(N, s);
            bw.write(ans[i] + "\n");
        }

        bw.flush();
        bw.close();

    }

    static String Slice(int N, String s) {
        String[] arr = new String[s.length()];                      // 문자 길이만큼 배열 생성
        String result = "";

        for(int i = 0;i<s.length();i++) {
            for(int k = 0;k<N;k++){
                if(k == 0) {
                    arr[i] = s.substring(i, i+1);                   // arr[0]의 값은 null이므로 이때는 값을 넣어준다
                } else {
                    arr[i] += s.substring(i, i+1);                  // 이후 값들은 반복해서 문자를 붙인다
                }
            }
        }

        for(int i = 0;i<s.length();i++) {
            result += arr[i];                                       // 반복한 문자들을 다시 다 붙인다
        }

        return result;
    }
}
