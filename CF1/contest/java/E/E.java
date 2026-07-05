import java.util.*;

public class E {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
     String  s;
	String s1="";
    String temp = "";
	s=in.nextLine();
	for (int i = 0; i < s.length(); i++)
	{
		if (s.charAt(i) == 'A' || s.charAt(i) == 'a' || s.charAt(i) == 'O' || s.charAt(i) == 'o' || s.charAt(i) == 'Y' || s.charAt(i) == 'y' ||s.charAt(i) == 'E' || s.charAt(i) == 'e' ||s.charAt(i) == 'U' || s.charAt(i) == 'u' ||s.charAt(i) == 'I' || s.charAt(i) == 'i') 
		{
			continue;
		}
		s1 += '.';
        temp += s.charAt(i);
		s1+= temp.toLowerCase();
        temp = "";
	}
    System.out.println(s1);
    }
}