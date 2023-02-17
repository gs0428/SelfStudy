package bronze2;

import java.io.*;
import java.util.StringTokenizer;

public class Num2139 { // 나는 너가 살아온 날을 알고 있다
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int[] days = {31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};  // x월까지 총 일 수
        int day;
        int month;
        int year;
        int total = 0;

        while(true) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            day = Integer.parseInt(st.nextToken());
            month = Integer.parseInt(st.nextToken());
            year = Integer.parseInt(st.nextToken());

            if(day == 0 && month == 0 && year == 0)
                break;

            if(month > 2){                      // 3월부터는 그 이전 달 일 수 + 일 합
                total = days[month-2] + day;
            } else if(month == 2) {             // 2월 일 때는 1월 + 일 합
                total = 31 + day;
            } else if(month == 1) {             // 1월 일 때는 일이 합
                total = day;
            }

            if(year % 4 == 0 && month > 2) {    // 윤년이게 되면 1일 더 추가해야하는데 3월부터 포함이므로 조건문 이런식으로
                if(year % 100 == 0) {           // 100으로 나누어 떨어지면 제외
                    total += 0;
                    if(year == 2000) {          // 근데 2000년은 400으로 나누어 떨어지므로 포함
                        total += 1;
                    }
                } else                          // 위 조건 만족 못 하면 +1일
                    total += 1;
            }

            bw.write(String.valueOf(total + "\n"));
        }

        bw.flush();
        bw.close();
    }
}
