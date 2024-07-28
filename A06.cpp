#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int N, Q;
    cin >> N >> Q;
    int A[N];
    int L, R;
    int answer;
    for (int i=0; i<N; i++) cin >> A[i];
    for (int i=0; i<Q; i++){
        cin >> L >> R;
        answer = 0;
        for (int j=L-1; j<R; j++){
            answer += A[j];
        }
        cout << answer << endl;
    }
    return 0;
}