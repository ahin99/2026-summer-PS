/*

#include <vector>
#include <iostream>
using namespace std;


int countPrimes(int n) {
    vector<int> num;
    for (int i = 1; i < n; i++){
        num.push_back(i);
    }
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < num.size(); j++){
            if (num[j] % num[i] == 0){
                num.erase(num.begin() + j);
            }
        }
        if (i > num.size()) {break;}
    }

    return num.size();
}


int main() {
    int n;
    cin >> n;
    cout << countPrimes(n) << endl;

    return 0;
}
*/

class Solution {
public:
    int countPrimes(int n) {
    if (n <= 2) return 0;

    // 처음에는 모두 소수라고 가정
    vector<bool> isPrime(n, true);

    // 0과 1은 소수가 아님
    isPrime[0] = false;
    isPrime[1] = false;

    // 에라토스테네스의 체
    for (int i = 2; i * i < n; i++) {
        if (isPrime[i]) {   // i가 소수라면
            for (int j = i * i; j < n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    // 소수 개수 세기
    int count = 0;
    for (int i = 2; i < n; i++) {
        if (isPrime[i]) {
            count++;
        }
    }

    return count;
}
};