package bronze2;

import java.io.*;

public class Num1152 { // 단어의 개수
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        String sen = br.readLine();                     // 문장 입력

        String[] word = sen.split(" ");           // 공백을 기준으로 문자열을 자름

        if(word.length>0 && word[0].equals(""))              // 배열의 길이가 0보다 크고 첫 번째 배열이 공백 일 때
            bw.write(String.valueOf(word.length-1)); // 배열 길이에서 1개를 뺌
        else
            bw.write(String.valueOf(word.length));      // 아니면 배열 길이 출력

        bw.flush();
        bw.close();
    }
}
