#include <stdio.h>
#include <iostream>
using namespace std;

int N, K, P[100], Q[100];
bool answer = false;

int main(){
    cin >> N >> K;
    for (int i=0; i<N; i++) cin >> P[i];
    for (int i=0; i<N; i++) cin >> Q[i];
    for (int i=0; i<N; i++){
        for (int j=0; j<N; j++){
            if ((P[i] + Q[j]) == K){
                cout << P[i] << "\t" << Q [j] << endl;
                answer = true;
            }
        }
    }
    if (answer) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}