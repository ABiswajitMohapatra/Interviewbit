import java.util.*;
public class Interview_03 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String word1=sc.next();
        String word2=sc.next();
        if(word1.length()==word2.length()){
            for(int i=0;i<word1.length();i++){
                for(int j=0;j<word2.length();j++){
                    if(word1.charAt(i)==word2.charAt(j)){
                        System.out.println( "Anagram");  
                        System.exit(0);
                    }
                }
            }
        }
            else{
                System.out.println("Not anagram");
        
    }
}
}