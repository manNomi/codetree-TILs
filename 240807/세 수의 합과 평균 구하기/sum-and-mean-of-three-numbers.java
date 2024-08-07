import java.util.*;
import java.io.*;
public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        try {
            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
            String[] input = br.readLine().split((" "));
            int num1 = Integer.parseInt(input[0]);          
            int num2 = Integer.parseInt(input[1]);         
            int num3 = Integer.parseInt(input[2]);         
            int result1 = num1 + num2 + num3;
            int result2 = result1 / 3;
            bw.write(result1+"\n");
            bw.write(result2+"\n");
            bw.flush();
            bw.close();
        }
        catch (IOException e) {
            e.printStackTrace();
        }
    }
}