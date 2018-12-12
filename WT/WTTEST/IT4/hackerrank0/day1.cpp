#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    // Declare second integer, double, and String variables.
    int ii;
    double dd,ddd;
    string ss;
        // Read and save an integer, double, and String to your variables.
    cin>>ii;
    cin>>dd;
    cin>>ss;

    // Print the sum of both integer variables on a new line.
    cout<<ii+i<<endl;
    ddd=d+dd;
    cout<<ddd<<endl;cout << fixed << setprecision(1) << ddd << endl;
    cout<<s+ss<<endl;
    // Print the sum of the double variables on a new line.

    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    return 0;
}
