#include <iostream>
#include <ctime>

using namespace std;

int main(){
    string grade[] = {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W"};

    srand(time(0));

    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    cout << "You will get " << grade[rand()%8] << " in this 261102.";
}