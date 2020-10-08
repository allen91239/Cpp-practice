#include <iostream>

using namespace std;

unsigned long func(unsigned long y)
{
    unsigned long counter = 1;
    while(y != 1){
        if(y % 2 != 0){
            y = 3 * y + 1;
        }else{
            y = y / 2;
        }
        counter++;
    }
    return counter;
}

int main()
{
    unsigned long i, j;

    while(true){
        if(cin>>i)
            cin>>j;
        else{
            break;
        }
        if (i > j) {
            int t;
            t = i;
            i = j;
            j = t;
			//swap(i,j)
        }
        unsigned long max_cycle = 1;
        for (unsigned long x = i; x <= j; x++){
            unsigned long tmp;
            tmp = func(x);
            if(max_cycle < tmp)
                max_cycle = tmp;
        }
        cout<<i<<' '<<j<<' '<<max_cycle<<endl;
    }
    return 0;
}
