import java.util.*;
public class Interview_06{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String word=sc.nextLine();
        char[] ch=word.toCharArray();
        int i=0;
        int j=ch.length-1;
        while(i<j){
            char temp=ch[i];
            ch[i]=ch[j];
            ch[j]=temp;
            i++;
            j--;
        }
        System.out.println(ch);
    }
}