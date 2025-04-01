#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    int A[N+2];
    for (int i=1; i<=N; i++) cin >> A[i];
    int answer;
    int left=1, right=1000000000;
    int mid;
    while (left < right){
        mid = (left + right) / 2;
        answer = 0;
        for (int j=1; j<=N; j++){
            answer += mid / A[j];
        }
        if (answer >= K) right = mid;
        else left = mid + 1;
    }
    cout << left << endl;
    return 0;
}