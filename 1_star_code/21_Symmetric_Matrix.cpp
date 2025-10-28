// 11349 Symmetric Matrix
#include <iostream>
// #include <stdio.h>
// #include <stdlib.h>
#include <vector>
#include <string>

using namespace std;

int main() {
    int T;
    cin >> T;
    //scanf("%d", &T);
    for (int t = 1; t <= T; ++t) {
        int n;
        char eq;
        char N_str[10];

        cin >> N_str >> eq >> n;
        //scanf("%s %c %d", N_str, &eq, &n);

        vector<vector<long long>> matrix(n, vector<long long>(n));

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> matrix[i][j];
                //scanf("%lld", &matrix[i][j]);
            }
        }

        bool is_symmetric = true;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                
                if (matrix[i][j] < 0) {
                    is_symmetric = false;
                    break;
                }

                // 找出(i, j)在中心對稱位置的元素
                int symmetric_i = n - 1 - i;
                int symmetric_j = n - 1 - j;
                
                if (matrix[i][j] != matrix[symmetric_i][symmetric_j]) {
                    is_symmetric = false;
                    break;
                }
            }
            if (!is_symmetric) {
                break;
            }
        }

        cout << "Test #" << t << ": ";
        if (is_symmetric) {
            cout << "Symmetric." << endl;
        } else {
            cout << "Non-symmetric." << endl;
        }
        //printf("Test #%d: %s\n", t, is_symmetric? "Symmetric.":"Non-symmetric.");
    }

    return 0;
}