public class Interview_05 {
    public static void main(String[] args) {
        int A[]={1,3,6,7,4,5,8};
        System.out.println(Finding(A));
    }
    public static int Finding(int A[]){
        int n=A.length+1;
        int sumofFirstindex=n*(n+1)/2;
        int Sumofactual=0;
        for(int i=0;i<A.length;i++){
            Sumofactual+=A[i];
        }
        return sumofFirstindex- Sumofactual;
    }
}
