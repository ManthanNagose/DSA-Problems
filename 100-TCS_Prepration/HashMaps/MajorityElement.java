import java.util.Scanner;
import java.util.HashMap;

public class MajorityElement {
    static int Solution(int arr[]){

        for(int i=0; i<arr.length; i++){
            int count = 0;
            for(int j=0; j<arr.length; j++){
                if(arr[i] == arr[j]){
                    count++;
                }
            }
            if( count > arr.length/2)
                return arr[i];
        }
        return -1;
    }

    public static void main(String[] args){
        int arr[] = new int[]{5,5,5,2,2};
        int arr2[] = new int[]{1,2,1,2,3,1,1};
        
        int ans = Solution(arr);
        System.out.println("Majority element is : " + ans);

        ans = Solution(arr2);
        System.out.println("Majority element in arr2 is : " + ans);
    }
}
