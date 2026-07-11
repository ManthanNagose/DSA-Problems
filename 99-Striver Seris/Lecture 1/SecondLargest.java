import java.util.Scanner;
import java.util.Arrays;

public class SecondLargest {

    static int Answer(int arr[]){
        Arrays.sort(arr);
        int large = arr[arr.length-1];
        
        int i = arr.length-1;
        while(i >= 0 && arr[i] == large ){
            i--;
        }
        int sLarge = arr[i];

        return sLarge;
    }


    static int Solution(int arr[]){
        int maxi = Integer.MIN_VALUE;

        for(int i=0; i<arr.length; i++){
            if(arr[i] > maxi)
                maxi = arr[i];
        }

        int sLarge = arr[0];
        for(int i=0; i<arr.length; i++){
            if( arr[i] > sLarge && arr[i] < maxi)
                sLarge = arr[i];
        }

        return sLarge;
    }

    

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int arr[] = new int[]{2,6,3,4,1,6,4,9,9,9,7,5,8,6,2};

        int sLarge = Answer(arr);
        System.out.println("Second largest element is : " + sLarge);
        
        sLarge = Solution(arr);
        System.out.println("Second largest element is : " + sLarge);
        

    }
    
}
