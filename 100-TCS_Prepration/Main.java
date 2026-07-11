import java.util.*;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner (System.in);
        HashMap<String,Integer> map = new HashMap<>();

        System.out.println("Enter the Key and Value pairs: ");

        for(int i =0; i<5; i++){
            map.put(sc.next(), sc.nextInt());
        }

        System.out.println();

        for ( Map.Entry<String, Integer> entry : map.entrySet()){
            System.out.println(entry.getKey() + " -> " + entry.getValue() );
        }

        System.out.println();
        System.out.println("Finding Max and Min values");

        int maxVal = Collections.max(map.values());
        int minVal = Collections.min(map.values());

        System.out.println(maxVal);
        System.out.println(minVal);

        System.out.println();
        System.out.println("Finding Max and Min values by using entry set: ");

        Map.Entry<String, Integer> maxEntry = null;
        Map.Entry<String, Integer> minEntry = null;

        for( Map.Entry<String , Integer> entry : map.entrySet()){

            if( maxEntry == null || entry.getValue() > maxEntry.getValue()){
                maxEntry = entry;
            }

            if( minEntry == null || entry.getValue() < minEntry.getValue()){
                minEntry = entry;
            }
        }

        System.out.println(maxEntry);
        System.out.println(minEntry);
    }
}
