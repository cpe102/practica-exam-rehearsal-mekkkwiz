#include <iostream>
#include <string>
using namespace std;
double sum=0,x,con=0;  

int main (){

      while (con<1)
    {
        cout << "Enter x: ";
        cin >> x;
        
        if (x==0)
        {
            con=2;
        }
        if (x > 0)
        {
            sum+=x;
        }
    }
    

    cout << "sum = " << sum;
    return 0;
}

