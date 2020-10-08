#include <iostream>

using namespace std;

int main()
{
    int N, K, coins;
    int coin[1001], left[1001], right[1001];
    for (int i = 0 ; i < 1001; i++){
        coin[i] = 2;
        left[i] = 2;
        right[i] = 2;
    }
    cin>>N;
    cin>>K;
    char result;
    for (int i = 0 ; i < K; i++){
        cin>>coins;
        for (int j = 0 ; j < coins; j++){
            cin>>left[j];
        }
        for (int k = 0 ; k < coins; k++){
            cin>>right[k];
        }
        cin>>result;
        char gt = '>';
        char lt = '<';
        char eq = '=';
        if(result == gt){
            for(int j = 0 ; j < coins; j++){
                if(coin[left[j]]!= 0) coin[left[j]] = 1;
                if(coin[right[j]]!= 0) coin[right[j]] = -1;
            }
        }else if(result == lt){
            for(int j = 0 ; j < coins; j++){
                if(coin[left[j]]!= 0) coin[left[j]] = -1;
                if(coin[right[j]]!= 0) coin[right[j]] = 1;
            }
        }else if(result == eq){
            for(int j = 0 ; j < coins; j++){
                coin[left[j]] = 0;
                coin[right[j]] = 0;
            }
        }
        /*
        cout<<"Round "<<i+1<<" result:"<<endl;
        for (int l = 1; l <= N; l++){
            cout<<coin[l]<<' ';
        }
        cout<<endl;
        */
    }
    int counter = 0, falsecoin = -1, ucounter = 0, ufalsecoin = -1;
    for (int i = 1 ; i <= N ; i++){
        if(coin[i] == 1 || coin[i] == -1) {
            counter++;
            falsecoin = i;
        }
        if(coin[i] == 2){
            ucounter++;
            ufalsecoin = i;
        }
    }
    if(counter == 1){
        cout<<falsecoin<<endl;
    }else if(counter == 0 && ucounter == 1){
        cout<<ufalsecoin<<endl;
    }else{
        cout<<'0'<<endl;
    }
    return 0;
}
