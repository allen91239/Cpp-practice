#include <iostream>
#include <vector>
using namespace std;

void check(string num)
{
    vector <int> temp;
    int sum_even = 0, sum_odd = 0, flag = 0;
    for(int i = 0 ; i < num.size(); i++){
        temp.push_back(num[i] -'0');
    }
    for(int i = 0; i < temp.size(); i++){
        if(flag == 0){
            flag = 1;
            sum_odd = sum_odd + temp[i];
        }else{
            flag = 0;
            sum_even = sum_even + temp[i];
        }
    }
    if( (sum_odd - sum_even) % 11 == 0){
        cout<<num<<" is a multiple of 11."<<endl;
    }else{
        cout<<num<<" is not a multiple of 11."<<endl;
    }
}

int main()
{
    string num;

    while(cin >> num){
        if (num.compare("0") == 0) break;
        check(num);
    }
    return 0;
}
