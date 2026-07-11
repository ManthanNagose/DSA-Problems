class SumOfN{
    static int sum = 0;

    static int fun(int num){

        if(num == 0)
            return 0;

        sum += num;
        fun(num--);

        return sum;
    }
    public static void main(String[] args) {
        System.out.println(fun(5));
    }
}