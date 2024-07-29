#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int D, N;
    cin >> D >> N;
    int answer[D] = {0};
    int L, R;
    for (int i=0; i<N; i++){
        cin >> L >> R;
        for (int j=L; j<=R; j++){
            answer[j-1]++;
        }
    }
    for (int i=0; i<D; i++) cout << answer[i] << endl;
    return 0;
}