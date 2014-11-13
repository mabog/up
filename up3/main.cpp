#include <string>
#include <iostream>

using namespace std;

int main()
{
    string ar1;
    string ar2;
    string ar3;
    string ar4;
    string ar5;

    string ar6;
    string ar7;
    string ar8;
    string ar9;
    string ar10;

    string ar11;
    string ar12;
    string ar13;
    string ar14;
    string ar15;


    string ar16;
    string ar17;
    string ar18;
    string ar19;
    string ar20;

    cout <<"Type 20 names: ";
    getline(cin, ar1);
    getline(cin, ar2);
    getline(cin, ar3);
    getline(cin, ar4);
    getline(cin, ar5);

    getline(cin, ar6);
    getline(cin, ar7);
    getline(cin, ar8);
    getline(cin, ar9);

    getline(cin, ar10);
    getline(cin, ar11);
    getline(cin, ar12);
    getline(cin, ar13);
    getline(cin, ar14);

    getline(cin, ar15);
    getline(cin, ar16);
    getline(cin, ar17);
    getline(cin, ar18);
    getline(cin, ar19);
    getline(cin, ar20);

    //printing
    cout<<ar1;
    cout<<ar2;
    cout<<ar3;
    cout<<ar4;
    cout<<ar5;

    cout<<ar6;
    cout<<ar7;
    cout<<ar8;
    cout<<ar9;
    cout<<ar10;

    cout<<ar11;
    cout<<ar12;
    cout<<ar13;
    cout<<ar14;
    cout<<ar15;


    cout<<ar16;
    cout<<ar17;
    cout<<ar18;
    cout<<ar19;
    cout<<ar20;


//zad1 string array version
    string classmates[24];
    for(int i=1;i<=20;i++)
    {
        cout<<"Type name:"<<i<<" ";
        getline(cin, classmates[i]);
    }


    for(int i=1;i<=20;i++)
    {
        cout<<"Name:"<<i<<" ";
        cout<<classmates[i];
    }

//zad3
    int n;
    cout<<endl<<"Number of friends:";
    cin>>n;
    int ages[n];
    cout<<"Enter the ages:";
    int min=200,max=0;
    for(int i=0;i<n;i++)
    {
        cin>>ages[i];

        if (ages[i]<min) min=ages[i];
        if (ages[i]>max) max=ages[i];
    }
    cout<<"Youngest friend: "<<min<<" Oldest: "<<max;
    //comparing

//zad3-1
    cout<<endl<<"Input 5 grades"<<endl;
    int grades[5];float avr=0;

    for(int i=0;i<5;i++)
    {
        cin>>grades[i];
        avr+=grades[i];
    }
    cout<<"Average: "<<avr/5;

//zad3-2
    int array[5];
    cout<<"Five element array:"<<endl;

    for(int i=0;i<5;i++)
    {
        cin>>array[i];
    }

//sort check
    int asc=0,dsc=0;
    for(int i=0;i<4;i++)
    {
        if(array[i]>array[i+1]) dsc++;
        if(array[i]<array[i+1]) asc++;
    }

    if((asc==4)||(dsc==4)) cout<<endl<<"Is sorted";

//zad5 word reverse
    char cword[8];
    string word;
    cout<<"Type word:";
    cin>>word;

    for(int i=0;i<7;i++)
    {
        cword[i]=word[6-i];
        cout<<cword[i];
    }

    return 0;
}
