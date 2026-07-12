import java.util.Scanner;
import java.util.HashMap;

public class TwoSum {

    static int [] Solution(int arr[], int target){
        HashMap<Integer, Integer> map = new HashMap<>();

        for(int i=0; i<arr.length; i++){
            int num = target - arr[i];
            if( map.containsKey(num)){
                return new int[]{map.get(num), i};
            }else {
                map.put(arr[i], i);
            }
        }
        return new int[]{-1,-1};
    }


    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int arr[] = new int[]{2,7,11,15};

        System.out.println("Enter target value: ");
        int target = sc.nextInt();
    
        int [] ans = Solution(arr,target);

        System.out.println(ans[0] + " " + ans[1]);
    }
}
