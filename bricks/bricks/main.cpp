#include <iostream>

using namespace std;

int main()
{
    float A, B, C, D, E;
    cin>>A>>B>>C>>D>>E;
    for (float i = 0 ; i <= 90 ; i=i+0.01){
        if( A<=D && B<=E ) {
            cout<<"YES"<<endl;
            break;
        }
        else if( A<=E && B<=D) cout<<"YES"<<endl;
        else if( A<=D && C<=E) cout<<"YES"<<endl;
        else if( A<=E && C<=D) cout<<"YES"<<endl;
        else if( B<=D && C<=E) cout<<"YES"<<endl;
        else if( B<=E && C<=D) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
