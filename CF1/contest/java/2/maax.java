import java.util.*;

public class maax {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n=in.nextInt();
        int [] a = new int [n];
        int counter = 1, counterSP = 0;
        int MAX =0;
        for (int i = 0; i < n; i++) {
            a[i]=in.nextInt();
            
        }
        for (int i = 1; i < n; i++) {
            if (a[i] == a[i - 1]) {
                    counterSP++;
                }
        }
        if (n == counterSP) {
            MAX = 1;
        }else{
            for (int i = 1 ; i <= n ; i++){
                if (a[i] > a[i - 1]) {
                counter++;
                }else {
                    if (counter > MAX) {
                    MAX = counter;
                }
                    counter = 1;
                }
            }
        }
       System.out.println(MAX);
         
    }
}