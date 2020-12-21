#include <iostream>
using namespace std;

int main(){

    int siblings, popsicles;
    //taking user input
    cin >> siblings >> popsicles;

    //making decision
    if(popsicles % siblings){
        cout << "give away" << endl;
    }else
    {
        cout << "eat them yourself" << endl;
    }
    

    return 0;
}