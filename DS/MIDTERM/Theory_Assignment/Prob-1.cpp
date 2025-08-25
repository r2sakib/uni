#include <iostream>
using namespace std;

int main() {
    int N = 5;

    int score_board [n][6] = {1, 2, 0, 0, 4, 0, 'w', 0, 0, 2, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 'w', 2, 0, 2, 0, 0, 4, 4, 4, 0};

    int min_runs, max_runs;

    int maiden = 0;

    for (int i = 0; i < n; i++) {

        int total = 0;

        for (int j = 0; j < 6; j++) {
            if (score_board[i][j] != 'w') {
                total += score_board[i][j];
            }
        }

        if (i != 0) {
        if (total < min_runs && total != 0) {
            min_runs = i+1;
        }

        if (total > max_runs) {
            max_runs = i+1;
        }

        if (total == 0) {
            maiden++;
        }
        } 

        else if (i == 0) {
            min_runs = total;
            max_runs = total;
        }
    }

    cout << "Minimum runs scored in over: " << min_runs << endl;
    cout << "Maximum runs scored in over: " << max_runs << endl;
    cout << "Number of maiden over: " << maiden << endl;

}