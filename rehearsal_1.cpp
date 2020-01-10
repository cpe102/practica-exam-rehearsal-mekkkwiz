#include <iostream>
#include <string>
using namespace std;

int main()
{
    double gpa;
    string name;
    cout << "What is your name? : ";
    cin >> name;
    cout << "What is your GPA? : ";
    cin >> gpa;

    if (gpa >=3.5)
    {  
        cout << name << " LnW Jrim Jrim!!!"; 
    }
    else
    {
        cout << "Try harder, " << name << "!!!";
        
    }
    return 0;
}
