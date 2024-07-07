import java.util.*;
public class Interview_04 {
    public static void main(String[] args) {
       Scanner sc=new Scanner(System.in);
       int num=sc.nextInt(); 
       System.out.println(fac(num));
    }
    public static int fac(int num){
        if(num==0 ||num==1){
            return 1;
        }else{
            return num*fac(num-1);
        }
    }
}
