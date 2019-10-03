#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main87878() {
    int num;
    cin>>num;
    bool v=true;
    string n= to_string(num);
    for (int j=0;j<=n.length()-1;j++){
        if (n[j]!=n[n.length()-1-j]){
            v=false;
            break;
        }
    }
    if (v==true)
    cout<<"true";
    else cout<<"false";
    return 0;
}

