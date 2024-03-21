#include <iostream>
using namespace std;

// Inline function to calculate batting average
inline double calculateBattingAverage(int totalRuns, int timesOut) {
    if (timesOut == 0) {
        // To avoid division by zero error
        return 0.0;
    }
    return static_cast<double>(totalRuns) / timesOut;
}

// Inline function to calculate strike rate
inline double calculateStrikeRate(int totalRuns, int totalBallsFaced) {
    if (totalBallsFaced == 0) {
        // To avoid division by zero error
        return 0.0;
    }
    return static_cast<double>(totalRuns) / totalBallsFaced * 100.0;
}

int main() {
    int totalRuns, timesOut, totalBallsFaced;

    cout << "Enter total runs scored by the player: ";
    cin >> totalRuns;

    cout << "Enter total number of times player has been dismissed (got out): ";
    cin >> timesOut;

    cout << "Enter total number of balls faced by the player: ";
    cin >> totalBallsFaced;

    // Calculate batting average
    double battingAverage = calculateBattingAverage(totalRuns, timesOut);

    // Calculate strike rate
    double strikeRate = calculateStrikeRate(totalRuns, totalBallsFaced);

    // Output the results
    cout << "Batting Average: " << battingAverage << endl;
    cout << "Strike Rate: " << strikeRate << endl;

    return 0;
}
