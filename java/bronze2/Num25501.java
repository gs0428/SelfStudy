package bronze2;

import java.io.*;

public class Num25501 { // 재귀의 재귀
        public static void main(String[] args) throws IOException {
            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

            int T = Integer.parseInt(br.readLine());                // 테스트 개수

            for(int i = 0;i<T;i++) {
                bw.write(isPalindrome(br.readLine()) + "\n");
            }
            bw.flush();
            bw.close();
        }

        static String isPalindrome(String s){
            int count = 1;                                          // 기본적으로 1번 돌기 때문에 카운트는 1
            return recursion(s, 0, s.length()-1, count);
        }

        static String recursion(String s, int l, int r, int count){
            if(l >= r) return String.valueOf(1 + " " + count);
            else if(s.charAt(l) != s.charAt(r)){
                return String.valueOf(0 + " " + count);
            }
            else {
                count++;
                return recursion(s, l+1, r-1, count);
            }
        }
}
