import java.util.*;
import java.io.Console;  

public class InputTest
{
	public static void main(String[] args)
	{
		Scanner in = new Scanner(System.in);
		System.out.println("What's your name:");
		String Name = in.nextLine();
		System.out.println("What's your age:");
		int MyAge = in.nextInt();
		Console cons = System.console();
		char[] passwd = cons.readPassword("passwd: ");
		System.out.println("Your name is "+ Name+",Your age is "+ MyAge);
		System.out.println("Your passwd is "+passwd);
		System.out.printf("%tc\n",new Date());
	}
}