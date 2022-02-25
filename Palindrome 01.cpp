#include <iostream>

using namespace std;

int main() {
    int i,r,n,t=0;
    cout<<"\n enter the number =";
    cin>>n;
    i=n;
    while(i!=0)
    {
        r= i%10;
        t= (t*10)+r;
        i= i/10;
        
    }
    if(n==t)
    cout<<"\n palindrome";
    else
    cout<<"\n not palindrome";
    return 0;
}
