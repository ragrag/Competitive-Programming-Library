/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
import java.io.OutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.io.PrintWriter;
import java.io.BufferedWriter;
import java.util.InputMismatchException;
import java.io.IOException;
import java.io.Writer;
import java.io.OutputStreamWriter;
import java.io.InputStream;
import java.util.Scanner;
public class main {
    public static void main(String[] args) {
String m;
        Scanner sc = new Scanner(System.in);
m=sc.nextLine();
int count =0;
long  sum= 0;
while (m.length()>1){
for (char c : m.toCharArray()) {
    sum += Character.digit(c, 10);
  }
m=String.valueOf(sum);
sum=0;
count++;
    }
System.out.println(count);
    }
    
}
