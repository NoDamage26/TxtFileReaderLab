#include <iostream>
#include <fstream> 
using namespace std;

int main()
{
    cout << "Hello \n";
    float score, sum = 0, count = 0;
    ifstream GetInput;
    ofstream outstream;
    GetInput.open("scores.txt");
    while (GetInput >> score)
    {  
        sum += score;
        count++;
    }
    cout << "The sum of the data is: " << sum << endl;
    cout << "The average of the data is: " << sum / count;
    
}