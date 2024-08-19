#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    int A[N+2];
    for (int i=1; i<=N; i++) cin >> A[i];
    int answer=0;
    int left, right, mid;
    int distance;
    for (int i=1; i<=N; i++){
        left = i+1;
        right = N+1;
        while (left < right){
            mid = (left + right) / 2;
            distance = A[mid] - A[i];
            if (distance > K) right = mid;
            else left = mid + 1;
        }
        answer += (left - i - 1);
    }
    cout << answer << endl;
    return 0;
}