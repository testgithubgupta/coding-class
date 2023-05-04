

package pacakage;
import java.util.Scanner;
// average and total number//



public class Z13 {
	public static void main(String[]args)
	{
		int p,m,c,e,h,total,average;
		System.out.println("enter your five subject marks");
		Scanner t=new Scanner(System.in);
		p=t.nextInt();
		m=t.nextInt();
		c=t.nextInt();
		e=t.nextInt();
		h=t.nextInt();
		total=(p+m+c+e+h);
		average= (total)/5;
		System.out.println(total);
		System.out.println(average);
		
		
		
		
	}

}
