import java.util.*;
import java.io.*;
 
public class Main {
    // Изменять регулярное выражение здесь
    static String regexp="(([A-Z]([a-z]|[A-Z])*\\s+){2,}[A-Z]([a-z]|[A-Z])*)";
    static String replacement="\"$1\"";// и здесь
   
 
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