5 factorial
120

package pacakage;
import java.util.Scanner;
// factorial of a number//


public class Z14 {
	public static void main(String []args)
	{
		int i,f=1,n;
		System.out.println(" enter the term");
		Scanner t= new Scanner(System.in);
		n=t.nextInt();
		for(i=1;i<=n;i++)
		{
			f=f*i;
		}
		System.out.println(f);
	}

}
