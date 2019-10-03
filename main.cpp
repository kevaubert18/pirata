#include<iostream>
using namespace std;
int main1111(){
    char c=65;
    char *ptr1;
    char *ptr2;
    cout<<*ptr1<<endl;
    cout<<*ptr2<<endl;
    ptr1=&c;
    ptr2=ptr1;
    cout<<*ptr1<<endl;
    cout<<*ptr2<<endl;
    return 0;
}