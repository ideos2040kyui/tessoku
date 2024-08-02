#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int N, Q;
    cin >> N >> Q;
    int A[N+1];
    int L, R;
    int answer;
    for (int i=1; i<=N; i++){
        cin >> A[i];
        A[i] += A[i-1];
    }
    for (int i=0; i<Q; i++){
        cin >> L >> R;
        answer = A[R] - A[L-1];
        cout << answer << endl;
    }
    return 0;
}