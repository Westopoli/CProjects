#include <iostream>

using namespace std;
// able to use command cin cout directly without having to specify std::cin

int main()
{
    // Monday Wednesday 3/10 3/12 virtual help session 6:30 - 7:45 pm 
    // Tuesday/Thursday will be TA led help sessions at normal class time 

    // C:    printf
    // C++:  cout (insertion operator)

    cout << "Enter a string" << endl;
    // passes Hello World to cout as a string so cout can display it 

    // C:   GCC a.exe 
    // C++: G++ a.exe

    string s4;
    cin >> s4; 
    // works like scanf, uses whitespace to determine which inputs are different 

    //cout << s4 << endl;

    // in c++ strings are classes 

    // string s1 = "Hello";
    // string s2 = "world";
    // string s3 = s1 + " " + s2;

    // cout << s3 << endl;

    // // s1[3]    both are valid in C++
    // // s1.at(3)

    // s3[0] = 'h';
    // cout << s3 << endl;

    // cout << s3.length() << endl;
    // // length includes spaces 

    // // strcpy -> =
    // // strcat -> +=
    // // strcmp -> ==, !=, <, >, <=, >= (compares askey values, just like in C)
    // // strlen -> .size()

    // cout << (s1 < s2) << endl;
    // // returns 1 because it is true

    // ----------- replace an old character with a new character 

    // cout << "Enter the new character" << endl;
    // char x, y;
    // cin >> x;

    // cout << "Enter the old character" << endl;
    // cin >> y;

    // for(int i = 0; i < s4.length(); i++)
    //     if(s4[i] == x)
    //         s4[i] = y;
    
    // cout << s4 << endl;

    int count[26];
    unsigned int i;
    string s5;
    cout << "Enter a string" << endl;
    cin >> s5;
    // check if s4 and s5 are anagrams 

    for(i = 0; i < s4.length(); i++)
        count[s4[i] - 'a']++;

    for(i = 0; i < s5.length(); i++)
        count[s5[i] - 'a']--;

    for(i = 0; i < 26; i++)
        if(count[i] != 0)
            break;

    if(i == 26)
        cout << "anagrams" << endl;
    else   
        cout << "not anagrams" << endl;

    // go to data structures prep tab in canvas and use those, especially the youtube videos, they go very in depth apparently 

    return 0;
}