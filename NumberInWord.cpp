#include <iostream>

using namespace std;

int main(){
int number;
cout<<"Enter the Number: ";
cin>>number;
	switch(number) {
		case 1:
			cout<<number <<": One";
			break;
		case 2:
			cout<<number <<": Two";
			break;
		case 3:
			cout<<number <<": Three";
			break;
		case 4:
			cout<<number <<": Four";
			break;
		case 5:
                        cout<<number <<": Five";
                        break;
		case 6:
                        cout<<number <<": Six";
                        break;
		case 7:
                        cout<<number <<": Seven";
                        break;
		case 8:
                        cout<<number <<": Eight";
                        break;
		case 9:
                        cout<<number <<": nine";
                        break;

		default:
			cout<<"Invalid Number";
	}
return 0;
}
