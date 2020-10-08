#include <iostream>

using namespace std;


int main()
{
    int num, counter = 0, original_num;
    while(cin>>num && num != 0){
        original_num = num;
        if(num % 2 == 0) counter++;
        while(num % 2 == 0){
            num = num / 2;
        }
        for(int i = 3 ;i <= original_num; i = i + 2){
            if(num % i == 0) counter++;
            while(num % i == 0){
                num = num / i;
            }
        }
        cout<<original_num<<" : "<<counter<<endl;
        counter = 0;
    }
    return 0;
}
