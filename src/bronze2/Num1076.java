package bronze2;

import java.io.*;

public class Num1076 { // 저항
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        String[] color = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"};
        String[] ans = new String[3];
        String[] res = new String[3];

        for(int i = 0;i<3;i++) {
            ans[i] = br.readLine();
            for(int k = 0;k<10;k++) {
                if(ans[i].equals(color[k])) {
                    if(i == 2) {
                        res[i] = String.valueOf((long)Math.pow(10, k));
                    } else {
                        res[i] = String.valueOf(k);
                        break;
                    }
                }
            }
        }

        Long answer = Long.parseLong(res[0] + res[1]);

        bw.write(String.valueOf(answer * Long.parseLong(res[2])));
        bw.flush();
        bw.close();
    }
}
