//10056 What is the Probability?
#include <bits/stdc++.h> 

using namespace std;

int main() {
    int S;
    cin >> S;

    while (S--) {
        int N;
        double p;
        int I;
        cin >> N >> p >> I;
        double probability;
        if (p == 0.0) {
            probability = 0.0;
        } else {
            double q = 1.0 - p;
            double numerator = pow(q, I - 1) * p;
            double denominator = 1.0 - pow(q, N);
            probability = numerator / denominator;
        }
        cout << fixed << setprecision(4) << probability << endl;
    }

    return 0;
}