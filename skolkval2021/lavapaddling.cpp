#include <iostream>
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(){

    setlocale (LC_ALL, "");
    
    ll oar, paddel,h ,svaret=0;
    
    cin >> oar >> paddel >> h;
    
    ll meter[100];

    for (int n=0;n<oar-1;n++){
        cin >> meter[n];
    }
  
    meter[oar-1];
  
    for (ll i=oar-2; i>=0; i--){
        svaret = max(svaret, (meter[i]*h+svaret+paddel-1)/paddel);        
    }
    cout << svaret;
return 0;
}
