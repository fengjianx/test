public class JavaStringSplitEmp{
	public static void main(String args[]){	
		String str = "www-fengjian-com";
		String[] temp;
		String delimeter = "-";
		temp = str.split(delimeter);
		for(int i = 0 ; i < temp.length; i++){
			System.out.println(temp[i]);
			System.out.println("");
		}
		System.out.println("----------java for each loop method---------");
		String str1 = "www.fengjian.com";
		String[] temp1;
		String delimeter1 = "\\.";
		temp1 = str1.split(delimeter1);
		for(String x: temp1){
			System.out.println(x);
			System.out.println("");	
		}
	
	}
}
