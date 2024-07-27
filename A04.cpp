#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int N = 0;
    int answer[10] = {0};
    cin >> N;
    for (int i=9; i>=0; i--){
        answer[i] = N % 2;
        N = N / 2;
        if (N == 0) break;
    }
    for (int i=0; i<10; i++) cout << answer[i];
    cout << endl;
    return 0;
}