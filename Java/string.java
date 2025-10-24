public class Main {
    public static void main(String[] args) {
        String name = "yash";
        //// Boolean - used to compare strings
        boolean res1 = name.equals("Yash");
        System.out.println(".equals: " + res1);
        
        res1 = name.equalsIgnoreCase("Yash");
        System.out.println(".equalsIgnoreCase: " + res1);
        
        //// Length
        int length = name.length();
        System.out.println("Length: " + length);
        
        ////Character at 
        char alphabet =name.charAt(2);
        System.out.println(".chatAt: " + alphabet);
        
        ////find 1st index
        name = "yash";
        int index = name.indexOf("a");
        System.out.println(".indexOf: " + index);
        
        ////is empty 
        res1= name.isEmpty();
        System.out.println("name.isEmpty: " + res1);
        String emptystr ="";
        res1= emptystr.isEmpty();
        System.out.println("emptystr.isEmpty: " + res1);
        ////
		String name="YasH";
		////uppercase and lowercase
		String up=name.toUpperCase();
		System.out.println("up- "+up);
		//
		String low=name.toLowerCase();
		System.out.println("low- "+low);
		
		////trim removes all the empty space before and after the string
		name="  YasH ";
		String trim =name.trim();
    	System.out.println("trim- " + trim);
    	
    	////replace the char
    	name="yk=Uash";
        System.out.println("without replace- " + name);
    	String replace= name.replace('U','Y');
    	System.out.println("with replace- " + replace);


    }
}