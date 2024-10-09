#include <iostream>
using namespace std;
class Cricketer {
public:
    string name;
    int age;

    void inputCricketerData() {
        cout << "Enter Cricketer's Name: ";
        getline(cin, name);
        cout << "Enter Cricketer's Age: ";
        cin >> age;
    }

    void displayCricketerData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Batsman : public Cricketer {
    public:
    int totalRuns;
    float averageRuns;
    int bestPerformance;

    public:
    void inputData() {
       
        inputCricketerData();

        cout << "Enter Total Runs Scored: ";
        cin >> totalRuns;
        cout << "Enter Best Performance (highest score): ";
        cin >> bestPerformance;
    }

    void calculateAverage() {
        if (totalRuns != 0) {
            averageRuns = totalRuns/bestPerformance;
        } else {
            averageRuns = 0;
        }
    }

    void displayData() {
        
        displayCricketerData();

        cout << "Total Runs: " << totalRuns << endl;
        cout << "Best Performance: " << bestPerformance << endl;
        cout << "Average Runs: " << averageRuns << endl;
    }
};

int main() {
    Batsman player;
    player.inputData();
    player.calculateAverage();
    player.displayData();
}