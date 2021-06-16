#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for (int i = 1; i <= n; ++i) {
        int tmp = 0;
        for (int j = i; j <= n && tmp < n; ++j)
            tmp += j;
        if (tmp == n)
            ++answer;
    }
    return answer;
}