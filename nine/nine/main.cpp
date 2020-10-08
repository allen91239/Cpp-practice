#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;
int counter = 0;
int mul_nine(int sum)
{
    int temp, temp_sum = 0;
    temp = sum;
    if(sum == 9){
        counter++;
        return counter;
    }else if(sum % 9 == 0){
        counter++;
        while(temp != 0){
            temp_sum = temp_sum + temp%10;
            temp = temp/10;
        }
        mul_nine(temp_sum);
    }else{
        return counter;
    }
}
int main()
{
    int num, flag = 0, sum, out;
    vector <int> number;
    while(num = getchar()){
        if(num == '\n'){
            flag = 1;
            sum = 0;
            counter = 0;
            for(int i = 0; i < number.size(); i++){
                cout<<number[i];
                sum = sum + number[i];
            }
            if(sum % 9 != 0){
                cout<<" is not a multiple of 9."<<endl;
            }else{
                out = mul_nine(sum);
                cout<<" is a multiple of 9 and has 9-degree "<<out<<'.'<<endl;
            }
            number.clear();
        }else if(num == '0' && flag == 1){
            break;
        }else{
            flag = 0;
            number.push_back(num-'0');
        }
    }
    return 0;
}
