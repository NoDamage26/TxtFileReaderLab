#include <iostream>
#include <fstream> 
using namespace std;

int main()
{
    ifstream instream;
    char character, c;
    instream.open("declaration.txt");
    instream.get(character);
    while(!instream.eof())
    {
        
        
        if (isupper(character))
        {
            c = tolower(character);
            cout << c;
        }
        else if (islower(character))
       {
            c = toupper(character);
            cout << c;
        }
        else if (isspace(character))
        {
            cout << "_";
        }
        else 
        {
            cout << character;
        }
        instream.get(character);
        
    }
    





    float score, sum = 0, count = 0;
    ifstream GetInput;
    GetInput.open("scores.txt");
    while (GetInput >> score)
    {  
        sum += score;
        count++;
    }
    cout << "\n \n \n \n The sum of the data is: " << sum << endl;
    cout << "The average of the data is: " << sum / count;
}