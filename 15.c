import java.util.Scanner;
import java.lang.Integer.*;
class TestClass {
    public static void main(String args[] ) throws Exception {
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        int i,j;
        int number[]=new int[n];
        int bitcount[]=new int[n];
        for(i=0;i<n;i++){
            number[i]=in.nextInt();
            bitcount[i]=Integer.bitCount(number[i]);
        }
        
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(number[i]<number[j]){
                    int temp=number[i];
                    number[i]=number[j];
                    number[j]=temp;
                    temp=bitcount[i];
                    bitcount[i]=bitcount[j];
                    bitcount[j]=temp;
                }
            }
        }    
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(bitcount[i]<bitcount[j]){
                    int temp=number[i];
                    number[i]=number[j];
                    number[j]=temp;
                    temp=bitcount[i];
                    bitcount[i]=bitcount[j];
                    bitcount[j]=temp;
                }
            }
        }    
        for(i=0;i<n;i++){
            System.out.print(number[i]+" ");
        }                
        
    }
    }
