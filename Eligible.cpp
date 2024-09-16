#include <iostream>

using namespace std;

int main(){
    bool eligible;
    string isUSCitizen;
    int workExperience;
    cout << "Are you a U.S citizen?" <<endl;
    cin >> isUSCitizen;
    cout << "How many years of work experience do you have?" << endl;
    cin >> workExperience;
    eligible = (isUSCitizen == "yes") || (workExperience >= 2);
    if(eligible){
        cout << "You are eligible to work.";
    }else{
        cout << "You are not eligible to work.";
    }
    return 0;
}