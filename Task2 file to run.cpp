#include<iostream>
#include <fstream>
#include <D:\Vaidehi Bhat folder\varad\learnimport.cpp>
using namespace std;

int main(){
    cout<<"Welcome to the Banking System, If you're an exisitng user and wish to login into your account, press one, if you're a new user, press 0"<<endl;
    int n1;
    cin>>n1;
    if (n1==0){
        cout<<"Enter your name"<<endl;
        string new_name,t,s,first_bal;
        cin>>new_name;
        cout<<"Enter the first deposit in your bank account"<<endl;
        cin>>first_bal;
        ifstream in("textzz.txt");
        for (int i=0; i<4;i++) {
            getline(in,t);
            s=s+t+"\n";

        } s=s+new_name+","+first_bal;
        cout<<s<<endl;
        ofstream out("textzz.txt");
        out<<s<<endl;

    } else{
        cout<<"Hi "<<" Do you wish to withdraw/deposit money(0) or transfer to another bank account(1)?"<<endl;
    int ans;
    cin>>ans;
    

    if (ans==0) {
    cout<<"First enter your name, then enter none"<<endl;
     print_s_0();

    } else if(ans==1) {
    cout<<"First enter your name, then enter name of the person you wish to transfer money"<<endl;
    print_s_1();}
    }
        
    
    return 0;
}