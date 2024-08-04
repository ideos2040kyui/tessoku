#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int N, X;
    cin >> N >> X;
    int A[N+10];
    for (int i=1; i<=N; i++) cin >> A[i];
    int p, q, r;
    p = 0;
    q = N / 2;
    r = N;
    while(true){
        if (A[q] == X){
            cout << q << endl;
            break;
        }
        else if (X < A[q]){
            r = q - 1;
            q = r / 2;
        }
        else if (A[q] < X){
            p = q;
            q = ((r - p) / 2) + p;
        }
    }
    return 0;
}