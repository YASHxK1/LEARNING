/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
public class Main
{
	public static void main(String[] args) {
		System.out.println("Hello World");
		Calculation calc = new Calculation();
		
		int x=2;
		int y=4;
		int addition = calc.sum(x,y);
		System.out.println(addition);

	}
}
class Calculation{
    int sum(int a, int b){
        int res= a+b;
        return res;
    }
}
