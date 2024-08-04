#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int X[N+1] = {};
    int P, Q;
    Q = 0;
    for (int i=1; i<=N; i++){
        cin >> P;
        X[i] = P - Q;
        Q = P;
    }
    int D;
    cin >> D;
    int L, R;
    int answer;
    for (int i=0; i<D; i++){
        P = 0;
        answer = 0;
        cin >> L >> R;
        for (int j=1; j<L; j++){
            P += X[j];
            if (P > answer) answer = P;
        }
        for (int j=R+1; j<=N; j++){
            P += X[j];
            if (P > answer) answer = P;
        }
        cout << answer << endl;
    }
    
    return 0;
}