#include <iostream>
#include <String>

using namespace std; 

//public//
 string university [4][3] {university [0][1] ="York university", university[0][2]="Ontario Tech university", university[0][3]= "UofT (University of Toronto)", university[1][1]="What is the total (university) undergraduate enrollment for the year? \n+59,000 enrolled in undergrad programs", university[2][1]="What is the percentage of women (or men) enrolled? \nIn a past survey 67\\%\\ are men and 33\\%\\ are women enrolled at york university ",};

void welcome(){
    system ("color 0B");
    cout<< "---------------------------------------------"<<endl;
    cout<<"|       University Investigation Program      |"<<endl;
    cout<< "---------------------------------------------"<<endl;
    cout<<endl<<endl;
    cout<<"information is available for the following universities: "<<endl;
    cout<< "1. "<< university[0][0] << endl;
    cout<< "2. "<< university[0][1] << endl;
    cout<< "3. "<< university[0][2] << endl << endl;
    string choice;
    cout<<"which universit would u like to see 1. 2. or 3.\n";
    cin >> choice;
    if( choice == "1."){
        cout<<university [1][0];
        cout<<university [2][0];
        cout<<university [3][0];
    }

}


int main(){
    welcome();
}