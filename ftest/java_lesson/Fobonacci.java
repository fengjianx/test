public class Fobonacci{
	public static long fibonaccifunc(long number){
		if ((number==0 || number==1))
			return number;
		else
			return fibonaccifunc(number - 1)+fibonaccifunc(number - 2);
	}

	public static void main(String[] args){
		for(int counter = 0; counter<= 10; counter++){
			System.out.printf("Fibonacci of %d is: %d\n",counter,fibonaccifunc(counter));
		}
	}
}
