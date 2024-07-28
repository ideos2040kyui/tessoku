#include <stdio.h>
#include <iostream>
using namespace std;

void digit_2(int n, int *l){
    if (n == 0) ;
    else {
        digit_2(n / 2, l);
        for (int i=0; i<9; i++){
            l[i] = l[i+1];
        }
        if (n%2 == 1) l[9] = 1;
        else l[9] = 0;
    }
}

int main(){
    int N = 0;
    int answer[10] = {0};
    cin >> N;

    digit_2(N, answer);
    for (int i=0; i<10; i++) cout << answer[i];
    cout << endl;
    return 0;
}