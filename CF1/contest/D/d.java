import java.util.Scanner;

public class d {
    public static boolean a(int []a){
        boolean j=true;
        for(int i=0;i<a.length-1;i++){
            if (a[i] != a[i+1]) j = false;
        }
        return j;
    }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int counter =0;
        int [] a = new int [n];
        for (int i=0;i<n;i++){
            a[i] = in.nextInt();
        }
        if(!a(a)){counter = 1;}
        else{
        for(int i=1;i<n-1;i++){
            if(a[i-1] < a[i]) counter++;
            else counter=0;
        }
    }
    System.out.println(counter);
    }
}
