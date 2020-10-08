#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m, counter = 1;
    char temp;
    vector<vector <char> > iMatrix;
    vector<vector <int> > oMatrix;
    while(cin>>n>>m){
        if (n == 0 && m == 0) break;
        cout<<"Field #"<<counter<<':'<<endl;
        iMatrix.assign(n, vector<char>(m, '.'));
        oMatrix.assign(n, vector<int>(m, 0));
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                cin >> temp;
                if(temp == '*') {
                    iMatrix[i][j] = '*';
                    for (int k = 0 ; k < 3; k++){
                        for (int l = 0 ; l < 3; l++){
                            if(i-1+k >= 0 && j-1+l >= 0 && i-1+k < n && j-1+l < m)
                                oMatrix[i-1+k][j-1+l]++;
                        }
                    }
                }
            }
        }
        for (int i = 0 ; i < n ; i++){
            for (int j = 0 ; j < m ; j++){
                if(iMatrix[i][j] == '*') cout<<'*';
                else cout<<oMatrix[i][j];
            }
            cout<<endl;
        }
        cout<<endl;
        counter++;
        iMatrix.clear();
        oMatrix.clear();
    }
    return 0;
}
