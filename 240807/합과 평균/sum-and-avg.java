import java.util.*;
import java.io.*;
public class Main {
    public static void main(String[] args) {
        try {
            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
            String[] input = br.readLine().split(" ");
            int num1 = Integer.parseInt(input[0]);
            int num2 = Integer.parseInt(input[1]);
            int sum = num1 + num2;
            double dec = sum / 2.0;
            dec = Math.round(dec*10)/10.0 ;
            String result = sum + " " + dec;
            bw.write(result);
            bw.newLine();
            bw.flush();
            bw.close();
        }
        catch(IOException e){
            e.printStackTrace();
        }
    }
}