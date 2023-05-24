package bronze2;

import java.io.*;

public class Num4447 { // 좋은놈 나쁜놈
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int T = Integer.parseInt(br.readLine());

        for(int i = 0;i<T;i++) {
            int g = 0, b = 0;
            String Hero = br.readLine();
            String hero = Hero.toLowerCase();           // 소문자로 바꿈

            for(int k = 0;k<hero.length();k++) {        // g와 b 개수 세는 반복문
                if(hero.charAt(k) == 'g')
                    g++;
                else if(hero.charAt(k) == 'b')
                    b++;
            }

            if(g > b)
                bw.write(Hero + " is GOOD\n");
            else if (g < b)
                bw.write(Hero + " is A BADDY\n");
            else
                bw.write(Hero + " is NEUTRAL\n");
        }
        bw.flush();
        bw.close();
    }
}
