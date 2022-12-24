package silver5;

import java.io.*;

public class Num1769 { // 3의 배수
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        String X = br.readLine();                           // 자연수 입력
        int count = 0;                                      // 몇 번 변환 했는지 카운트

        String result = Change(X, count);                   // 최종 한 자리수와 카운트 문자열로 리턴

        char temp = result.charAt(0);                       // 첫 번째 자리에 있는 숫자가 최종 한 자리수
        int sum = Integer.parseInt(String.valueOf(temp));   // 정수형으로 변환
        temp = result.charAt(1);                            // 두 번째 자리에 있는 숫자가 카운트
        count = Integer.parseInt(String.valueOf(temp));     // 정수형으로 변환

        String answer = (sum % 3 == 0) ? "YES" : "NO";      // 최종 한 자리수가 3의 배수인지 아닌지 판별
        bw.write(count + "\n" + answer);

        bw.flush();
        bw.close();


    }

    public static String Change(String X, int count){
        int sum = 0;                                        // 각 자리 숫자들의 합
        int len = X.length();                               // 숫자의 길이

        for(int i = 0;i<len;i++){
            char c = X.charAt(i);                           // 숫자의 n번째 자리의 숫자
            sum += Integer.parseInt(String.valueOf(c));     // 정수형으로 다시 변환하여 합하기
        }

        if(sum >= 10){                                      // 총 합이 두 자리수 이상이면 함수 재호출(재귀함수)
            count++;                                        // 한 번 도니까 카운트
            return Change(String.valueOf(sum), count);
        }
        else {
            if(count > 0)                                   // 한 자리인 경우를 제외하기 위한 조건문
                count++;
            String result = String.valueOf(sum) + String.valueOf(count);    // 리턴을 2개를 못해서 문자열로 합쳐버림. 어차피 두 숫자 모두 자릿수가 1개라 다시 분리하기 쉬움 
            return result;

        }

    }
}
