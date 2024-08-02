#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int H, W;
    cin >> H >> W;
    int matrix[H+1][W+1] = {};
    for (int i=1; i<=H; i++){
        for (int j=1; j<=W; j++){
            cin >> matrix[i][j];
            matrix[i][j] += matrix[i][j-1];
        }
    }
    for (int i=1; i<=W; i++){
        for (int j=1; j<=H; j++){
            matrix[j][i] += matrix[j-1][i];
        }
    }

    int Q;
    cin >> Q;
    int A, B, C, D;
    int sum;
    for (int i=0; i<Q; i++){
        cin >> A >> B >> C >> D;
        cout << matrix[C][D] - matrix[C][B-1] - matrix[A-1][D] + matrix[A-1][B-1] << endl;
    }
    return 0;
}