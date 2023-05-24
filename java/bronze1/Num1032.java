package bronze1;

import java.io.*;
import java.util.*;

public class Num1032 { // 명령 프롬프트
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int n = Integer.parseInt(br.readLine());
        String[] word = new String[n];

        for(int i = 0;i<n;i++) {
            word[i] = br.readLine();
        }

         char[] ans = new char[word[0].length()];
        for(int i = 0;i<ans.length;i++) {
            ans[i] = word[0].charAt(i);
        }

        for(int i = 0;i<ans.length;i++) {
            for(int k = 1;k<n;k++) {
                if(ans[i] != word[k].charAt(i)) {
                    ans[i] = '?';
                    break;
                }
            }
        }

        bw.write(ans);
        bw.flush();
        bw.close();
    }
}
