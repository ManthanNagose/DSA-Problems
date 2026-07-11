import java.util.Scanner;
import java.util.Arrays;

public class LargestElementInArray{


    static int Answer(int arr[]){

        Arrays.sort(arr);
        int maxi = arr[arr.length - 1];

        return maxi;
    }

    static int Answer(int arr[], int size){
        int maxi = Integer.MIN_VALUE;

        for(int i=0; i<size; i++){
            if(arr[i] > maxi)
                maxi = arr[i];
        }
        return maxi;
    }

    public static void main(String[] args){
        Scanner sc = new Scanner (System.in);

        System.out.println("Enter the size of array: ");
        int size = sc.nextInt();

        int arr[] = new int[size];

        System.out.println("Enter the numbers: ");
        for(int i=0; i<size; i++){
            arr[i] = sc.nextInt();
        }

        int max = Answer(arr);
        System.out.println("Max element by sort method is : " + max );

        max = Answer(arr, size);
        System.out.println("Max element by mannual is : " + max );


    }
}