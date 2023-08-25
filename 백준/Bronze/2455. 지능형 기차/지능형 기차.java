import java.util.*;
import java.io.*;

public class Main { 
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int total = 0, big = 0;

        for(int i = 0;i<4;i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());

            int outP = Integer.parseInt(st.nextToken());
            int inP = Integer.parseInt(st.nextToken());

            if(i>0){
                if(total < outP)
                    break;
            }

            if(inP > outP){
                total += (inP - outP);
            } else
                total -= (outP - inP);

            if(total > big)
                big = total;
        }

        bw.write(String.valueOf(big));
        bw.flush();
        bw.close();
    }
}