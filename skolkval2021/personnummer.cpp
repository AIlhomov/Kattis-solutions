#include <iostream>
#include <string>
#include<string.h>
using namespace std;

int main()
{
    setlocale (LC_ALL, "");
    
    
    string personnummer;
    cin >> personnummer;
    string ar, r;
    
    if (personnummer.at(6) == '+'){
        for (int n = 0; n < 2; n++){
                char p = personnummer[n];
                r += p;
    }
    if (r < "20"){
        cout << "19";
        for (int n = 0; n <= 5; n++){
            cout << personnummer[n];
    }
                for (int n = 7; n <= personnummer.length(); n++){
                    cout << personnummer[n];
    }
    }
    else {
        cout << "18";
        for (int n = 0; n <= 5; n++){
            cout << personnummer[n];
    }
                for (int n = 7; n <= personnummer.length(); n++){
                    cout << personnummer[n];
    }
    }
        
    }
    else if (personnummer.at(6) == '-'){
            for (int n = 0; n < 2; n++){
                char p = personnummer[n];
                ar += p;
    }

        if (ar < "20"){
        cout << "20";
                for (int n = 0; n <= 5; n++){
                    cout << personnummer[n];
    }
                        for (int n = 7; n <= personnummer.length(); n++){
                            cout << personnummer[n];
    }
        }
            else if (ar > "20"){
                cout << "19";
                    for (int n = 0; n <= 5; n++){
                        cout << personnummer[n];
    }
                            for (int n = 7; n <= personnummer.length(); n++){
                                cout << personnummer[n];
        }
    }
    }
    else {
        cout << "Skriv ett personnummer med 12 tecken!";
    }
    
    

    return 0;
}
