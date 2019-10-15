public class Fizzbuzz{
	public static void main(String args[]){
		
		String output="";
		
		for(int i=1; i<=100; i++){
			
			output="";
			
			if (i%3==0) output+="fizz";
			if (i%5==0) output+="buzz";
			if (output.equals("")) output+=i;
		
			System.out.println(output);
			
		}
		
	}	
}