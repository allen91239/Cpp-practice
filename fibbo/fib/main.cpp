#include <iostream>

using namespace std;

unsigned int fib (int i)
{
    if(i == 0) return 0;
    else if(i == 1) return 1;
    else if(i >= 2) return fib(i-1)+fib(i-2);
    else return 0;
}

int main()
{
    int counter = 1;
    int i;
    while(cin>>i){
        unsigned int ans;
        cout<<"case "<<counter<<":"<<endl;
        //int d;
        //d = ans;
        if(i>=48){
            cout<<"overflow"<<"\n"<<endl;
        }else{
            ans = fib(i);
            cout<<ans<<"\n"<<endl;
        }
        counter++;
    }
    return 0;
}
