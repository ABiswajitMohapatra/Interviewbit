import java.util.*;
public class Interview_02 {
    public static void main(String[] args) {
        Scanner sc=new Scanner (System.in);
        int val=sc.nextInt();
        System.out.println(getFibonacci(val));
    }
    public static int getFibonacci(int val){
       if(val<=1)  return val;
        else       return getFibonacci(val-1)+getFibonacci(val-1);
        
    }
}

