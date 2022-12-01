package Bronze1;

import java.util.*;

public class Num1236 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int row = sc.nextInt();                                               // 행 개수 선언
        int column = sc.nextInt();                                              // 열 개수 선언
        int rSecurity = 0, cSecurity = 0;                                       // rSecurity는 행 경비원 수, cSecurity는 열 경비원 수
        String[][] castle = new String[row][column + 1];

        for(int i = 0;i<row;i++){                                            // 행 경비원 수
            castle[i][column] = sc.next();
            if(castle[i][column].contains("X")){
                rSecurity++;
            }
        }

        for(int i = 0;i<column;i++){                                            // 열 경비원 수
            for(int k = 0;k<row;k++){
                if(castle[k][column].substring(i).charAt(0) == 'X'){
                    cSecurity++;
                    break;
                }
            }
        }

        System.out.println(Math.max(column - cSecurity, row - rSecurity));      // 필요한 행 경비원과 열 경비원 수 비교

    }
}