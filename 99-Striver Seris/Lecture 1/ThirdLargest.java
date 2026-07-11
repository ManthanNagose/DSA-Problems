import java.util.Arrays;
public class ThirdLargest {

    static int Solution(int arr[]){
        Arrays.sort(arr);
        int Largest = arr[arr.length-1];
        int i = arr.length-1;

        while(i >= 0 && arr[i] == Largest){
            i--;
        }
        int sLargest = arr[i];

        int j = arr.length-1;
        while( j >= 0 && (arr[j] == sLargest || arr[j] == Largest)){
            j--;
        }
        int tLargest = arr[j];

        return tLargest;
    }

    static int Answer(int arr[]){
        int largest = arr[0];
        for(int i=1; i<arr.length; i++){
            if(arr[i] > largest)
                largest = arr[i];
        }

        int sLargest = arr[0];
        for(int i=1; i<arr.length; i++){
            if( arr[i] > sLargest && arr[i] < largest)
                sLargest = arr[i];
        }

        int tLargest = arr[0];
        for(int i=1; i<arr.length; i++){
            if(arr[i] > tLargest && arr[i] < sLargest){
                tLargest = arr[i];
            }
        }
        return tLargest;
    }
    public static void main(String[] args){
        int arr[] = new int[]{2,3,2,4,5,3,4,6,8,8,9,7,8,6,5,7,8,8,6,7,8,8,6,8,9,3};

        int tLargest = Solution(arr);
        System.out.println("Third largest element in array is : " + tLargest);
        
        tLargest = Answer(arr);
        System.out.println("Third largest element in array is : " + tLargest);

    }
    
}
