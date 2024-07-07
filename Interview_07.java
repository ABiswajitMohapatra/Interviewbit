import java.util.*;
public class Interview_07 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int row=sc.nextInt();
        int col=sc.nextInt();
        int A[][]=new int[row][col];
        System.out.println("Taking input from the user:");
        for(int i=0;i<row;i++){
            for (int j=0;j<col;j++){
                A[i][j]=sc.next();
            }
        }
        System.out.println("Matrix before revrsed");
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
            System.out.print(A[i][j]+" ");
            }
            System.out.print();
        }
        //transpose:
        System.out.println("Transpose matrix:");
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                int temp=A[i][j];
                A[i][j]=A[j][i];
                A[j][i]=temp;
            }
            System.out.print();
        }
    for (int i=0;i<row;i++){
        int l,j;
        for( j=0;l=col-1;j<l;j++){
            int temp=A[i][j];
            A[i][j]=A[i][l];
            A[i][j]=temp;
            l--;
        }
    }
    
    System.out.println("After 90 degree:");

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
        System.out.print(A[i][j]+" ");
        }
    }

    }
}
