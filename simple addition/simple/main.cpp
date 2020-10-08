#include <iostream>

using namespace std;
long long int sum = 0;
long long int func(long long int num)
{
    long long int temp;
    while(num != 0){
        temp = num % 10;
        num = num / 10;
        sum = sum + ((1+temp)*temp)/2 + num * 45;
    }
    return sum;
}

int main()
{
    long long int p, q, ss = 0;
    while(cin>>p>>q){
        if(p<0 && q<0) break;
        ss = 0;
        sum = 0;
        ss = ss + func(q);
        sum = 0;
        ss = ss - func(p-1);
        cout<<ss<<endl;
    }
    return 0;
}
