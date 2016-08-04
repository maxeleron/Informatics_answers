/* package whatever; // don't place package name! */
 
import java.util.*;
import java.io.*;
 
public class Main {
    // Изменять регулярное выражение здесь
    static String regexp="\\\\circle\\{\\(([0-9]*),([0-9]*)\\)";
    static String replacement="\\\\circle\\{\\($2,$1\\)"; // и здесь
   
    public static void main(String[] args) throws Exception{
        Scanner in=new Scanner(System.in);
        PrintWriter out=new PrintWriter(System.out);
        String str;
        while(in.hasNextLine() )
        {
            str=in.nextLine();
            str=str.replaceAll(regexp, replacement);
            out.println(str);
            out.flush();
        }
        out.close();
    }
}
 