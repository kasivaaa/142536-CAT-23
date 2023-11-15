//142536
//Course DBIT Sep-Dec 2023
//Strathmore university

//using switch case determine the smallest number


#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter a,b,c";
    cin>>a,b,c;

    
    switch (a){
        case 1:
        if(a>b>c){
            cout<<c<<" is the largest";
            }
            break;
            case 2:
            if(a>b<c){
                cout<<c<<" is the smallest";
                }
                break;
                case 3:
                if(c<b<a){
                    cout<<c<<" smallest";
                    }
                    break;
                    default:{
                        cout<<"No such option";
                        }

}


