/*
 * 1.cpp
 *
 *  Created on: 28-Sep-2019
 *      Author: aman 
 */
#include <iostream>
using namespace std;

int main()
{
    int i;
    float b[10]= {0},j=0;

    cout << "Enter a total number of 10 number "<<"\n";

    for(i = 0; i < 10; i++)
    {
       cout << " number "<< i + 1 <<":";
       cin >> b[i];
       cout<<"\n";
       if (b[i]>j)
          	   j=b[i];
    }
for(i=0;i<10;i++)
{
cout<<b[i]<<"\t";
}

    cout << "\nThe biggest number is= " << j;
    return 0;
}
