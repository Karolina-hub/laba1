#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    long long n;
    cin >> n;
    long long* segments=new long long[n];

    for (int i = 0; i < n; ++i) {
        cin >> segments[i];
    }

    // Используем стандартную функцию sort для эффективной сортировки
    sort(segments, segments + n);

    bool canFormTriangle = false;
    for (int i = 0; i < n - 2; ++i) {
        if (segments[i] + segments[i + 1] > segments[i + 2]) {
            canFormTriangle = true;
            break;
        }
    }

    if (canFormTriangle) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
