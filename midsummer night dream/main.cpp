#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
    int n, temp, answer, answer_right, len, count_answer = 0, possible;
    vector<int> numbers;
    while(cin >> n){
            count_answer = 0;
        for(int i = 0; i < n; i++){
            cin >> temp;
            numbers.push_back(temp);
        }
        sort(numbers.begin(), numbers.end());
        len = n;
        if(len%2 == 0){
            answer = numbers[len/2 -1];
            answer_right = numbers[len/2];
            for(int j = 0 ; j < len; j++){
                if(numbers[j] >= answer && numbers[j] <= answer_right) count_answer++;
            }
            possible = answer_right - answer + 1;
            cout << answer <<' '<<count_answer<<' '<<possible<<endl;
        }else{
            answer = numbers[len/2];
            for(int j = 0 ; j < len; j++){
                if(numbers[j] == answer) count_answer++;
            }
            possible = 1;
            cout << answer <<' '<<count_answer<<' '<<possible<<endl;
        }
        numbers.clear();
        count_answer = 0;
    }
    return 0;
}
