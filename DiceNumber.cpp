#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() 
{
    srand(time(0));
     
    cout<<"Random numbers of Dice between 1 and 6:"<<endl;
        cout << (rand() % 6) + 1<<" "; 
    return 0; 
}
