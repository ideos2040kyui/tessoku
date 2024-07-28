#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int N, K;
    int answer = 0;
    cin >> N >> K;
    for (int i=1; i<=N; i++){
        for (int j=1; j<=N; j++){
            if (0 < (K-i-j) && (K-i-j) <= N) answer++;
        }
    }
    cout << answer << endl;
    return 0;
}