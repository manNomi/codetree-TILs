import java.util.*;
import java.io.*;
public class Main {
    public static void main(String[] args) {
        try{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        String[] input = br.readLine().split(" ");
        int num1 = Integer.parseInt(input[0]);
        int num2 = Integer.parseInt(input[1]);
        double sum = num1+num2;
        double min = num1-num2;
        double result = sum / min;
        result=Math.round(result*100) / 100.0;
        bw.write(Double.toString(result));
        bw.newLine();
        bw.flush();
        bw.close();
    }
    catch(IOException e){
        e.printStackTrace();
    }
}
}