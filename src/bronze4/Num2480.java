package bronze4;

import java.util.*;

public class Num2480 { // 주사위 세개
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int[] a = new int[3];
        int big = 0;

        for(int i = 0;i<3;i++)
            a[i] = sc.nextInt();

        if(a[0] == a[1] && a[1] == a[2] && a[0] == a[2])
            System.out.println(10000 + (a[0] * 1000));
        else if((a[0] == a[1] && a[1] != a[2]) || (a[0] == a[2] && a[0] != a[1]))
            System.out.println(1000 + (a[0] * 100));
        else if(a[1] == a[2] && a[0] != a[1])
            System.out.println(1000 + (a[1] * 100));
        else if(a[0] != a[1] && a[1] != a[2] && a[0] != a[2]){
            for(int i = 0;i<3;i++){
                if(a[i] > big)
                    big = a[i];
            }
            System.out.println(big * 100);
        }
    }
}
