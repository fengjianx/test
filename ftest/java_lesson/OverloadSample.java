class MyClass{
	int height;
	MyClass(){
		System.out.println("function without arguments ");
		height = 4;
	}
	MyClass(int i){
		System.out.println("the height of the house1: "+i+" meters");
		height = i;
	}
	void info(){
		System.out.println("the height of the house2: "+height+" meters");
	}
	void info(String s){
		System.out.println(s + ": the height of the house3: "+ height +" meters");
	}
}




public class OverloadSample{
	public static void main(String[] args){
		MyClass t = new MyClass(3);
		t.info();
		t.info("overloading method");
	new MyClass();
	}
}
