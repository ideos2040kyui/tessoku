#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int D, N;
    cin >> D >> N;
    int answer[D+2] = {};
    int L, R;
    for (int i=0; i<N; i++){
        cin >> L >> R;
        answer[L] += 1;
        answer[R+1] += -1;
    }
    int sum=0;
    for (int i=1; i<=D; i++){
        sum += answer[i];
        cout << sum << endl;
    }
    return 0;
}