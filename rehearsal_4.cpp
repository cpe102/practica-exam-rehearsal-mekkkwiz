    #include <iostream>
    #include <string>
    using namespace std;
    //Write compress() here.

    string compress(string ucomp)
    {
        string comp;
        int i=0;
        while (i < ucomp.size())
        {
            
            comp += ucomp[i];
            i=i+3;
        }
        return comp;
        
    
    }

    int main()
    {
        string a = compress("cpecmu");
        string b = compress("x");
        string c = compress("HelloWorld");
        string d = compress("BNK48");
        string e = compress("COMPROG261102");
        string f = compress("A");
        string g = compress("AB");
        string h = compress("ABC");
        string i = compress("ABCD");
        
        cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n" << h << "\n" << i << "\n";

    }
