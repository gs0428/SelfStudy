package silver5;

import java.io.*;

public class Num1316 { // 그룹 단어 체커
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int n = Integer.parseInt(br.readLine());
        int count = 0;
        int check = 0;

        for(int j = 0;j<n;j++) {
            String word = br.readLine();                                // 단어 입력
            for(int i = 0;i<word.length();i++) {                        // 단어 길이만큼 반복
                int first = word.indexOf(word.charAt(i));               // 단어의 i번째 위치에 있는 문자의 처음 나타나는 위치
                int last = word.lastIndexOf(word.charAt(i));            // 마지막 나오는 위치
                if(first == last) {                                     // 처음과 마지막이 같으면 카운트
                    count++;
                } else {
                    String sub = word.substring(first, last + 1);       // 다르다면 처음부터 마지막+1번째까지 자름
                    String compare = null;
                    for(int k = 0;k<last-first+1;k++) {
                        if(k==0) {
                            compare = String.valueOf(word.charAt(i));   // 처음에는 같다고 선언 해주기
                        } else {
                            compare += String.valueOf(word.charAt(i));  // 그 후에는 문자 붙이기
                        }
                    }
                    if(sub.equals(compare)){                            // 만약 자른 문자열과 비교하는 문자가 같으면 카운트
                        count++;
                    }
                }
            }
            if(count == word.length()) {                                // 카운트랑 문자 길이랑 같으면 체크
                check++;
            }
            count = 0;
        }

        bw.write(String.valueOf(check));
        bw.flush();
        bw.close();
    }
}
