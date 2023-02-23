package silver5;

import java.io.*;
import java.util.StringTokenizer;

public class Num5671 { // 호텔 방 번호
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String s;

        while((s = br.readLine()) != null) {                // NullPointer 예외처리
            StringTokenizer st = new StringTokenizer(s);
            int l = Integer.parseInt(st.nextToken());       // 왼쪽 수
            int r = Integer.parseInt(st.nextToken());       // 오른쪽 수
            int reject = 0;                                 // 안되는 번호의 개수

            for(int i = l;i<=r;i++) {
                String temp = String.valueOf(i);
                if(check(temp))                             // 문자열로 변환 후 check함수에 넣음
                    reject++;                               // true가 되면 reject 증가
            }
            System.out.println(r - l + 1 - reject);
        }
    }

    static boolean check (String temp) {                    // 한 글자씩 비교하여 겹치는게 있을 경우 return true
        for(int i = 0;i<temp.length();i++) {
            for(int k = i+1;k<temp.length();k++) {
                if(temp.charAt(i) == temp.charAt(k)) {
                    return true;
                }
            }
        }

        return false;
    }
}
