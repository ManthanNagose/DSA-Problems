import java.util.Arrays;
public class RemoveDuplicate {

    static int[] array(int arr[]){
        Arrays.sort(arr);
        int start = 0;
        int end = 1;
        while(end < arr.length){
            if(arr[start] != arr[end]){
                start++;
                int temp = arr[end];
                arr[end] = arr[start];
                arr[start] = temp;
            }
            end++;
        }
        return arr;
    }
    public static void main(String[] args){
        int arr[] = new int[]{2,3,2,3,4,5,4,5,6,7,8,6,7,1,9,10};

        int newArr [] = array(arr);

        for(int num : newArr){
            System.out.print(num + " ");
        }
    }
}
