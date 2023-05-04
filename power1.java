5 
  5*5*5=125
  
  package pacakage;
import java.util.Scanner;
// calculate power of a number//
// input n=5
// power p=3
// 5*5*5=125
public class Z11 {
	public static void main(String[]args)
	{
		int n,p,s=1;
		System.out.println("enter number");
		Scanner t =new Scanner(System.in);
		n=t.nextInt();
		System.out.println("enter power");
		
		p=t.nextInt(); 
		for(int i=1;i<=p;i++)
		{
			s =n*s;
			
		}
		System.out.println(s);
		
		

		
	}

}
