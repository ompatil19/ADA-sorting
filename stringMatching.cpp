#include<iostream>
#include<ctype.h>
using namespace std;

//learn how to read from a text file and take that as text

// int stringMatch(string text, string pattern)
// {
//     int n=text.length();
//     int m=pattern.length();
//     for(int i=0;i<n-m;i++)
//     {
//         int j=0;
//         while(j<m && pattern[j]==text[i+j])
//         {
//             j=j+1;
//         }
//         if(j==m)
//         {
//             return i;
//         }
//     }
//     return -1;
// }
#include <iostream>
#include <iomanip>
#include <chrono>
#include<fstream>
#include<string.h>
using namespace std;
using namespace std::chrono;

int main()
{
    ifstream fin;
    fin.open("list.txt",ios::in);
    fin.seekg(0,ios::beg);
    string text,pattern;
    int n,m,flag=0;
    while(fin)
    {
        getline(fin,text);

    }
    cout<<"Enter pattern : ";
    getline(cin,pattern);
    n=text.size();
    m=pattern.size();


    // Using high_resolution_clock for precise time measurement
    high_resolution_clock::time_point start_time = high_resolution_clock::now();

    ios_base::sync_with_stdio(false);
    for(int i=0;i<n-m-1;i++)
    {
        int j=0;
        while(j<m &&pattern[j]==text[i+j])
        {
            j++;

        }
        if(j==m)
        {
            cout<<"Pattern is found at "<<i+1;
            flag=1;
            break;
        }
    }


    high_resolution_clock::time_point end_time = high_resolution_clock::now();
    if(flag==0)
    {
        cout<<"pattern not present";
    }

    // Calculating total time taken by the program in milliseconds
    double time_taken = duration_cast<duration<double>>(end_time - start_time).count() * 1000;

    // Printing sorted array
 

    cout << "\nTime taken by program is: " << fixed << time_taken << setprecision(5) << " ms" << endl;
    return 0;
}