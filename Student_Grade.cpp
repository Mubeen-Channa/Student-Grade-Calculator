#include<iostream>
using namespace std;

int main()
{
    int i;
    float mark, sum=0, avg;
    
    cout<<"Enter Marks obtained in 5 Subjects : ";
    for(i=0; i<5; i++)
    {
        cin>>mark;
        sum = sum+mark;
    }

    avg = sum/5;
    cout<<"\nGrade : ";
    
    if(avg>=91 && avg<=100){
        cout<<"A+";
    }
    else if(avg>=81 && avg<91){
        cout<<"A";
    }
    else if(avg>=71 && avg<81){
        cout<<"A-";
    }
    else if(avg>=61 && avg<71){
        cout<<"B+";
    }
    else if(avg>=51 && avg<61){
        cout<<"B";
    }
    else if(avg>=41 && avg<51){
        cout<<"B-";
    }
    else if(avg>=33 && avg<41){
        cout<<"C";
    }
    else if(avg>=21 && avg<33){
        cout<<"Fail";
    }
    else{
        cout<<"Invalid!";
    }
    cout<<endl;

    return 0;
}