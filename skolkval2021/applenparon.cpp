#include <iostream>

using namespace std;

int main()
{
    setlocale (LC_ALL, "");
    
    int applen, paron;
    
    cin >> applen;
    cin >> paron;
    
    applen *= 7;
    paron *= 13;
    // äpple = Axel, päron = Petra
    if (applen < paron) {
        cout << "Petra";
    }
    else if (applen == paron) {
        cout << "lika";
    }
    else {
        cout << "Axel";
    }
    
    

    return 0;
}
