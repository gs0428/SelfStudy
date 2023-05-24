package bronze1;

import java.io.*;

public class Num1157 { // 단어 공부
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        String s1 = br.readLine();                  // 대소문자 상관없이 입력
        String s2 = s1.toUpperCase();               // 모두 대문자로 변환  

        int big = 0, num = 0, count = 0;              
        int[] alp = new int[26];                    // A~Z 각각의 개수
        for(int i = 0;i<26;i++){
            alp[i] = 0;
        }


        for(int i =0;i<s2.length();i++){
            for(int k = 0;k<26;k++){
                if(s2.charAt(i) == 'A' + k){        // 문자열 처음부터 검사하여 A~Z인지 구분하고 카운팅
                    alp[k]++;
                }
            }
        }

        for(int i = 0;i<26;i++){
            if(alp[i] > big){                       // 최대로 사용된 문자와 횟수 설정
                big = alp[i];
                num = i;
                count = 0;
            }
            else if(alp[i] > 0 && alp[i] == big)    // 사용된 횟수가 최대와 같을 때 카운팅
                count++;
        }

        if (count > 0)                              // 카운트가 0보다 크다면 최대로 사용된 문자가 여러개
            bw.write("?");
        else                                        // 그렇지 않다면 그에 맞는 문자 출력
            bw.write((char) num + 65);

        bw.close();
    }
}
