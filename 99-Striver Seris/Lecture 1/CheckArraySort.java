public class CheckArraySort{

    static Boolean Solution(int arr[]){
        for(int i=1; i<arr.length; i++){
            if(arr[i-1] < arr[i])
                continue;
            else{
                return false;
            }
        }
        return true;
    }
    public static void main(String [] args){
        int arr[] = new int[]{2,4,3,5,6,1,2,7,4,6,9};
        int arr2[] = new int[]{2,3,4,5,6,7,8,9,10};

        if(Solution(arr) == false)
            System.out.println("Array 1 is not sorted");
        else{
            System.out.println("Array 1 is sorted.");
        }

        if(Solution(arr2) == false)
            System.out.println("Array 2 is not sorted");
        else{
            System.out.println("Array 2 is sorted.");
        }
    }
}