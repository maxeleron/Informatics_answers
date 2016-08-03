import java.util.*;
import java.io.*;
 
public class Main {
    // Изменять регулярное выражение здесь
    static String regexp="\\\\texttt\\{(([0-9]+)|([A-Za-z]+))\\}";
    static String replacement="\\\\begin\\{bfseries\\}$2$3\\\\end\\{bfseries\\}"; // и здесь
   
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