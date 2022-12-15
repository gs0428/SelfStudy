package bronze2;

import java.util.*;

public class Num1159 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int num = sc.nextInt();
        int total = 0;
        char[] alp = new char[26];
        int[] alpcount = new int[26];
        String name = new String();

        for(int i = 0;i<26;i++)
            alp[i] = (char) ('a' + i);

        for(int i = 0;i<num;i++) {
            name = sc.next();
            for(int k = 0;k<26;k++){
                if(name.charAt(0) == k + 'a') {
                    alpcount[k]++;
                    break;
                }
            }
        }

        for(int i = 0;i<26;i++){
            if(alpcount[i]<5)
                total++;
        }

        if(total == 26){
            System.out.println("PREDAJA");
        }
        else{
            for(int i = 0;i<26;i++){
                if(alpcount[i] >= 5)
                    System.out.print(alp[i]);
            }
        }
    }
}