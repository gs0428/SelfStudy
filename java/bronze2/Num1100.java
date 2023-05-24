package bronze2;

import java.util.*;

public class Num1100 { // 하얀 칸
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[][] board = new String[8][9];
        int count = 0;

        for(int i = 0;i<8;i++){
            board[i][8] = sc.nextLine();
        }

        for(int i = 0;i<8;i++){
            if(i%2 == 0){
                for(int k = 0;k<8;k++){
                    if(k%2 == 0){
                        if(board[i][8].charAt(k) == 'F')
                            count++;
                    }
                }
            }
            else if (i%2 == 1){
                for(int k = 0;k<8;k++){
                    if(k%2 == 1){
                        if(board[i][8].charAt(k) == 'F')
                            count++;
                    }
                }
            }
        }
        System.out.println(count);
    }
}