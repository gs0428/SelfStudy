package silver5;

import java.io.*;
import java.util.StringTokenizer;

public class Num25206 { // 너의 평점은
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        double totalGrade = 0.0;    // 전공 점수 총 합
        double totalNum = 0.0;      // 학점 총 합

        String[] grades = {"A+", "A0", "B+", "B0", "C+", "C0", "D+", "D0", "F"};
        double[] gradeScore = {4.5, 4.0, 3.5, 3.0, 2.5, 2.0, 1.5, 1.0, 0.0};

        for(int i = 0;i<20;i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            String subject = st.nextToken();
            double num = Double.parseDouble(st.nextToken());
            String grade = st.nextToken();
            for(int k = 0;k<9;k++) {
                if(grade.equals(grades[k])) {      // 아닐 경우 같은 점수 찾기
                    totalGrade += num * gradeScore[k];
                    totalNum += num;
                    break;
                }
            }
        }

        bw.write(String.valueOf(totalGrade / totalNum));
        bw.flush();
        bw.close();

    }
}
