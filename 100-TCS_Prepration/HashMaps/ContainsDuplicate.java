import java.util.Scanner;
import java.util.HashMap;

public class ContainsDuplicate {

    static Boolean Solution(int arr[]){

        HashMap<Integer, Integer> map = new HashMap<>();

        for(int num : arr){
            if( map.containsKey(num)){
                return true;
            }
            map.put(num, 1);
        }

        return false;
    }

    public static void main(String[] args){
        int arr[] = new int[]{1,2,3,1};
        int arr2[] = new int[]{1,2,3,4};

        Boolean val = Solution(arr);
        System.out.println("arr1 is : " + val);
        
        val = Solution(arr2);
        System.out.println("arr2 is : " + val);

    }
    
}
