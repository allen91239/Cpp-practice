#include <iostream>

using namespace std;

int num[10001];
int dp[10000][100];
int N, K;
int divisible(int index, int mod)
{
    mod = ( mod % K + K ) % K;
    if(index == N-1) {
        if (mod == 0) return 1;
        else return 0;
    }
    if(dp[index][mod] != -1){
        return dp[index][mod];
    }
    int add, divide;
    add = divisible(index + 1, mod + num[index + 1]);
    divide = divisible(index + 1, mod - num[index + 1]);
    bool res = ( add || divide );
    dp[index][mod] = res;
    return res;
}

int main()
{
    cin>>N>>K;
    for( int i = 0 ; i < N ; i++){
        cin>>num[i];
    }
    for( int i = 0 ; i < 10000 ; i++){
        for( int j = 0 ; j < 100 ; j++){
            dp[i][j] = -1;
        }
    }
    if(divisible(0, num[0]) == 1){
        cout<<"Divisible"<<endl;
    }else{
        cout<<"Not divisible"<<endl;
    }
    return 0;
}
