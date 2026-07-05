import java.util.*;

public class word {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String n = in.next();
        String MMM;
        int counterS = 0 , counterB = 0 ;
        int x = n.length()-1;
        for(int i = 0 ; i < n.length() ; i++){
            if(n.charAt(i) >= 97 && n.charAt(i) <= 122 ){
              counterS ++ ;
            }else{
                counterB ++;
            } 
        }
        if(counterB > counterS){
            MMM = n.toUpperCase();
                System.out.println(MMM);
        }else{
            MMM = n.toLowerCase();
                System.out.println(MMM);
        }
          
    }
}