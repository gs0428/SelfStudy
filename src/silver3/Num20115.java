package silver3;

import java.io.*;
import java.util.*;

public class Num20115 { // 에너지 드링크
    public static void main(String[] args) throws  IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());            // 에너지 드링크 수
        int[] drink = new int[n];
        float big = 0;
        float total = 0;
        String amount = br.readLine();                      // 각 에너지 드링크의 양

        StringTokenizer st = new StringTokenizer(amount);

        for(int i=0;i<n;i++) {
            drink[i] = Integer.parseInt(st.nextToken());
            if(drink[i] >= big)                             // 양이 많은 것을 찾는 과정
                big = drink[i];
            total += drink[i];                              // 에너지 드링크의 총 양
        }

        float result = ((total - big) / 2) + big;           // (총 양 - 가장 많은 양) / 2 + 가장 많은 양

        System.out.println(result);
    }
}
