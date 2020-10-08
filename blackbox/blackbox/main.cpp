#include <iostream>

using namespace std;

class seq{
public:
    int num;
    seq *next;
    seq(int a): num(a),next(0){};
};

int main()
{
    int M, N;
    cin>>M;
    cin>>N;
    int add[30000] = {0};
    int get[30000] = {0};
    seq *head, *current, *new_num;
    int get_count = 0;
    for (int i = 0 ; i < M; i++){
        cin>>add[i];
    }
    for (int i = 0 ; i < N; i++){
        cin>>get[i];
    }
    for (int i = 0 ; i < M; i++){
        if(i == 0) head = new seq(add[i]);
        else{
            if(head->num >= add[i]){
                new_num = new seq(add[i]);
                new_num->next = head;
                head = new_num;
            }else{
                current = head;
                while(current->next != 0){
                    if(current->next->num > add[i]){
                        new_num = new seq(add[i]);
                        new_num->next = current->next;
                        current->next = new_num;
                        break;
                    }else{
                        current = current->next;
                    }
                }
                if(current->next == 0){
                    new_num = new seq(add[i]);
                    current->next = new_num;
                }
            }
        }
        while(get[get_count]-1 == i){
            get_count++;
            current = head;
            for(int j = 0 ; j < get_count-1; j++){
                current = current->next;
            }
            cout<<current->num<<endl;
        }
    }
    /*
    current = head;

    cout<<current->num<<' ';
    while(1){
        current = current->next;
        cout<<current->num<<' ';
        if(current->next == 0) break;
    }
    */
    return 0;
}
