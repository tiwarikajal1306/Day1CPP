#include<iostream>
using namespace std;
int main(){

int day,month,year;

  cout<<"Enter the date (Day Month Year) : \n";

  cin>>day>>month>>year;

  if(year == 2020)
       {
         if((month==3 || month==5) && day>0 && day<=31)
         	cout<<"It is valid Date";
	else if((month==4 || month==6) && day>0 && day<=30)
		cout<<"It is valid Date";
	else {
		cout<<"It is Invalid Date";
	}
}
return 0;
}



