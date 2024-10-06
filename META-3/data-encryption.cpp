/*A company provides network encryption for secure data transfer.The data string is encypted prior to transmission and gets decrypted at the receving end.But ue to some
technical error,the encypted data is lost and received string is differnet from the orginal string by 1 character that got lost in the network so that 
thebug doesnot harm other data that isbeing transferred through the network.


INPUT:
The first line consists of the string that has been sent and the second line consists of a string that has been recieved


OUTPUT:
Print the characterrepresenting the charracter that was lost in the network during transmissiion.

NOte:
Strings coud have lower case and upper case
*/


//MYCODE
/*#include <iostream>
#include <string>
using namespace std;

char findmissingcharacter(string input, string output, int size) {
    for (int i = 0; i < size; i++) {
        if (input[i] != output[i]) {
            return input[i];
        }
    }
    return input[size]; // The missing character is at the end if none are found in the loop
}

int main() {
    string s1 = "simranjit singh";
    string s2 = "simranjit singh";
    int n = s2.size(); // Size of the shorter string

    char character = findmissingcharacter(s1, s2, n);
    cout << "The missing character is: " << character << endl;

    return 0;
}

*/


//CODE IN STRNG RETURN FORM
/*#include <iostream>
#include <string>
using namespace std;

string findmissingcharacter(string input, string output, int size) {
    string result = "";
    bool found = false;
    for (int i = 0; i < size; i++) {
        if (input[i] != output[i]) {
            result = input[i];
            found = true;
            break;
        }
    }
    if (!found && input.size() > size) {
        result = input[size]; // The missing character is at the end if none are found in the loop
    }
    return result;
}

int main() {
    string s1 = "simranjit singh";
    string s2 = "simranjt sinh";
    int n = s2.size(); // Size of the shorter string

    string character = findmissingcharacter(s1, s2, n);
    cout << "The missing character is: " << character << endl;

    return 0;
}
*/




//Simplest code
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, r;
    cin >> s >> r;

    int i;
    for (i = 0; i < s.size(); i++) {
        if (s[i] != r[i]) {
            cout << s[i];
            break;
        }
    }

    if (i == s.size()) {
        cout << "NA";
    }

    return 0;
}

