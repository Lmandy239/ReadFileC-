#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;




int main(){
    ifstream inFS;
    int fileNum1;
    int fileNum2;
    int fileNum3;
    int fileNum4;
    int fileNum5;

    cout << "Opening file FahrenheitTemperature.txt";

    inFS.open("FahrenheitTemperature.txt");
    if(!inFS.is_open()){
        cout << "Error reading the file";
        return 1;
    }




    
    return 0;
}