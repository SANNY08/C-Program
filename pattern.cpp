#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number to print star :";
    cin>>n;
    for (int i = n; i > 0; i--) {
        
        for (int j = 0; j < i; j++) {

            // Printing stars
            cout << "* ";
        }
        // Ending line after each row
        cout << endl;
    }
    return 0;
}
/*  ****
    ***
    **
    * */