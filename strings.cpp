// STRINGS:
// 1]No need to size beforehand.
// 2]performing operations like concatenation and append is easier.
// 3]terminated with a special character '\O'.

// CODE:
#include <iostream>
#include<algorithm>            
using namespace std;

int main()
{
    // initializing string:
    // string str;
    // // cin>>str;

    // string str1 (5, 'n');
    // cout<<str1<<endl;

    // giving values to string & declare string :-
    // string str="Sania";
    // cout<<str;

    // how to take input: getline is used to input the whole sentence:
    // string str;
    // getline(cin, str);
    // cout<<str<<endl;

    // functions of strings:
    
    // 1]append:

    // string str;

    // string s1="fam";
    // string s2="ily";

    // // s1.append(s2);
    // // cout<<s1 <<endl;

    // // other method for append:
    // s=s1+s2;
    // cout<<s1  + s2 <<endl;

    // 2]access particuar member
    // string s1 = "fam";
    // string s2 = "ily";

    // // cout<<s1[1]<<endl;
    // cout<<s2[2]<<endl;

    // 3]clear the string

    // string abc="sgvjkljlljpokm";
    // abc.clear();
    // cout<<abc;

    // 4]Compare 2 strings: if strins are equal it will give 1 as input else return 0
    // string s1= "abc";
    // string s2= "abc";

    // if (s1.compare(s2==0))
    //     cout<<"strings are equal";
    //     cout<<s2.compare(s1)<<endl;

    // 5]check if string is empty or not:
    // string s1="abc";
    // cout<<s1<<endl;

    // s1.clear();

    // if(s1.empty())
    // cout<<"string is empty";

    // if not then:
    // string s1="abc";
    // cout<<s1<<endl;

    // if(!s1.empty())
    // cout<<"string is not empty";

    // 5]deletion
    // string s1 = "nincompoop";
    //  erase particular char
    // s1.erase(2, 3);
    // cout << s1 << endl;

    // 6]find particular character:
    // string s1 = "nincompoop";
    // cout<<s1.find("poop")<<endl;

    // 7]insert particular char
    //  string s1 = "nincompoop";
    //  s1.insert(2,"lol");
    //  cout<<s1 <<endl;

    // 8]find length of string:
    // string s1 = "nincompoop";
    // cout << s1.size() << endl;
    // 0r
    //  cout << s1.length() << endl;

    // 9]how to iterate:
    // string s1 = "nincompoop";

    // for (int i = 0; i < s1.length(); i++)
    // cout<<s1[i] << endl;

    // 10]if we want substring of any string
    // string s1 = "nincompoop";

    // string s=s1.substr(6,4);
    // cout<< s << endl;

    // 11]Convert numeric string into integer
    // string s1 = "786";

    // int x = stoi(s1);
    // cout  << x+2 << endl;

    // 12]Convert integer into string it will append 2:

    // int x = 786;

    // cout << to_string (x) + "2"  << endl;



    // 13]SORT A STRING:-
        // "YZX" ---->   "XYZ"
        // For sorting include header file algorithm


            string s1="xcmnmvzcmfas";

            sort(s1.begin() , s1.end());

            cout << s1 << endl;




    return 0;
}