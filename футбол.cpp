#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    string team1, team2, team;
    int goals1 = 0, goals2 = 0;

    // ������ ������ �������
    if (n > 0) {
        cin >> team1;
        goals1++;
        n--;
    }

    // ������ ���������� ������� � ������� ����
    while (n-- > 0) {
        cin >> team;
        if (team == team1) {
            goals1++;
        }
        else if (team2.empty()) {
            team2 = team;
            goals2++;
        }
        else if (team == team2) {
            goals2++;
        }
    }

    // ���������� ����������
    if (goals1 > goals2) {
        cout << team1 << endl;
    }
    else {
        cout << team2 << endl;
    }

    return 0;
}
