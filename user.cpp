//142536
//Course DBIT Sep-Dec 2023
//Strathmore university

//a program to allow a user to login
#include<iostream>
using namespace std;
int main(){
//a simple program to allow username and password and display menu upon success
string name,pass;
cout<<"Please enter your Username: ";
cin>>name;
if(name=="admin"){
    cout<<"\nWelcome "<<name<<endl;
    }else if (name!="admin") {
        cout<<"\nUsername not found. Please try again."<<endl;
        }
        string passw;
        cout<<"Enter Password: ";
        cin>>passw;
        if(passw=="password"){
            cout<<"\nPassword accepted!"<<endl;
            }else if (passw!="password") {
                cout<<"\nIncorrect password. Try Again."<<endl;
                return 0;
                }
                int choice=0;
                while(choice!=4){
                    cout<<"\nMenu\n";
                    cout<<"1. Go to About us Page \n";
                    cout<<"2. Go to services Page \n";
                    cout<<"3. Go to full Profile Page\n";
                    cout<<"4. Log out\n";
                    
                    cin>>choice;
                    switch(choice) {
                        case 1:{
                            cout<<"Nicole"<<"DBIT";
                            cout<<"It comes about withb challenges that make it interesting;"
                            break;
                            }
                            case 2:{
                                cout<<"services page"<<endl;
                                cout<<"You can sell handmade items at the flea market";
                                cout<<"You can work at the library";
                                return choice;
                                break;
                                }
                                case 3:{
                                    cout<<"Profile page"<<endl;
                                    cout<<"Name:"<<name<<endl;
                                    cin>>Name;
                                    cout<<" yearofBirth:"<<endl;
                                    cin>>yearofBirth;
                                    cout<<"Country:"<<endl;
                                    cin>>country;
                        
                                    cout<<"Citizenship:"<<endl;
                                    cin<<citizenship
                                    cout<<"Email address:"<<endl;
                                    cin>>country
                                    return choice;
                                    break;
                                    }
                                    case 4:{
                                        cout<<"Logged Out Successfully"<<endl;
                                        return 0;
                                        break;
                                        }

                    
                                    }

                    

                    
                    
            

                                


                            

                            
                        


        }

}