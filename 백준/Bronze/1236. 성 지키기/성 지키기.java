import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int height = sc.nextInt();
        int width = sc.nextInt();
        int wSecurity = 0, hSecurity = 0;                        // wSecurity는 가로 경비원 수, hSecurity는 세로 경비원 수
        String castle[][] = new String[height][width + 1];

        //가로 세로에서 필요한 경비원 수 확인 후 크거나 같은 값이 정답 ex) 가로 5 세로 3 - > 5명 필요, 가로 4 세로 4 - > 4명 필요

        for(int i = 0;i<height;i++)
            castle[i][width] = sc.next();

        for(int i = 0;i<height;i++){                    // 층 경비원 수
            if(castle[i][width].contains("X")){
                hSecurity++;
            }
        }

        for(int i = 0;i<width;i++){
            for(int k = 0;k<height;k++){
                if(castle[k][width].substring(i).charAt(0) == 'X'){
                    wSecurity++;
                    break;
                }
            }
        }
        
        if(width - wSecurity >= height - hSecurity)
            System.out.println(width - wSecurity);
        else
            System.out.println(height - hSecurity);
    }
}