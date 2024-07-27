#include <stdio.h>
#include <iostream>
using namespace std;

int N, X, A[100];
bool answer = false;

int main(){
    cin >> N >> X;
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }
    for (int i = 0; i < N; i++){
        if (A[i] == X) answer = true;
    }
    if (answer) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}