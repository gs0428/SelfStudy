package bronze1;

import java.io.*;
import java.util.StringTokenizer;

public class Num14659 { // 한조서열정리하고옴ㅋㅋ
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int T = Integer.parseInt(br.readLine());
        int[] Hanzo = new int[T];
        int big = 0;

        StringTokenizer st = new StringTokenizer(br.readLine());
        for(int i = 0;i<T;i++)
            Hanzo[i] = Integer.parseInt(st.nextToken());

        for(int i = 0;i<T-1;i++) {
            int rid = 0;
            for(int k = i;k<T-1;k++) {
                if(Hanzo[i] > Hanzo[k + 1]) {       // i번째 활잡이가 k + 1번째 활잡이보다 높으면 제거
                    rid++;
                    if (rid > big)
                        big = rid;
                }
                else {
                    if(rid > big)
                        big = rid;
                    break;
                }
            }
        }

        bw.write(String.valueOf(big));
        bw.flush();
        bw.close();
    }
}
