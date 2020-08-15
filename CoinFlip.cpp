#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
	srand(time(0));
	int number = rand() % 2 +1;
	if(number == 1){
		cout<< "Head";
	}
	else{
		cout<< "Tail";
	}
return 0;

}
