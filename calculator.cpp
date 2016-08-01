//Fitzwilliam Shufflebottom's 5-Speed Calculator -- Prepare to be astonished and amazed!!

 #include <iostream>

using namespace std;

int main()
{
	while (1==1)		//beginning of optional program break
	{
		float a;
		float b;
		float c;
		float d;
		float e;
		float sum;
		float pro;
		float dif;
		float quo;

		int num;

		cout << "how many numbers rooster? \n";
		cin >> num;

		cout << "enter a number hoss! \n";
		cin >> a;

		cout << "enter another number \n";
		cin >> b;


		if (num == 3)
		{
			cout << "enter another number \n";
			cin >> c;
		}
		else if (num == 4)
		{
			cout << "enter another number \n";
			cin >> c;
			cout << "enter another number \n";
			cin >> d;
		}
		else if (num == 5)
		{
			cout << "enter another number \n";
			cin >> c;
			cout << "enter another number \n";
			cin >> d;
			cout << "enter another number \n";
			cin >> e;
		}


		if (num == 2)
		{
			sum = a + b;		//sum		  addition         'a'
			pro = a * b;		//product  	  multiplication   'm'
			dif = a - b;		//difference  subtraction      's'
			quo = a / b;		//quotient    division         'd'
		}
		else if (num == 3)
		{
			sum = a + b + c;
			pro = a * b * c;
			dif = a - b - c;
			quo = a / b / c;
		}
		else if (num == 4)
		{
			sum = a + b + c + d;
			pro = a * b * c * d;
			dif = a - b - c - d;
			quo = a / b / c / d;
		}
		else if (num == 5)
		{
			sum = a + b + c + d + e;
			pro = a * b * c * d * e;
			dif = a - b - c - d - e;
			quo = a / b / c / d / e;
		}


		cout << "what dost thou want? \n";
		cout << "'a' for addition \n";
		cout << "'m' for multiplication \n";
		cout << "'s' for subtraction \n";
		cout << "'d' for division \n";
		cout << "'e' for everything \n\n";

		char ch;
		cout << "User Input: ";
		cin >> ch;

	    if (ch == 'a')
	        cout << "the sum of your numbers is " << sum << endl;
	    else if (ch == 'm')
	        cout << "the product of your numbers is " << pro << endl;
	    else if (ch == 's')
	        cout << "the difference of your numbers is " << dif << endl;
	    else if (ch == 'd')
	        cout << "the quotient of your numbers is " << quo << endl;
	    else if (ch == 'e')
	    {
	        cout << "the sum of your numbers is " << sum << endl;
	        cout << "the product of your numbers is " << pro << endl;
	        cout << "the difference of your numbers is " << dif << endl;
	        cout << "the quotient of your numbers is " << quo << endl;
	    }

	    else cout << "0__o?" << endl;		//if a or b inputs are not numbers

	    cout << "\n<|| type '1' to end program ||> \n";
	    cout << ">|| type '2' to continue calculations ||< \n\n";

	    int exit;		//ending of opt. program break
	    cout << "user input: ";
	    cin >> exit;
	   	if(exit == 1)		//program continues if exit != 1
	    {
	    	break;
	    }
	}

	return 0;

}

