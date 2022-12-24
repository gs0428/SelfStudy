package silver5;

import java.util.*;
import java.io.*;

public class Num10815 { // 숫자 카드
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;

        int N  = Integer.parseInt(br.readLine());                   // 상근이가 가지고 있는 카드 개수
        int[] numN = new int[N];                                    // 숫자 카드에 적혀 있는 정수
        st = new StringTokenizer(br.readLine());
        for(int i = 0;i<N;i++){
            numN[i] = Integer.parseInt(st.nextToken());
        }
        Arrays.sort(numN);                                          // 오름차순 정렬

        int M = Integer.parseInt(br.readLine());                    // 비교할 카드 개수
        int[] numM = new int[M];                                    // 숫자 카드에 적혀 있는 정수
        st = new StringTokenizer(br.readLine());
        for(int i = 0;i<M;i++){
            numM[i] = Integer.parseInt(st.nextToken());
            numM[i] = Search(numN, numM[i]);                        // 이분 탐색
            bw.write(numM[i] + " ");
        }

        bw.flush();
        bw.close();


    }
    public static int Search (int[] arr, int n) {
        int left = 0;
        int right = arr.length - 1;
        int mid;

        while (left <= right) {
            mid = (left + right) / 2;
            if (arr[mid] < n) left = mid + 1;
            else if (arr[mid] > n) right = mid - 1;
            else return 1;
        }
        return 0;
    }
}