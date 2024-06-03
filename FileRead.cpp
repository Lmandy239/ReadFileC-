#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ifstream inFS;
    string city1, city2, city3, city4, city5, city6;
    int fileNum1, fileNum2, fileNum3, fileNum4, fileNum5, fileNum6;

    cout << "Opening file FahrenheitTemperature.txt" << endl;

    inFS.open("FahrenheitTemperature.txt");
    if(!inFS.is_open()){
        cout << "Error reading the file" << endl;
        return 1;
    }

    cout << "Reading temperatures" << endl;
    cout.flush();

    inFS >> city1 >> fileNum1;
    inFS >> city2 >> fileNum2;
    inFS >> city3 >> fileNum3;
    inFS >> city4 >> fileNum4;
    inFS >> city5 >> fileNum5;
    inFS >> city6 >> fileNum6;
    inFS.close();

    cout << city1 << " temperature: " << fileNum1 << endl;
    cout << city2 << " temperature: " << fileNum2 << endl;
    cout << city3 << " temperature: " << fileNum3 << endl;
    cout << city4 << " temperature: " << fileNum4 << endl;
    cout << city5 << " temperature: " << fileNum5 << endl;
    cout << city6 << " temperature: " << fileNum6 << endl;

    cout << "Closing file" << endl;
    return 0;
}
