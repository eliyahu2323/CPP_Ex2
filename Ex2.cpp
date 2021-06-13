

#include <iostream>
using namespace std;
int main()
{
	int menu;
	bool flag = true; //boolean variable for loop

	while (flag) {  
		cout << "Menu:" << endl;
		cout << "Press:" << endl;
		cout << "0 for exit" << endl;
		cout << "1 for print numbers that are divided by sum of digits" << endl;
		cout << "2 for print pyramid" << endl;
		cout << "3 for GCD" << endl;
		cout << "4 for Tylor series" << endl;
		cout << "your choice:";
		cin >> menu; //get your choice from user

		switch (menu) {

		case 0: {//if menu == 0 you want exit
			cout << "Thank you for using the program" << endl;
			flag = false;
			break;
		}

		case 1: {// targil 1 Checks numbers 2-1000 with divisors by the sum of their digits then prints the number
			for (int i = 2; i < 10; i++) {//print number 2-9
				cout << i << " ";
			}

			for (int i = 10; i <= 1000; i++) {
				int sum = 0;
				int coun = i;
				//Checks a number if it is divided by the sum of its digits
				while (coun != 0) {//Summarize the sum of the digits of the number
					sum += coun % 10;
					coun = coun / 10;
				}
				if (i % sum == 0) {//Checks if the number is divisible by the sum of the digits without a remainder then prints the message
					cout << i << " ";
				}
			}
			cout << endl;
			break;
		}

		case 2: {//targil 2 get number end print pyramid
			int size;//size of pyramid
			cout << "please enter number of Pyramid size: ";
			cin >> size;
			for (int i = 1; i <= size; i++) {
				int run = size - i;//Checks how many times a profit should be made on each number
				for (int j = 1; j <= i; j++) {
					while (run >= 0) {//Makes spaces up to the number
						cout << " ";
						run--;
					}
					cout << j << " ";//print the number
				}
				cout << endl;
			}
			break;
		}

		case 3: {//targil 3 Get 2 numbers and print the largest divisor

			int number1;
			int number2;
			cout << "please enter number1: ";
			cin >> number1;
			cout << "please enter number2: ";
			cin >> number2;

			int min = 0;
			int bigDiv = 1;
			//save the big numbr and divid in 2 
			if (number1 >= number2) {//check if number1>=number2
				min = number2;
			}
			else {
				min = number1;
			}
			//A loop that runs up to half the large number and checks if the remainder is equal to 0 in the two numbers if so keep it and it is meanwhile the large divider until the end of the loop
			for (int i = 2; i <= min; i++) {
				if (number1 % i == 0 && number2 % i == 0) {//
					bigDiv = i;//save the large divid in the bigDiv
				}
			}
			cout << "The largest divider is: " << bigDiv<<endl;//print the result
			break;
		}


			  //targil 4 Taylor column calculation

		case 4: {
			int x;//pow
			int n;//Number of desired organs in the series
			cout << "please enter number for x: ";
			cin >> x;
			cout << "please enter number for n: ";
			cin >> n;
			
			double sum = 1+x;
			if ( n == 1) {//if n==1 print e^x=1
				sum = 1;
				cout << "e^" << x << "= 1" ;

			}
			else {//Otherwise prints the first organ in the series
				cout << "e^" << x << "= 1+" << x;
			}
			int fact = 1;
			for (int i = 2; i < n; i++) {
				fact *= i; //Calculates the assembly of the given organ in a series
				sum += (pow(x,i) / fact);//Calculates the given organ of the series
				cout <<"+"<< pow(x,i)<< "/" << fact;//print the organ of the series 
			}
			cout << " = " << sum << endl;//print the finally sum
			break;
		}
		  default: {//if enter number illegal
			  cout << "please enter legal number " << endl;
		}
		}
	}

}