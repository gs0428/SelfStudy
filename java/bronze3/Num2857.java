package bronze3;

import java.io.*;

public class Num2857 { // FBI
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        String[] FBI = new String[5];
        int count = 0;

        for(int i = 0;i<5;i++) {
            FBI[i] = br.readLine();
            if(FBI[i].contains("FBI")) {                    // 문자열에 FBI를 포함하고 있으면 실행
                count++;
                bw.write(String.valueOf(i + 1 + " "));
            }
        }

        if(count == 0) {
            bw.write("HE GOT AWAY!");
        }

        bw.flush();
        bw.close();
    }
}
