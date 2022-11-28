package Bronze3;

import java.util.*;

public class Num1085 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int x= sc.nextInt();
        int y= sc.nextInt();
        int w= sc.nextInt();
        int h= sc.nextInt();W

        int a = (w - x < x) ? 0 : 2;
        int b = (h - y < y) ? 2 : 3;
        switch(a + b){
            case 2:
                if(w - x < h - y)
                    System.out.println(w - x);
                else
                    System.out.println(h - y);
                break;
            case 3:
                if(w - x < y)
                    System.out.println(w - x);
                else
                    System.out.println(y);
                break;
            case 4:
                if(x < h - y)
                    System.out.println(x);
                else
                    System.out.println(h - y);
                break;
            case 5:
                if(x < y)
                    System.out.println(x);
                else
                    System.out.println(y);
                break;
        }
    }
}
