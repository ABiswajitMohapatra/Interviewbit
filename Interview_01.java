import java.util.*;
public class Interview_01{
    public static void main(String[] args) {
        Scanner sc=new Scanner (System.in);
        String word=sc.next();
        System.out.println(iswordpalindrome(word));
    }

    //function :
    public static boolean iswordpalindrome(String word){
         String rever_word=getReverseWord(word);
         if(word.equals(rever_word)){
            return true;
         }
         return false;
    }
    public static String getReverseWord(String word){
        if(word==null || word.isEmpty()){
            return word;
        }
        return word.charAt(word.length()-1)+getReverseWord(word.substring(0,word.length()-1));
    }
}
