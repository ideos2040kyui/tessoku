#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int H, W, N;
    cin >> H >> W >> N;
    int matrix[H+2][W+2] = {};
    int A, B, C, D;
    for (int i=0; i<N; i++){
        cin >> A >> B >> C >> D;
        matrix[A][B] += 1;
        matrix[A][D+1] -= 1;
        matrix[C+1][B] -= 1;
        matrix[C+1][D+1] += 1;
    }
    for (int i=1; i<=H; i++){
        for (int j=1; j<=W; j++){
            matrix[i][j] += matrix[i][j-1];
        }
    }
    for (int i=1; i<=W; i++){
        for (int j=1; j<=H; j++){
            matrix[j][i] += matrix[j-1][i];
        }
    }
    for (int i=1; i<=H; i++){
        for (int j=1; j<=W; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}