//Fitz's Hot Stuff, Off 'da Cuff, Good Enuff 3-Speed Calculator!
import java.util.Scanner;

class apples
{
  public static void main(String[] args)
  {
    Scanner yam = new Scanner(System.in());
    double fnum, snum, tnum, ans;   //declaration of varaibles
    System.out.println("Enter first number: ");
    fnum = yam.nextDouble();
    System.out.println("Enter second number: ");
    snum = yam.nextDouble();
    System.out.println("Enter third number: ");
    tnum = yam.nextDouble();
    
    ans = fnum + snum + tnum;
    System.out.println(The sum of your numbers is: " + ans);
  }
}  
