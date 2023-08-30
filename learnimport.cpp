#include<iostream>
#include<fstream>
#include <string>
#include <stdexcept>

using namespace std;
string name1fn(){
    
    string name1;
    cin>>name1;
    return name1;
}
string name2fn(){
    
    string name2;
    cin>>name2;
    return name2;
}
string namefn(){
    string t,x,y,m,s,o;
 ifstream in("textzz.txt");
    
     cout << "Enter ur name" << endl;
     string name= name1fn();
     int c= name.length();
     for (int i=0;i<7;i++){
        
        getline(in,t);
        
        if(t.find(name)==0){
           m=t ;
        int d= m.length();
           y= m.substr(c+1,d-c);
           
           break;
        }
        else {
            continue;
        }
    } int balance= stoi(y);
    cout<<"Enter the amount you wish to withdraw or deposit"<<endl;
        int withdraw_amount,balance_new;
        cin>>withdraw_amount;
        int ans1;
        cout<<"If you want to withdraw press 0, if you want to deposit press 1"<<endl;
        cin>>ans1;
        
        if (ans1==0){
        balance_new= balance - withdraw_amount;
        }
        else if (ans1==1){
        balance_new= balance + withdraw_amount;
        }
        string balance_new_string=to_string(balance_new);
        cout<<"Process Completed, your new balance is Rs. " << balance_new_string<<endl;
        
        x=name+","+balance_new_string;
        
       return x;
       in.clear();
in.seekg(0,ios::beg);
    } 
    
        
 string customerfnnew1(){
    string a,b,t,x,y;
ifstream in("textzz.txt");
     cout<<"Enter ur name"<<endl;
     string name=name1fn();
     int c= name.length();
     cout<<"How much money do you want to transfer?"<<endl;
        int transfer_money;
        cin>>transfer_money;
        
        cout<<"Which customer do you want to transfer money to?"<<endl;
        string customer_name=name2fn();
         
        int k= customer_name.length();

     for (int i=0;i<7;i++){
        
        getline(in,t);
        
        if(t.find(name)==0){
           x=t ;
        int d= x.length();
           y= x.substr(c+1,d-c);
           
           
        } else if(t.find(customer_name)==0){
           a=t ;
           
           int l= a.length();
        //    int l= a.length();
           b=a.substr(k+1,l-k);
           
          
        }else {
            continue;
        }
    } int balance= stoi(y);
    int balance_new = balance - transfer_money;
    int saamne_wale_ka_balance = stoi(b);
        
        cout<<"Process Completed, your new balance is Rs. " << balance_new<<endl;
        string balance_new_string=to_string(balance_new);
        string new1=name+","+balance_new_string;
        
        int saamne_wale_ka_balance_new=saamne_wale_ka_balance + transfer_money;
        string saamne_wale_ka_balance_string=to_string(saamne_wale_ka_balance_new);
        string new2 = customer_name+","+saamne_wale_ka_balance_string;
        return new1;
} string customerfnnew2(){
    string a,b,t,x,y;
ifstream in("textzz.txt");
    cout<<"You need to repeat the entire process once again, enter the exact data you entered previously"<<endl;
     cout<<"Enter ur name"<<endl;
     string name=name1fn();
     int c= name.length();
     cout<<"How much money do you want to transfer?"<<endl;
        int transfer_money;
        cin>>transfer_money;
        
        cout<<"Which customer do you want to transfer money to?"<<endl;
        string customer_name=name2fn();
         
        int k= customer_name.length();

     for (int i=0;i<7;i++){
        
        getline(in,t);
        
        if(t.find(name)==0){
           x=t ;
        int d= x.length();
           y= x.substr(c+1,d-c);
           
           
        } else if(t.find(customer_name)==0){
           a=t ;
           
           int l= a.length();
        
           b=a.substr(k+1,l-k);
           
           
        }else {
            continue;
        }
    } int balance= stoi(y);
    int balance_new = balance - transfer_money;
    int saamne_wale_ka_balance = stoi(b);
        
        cout<<"Process Completed, your new balance is Rs. " << balance_new<<endl;
        string balance_new_string=to_string(balance_new);
        string new1=name+","+balance_new_string;
        
        
        int saamne_wale_ka_balance_new=saamne_wale_ka_balance + transfer_money;
        string saamne_wale_ka_balance_string=to_string(saamne_wale_ka_balance_new);
        string new2 = customer_name+","+saamne_wale_ka_balance_string;        
        return new2;

} void print_s_0() { 
         string o,s,u,me;
         string name=name1fn();
    string customer_name=name2fn();

        string x= namefn();
        
        ifstream in("textzz.txt");
        for (int i=0;i<7;i++){
        getline(in,o);
        if(o.find(name)==0){
            s=s+x+"\n";
        } else{
             s=s+o+"\n";
          
    } }cout<<s<<endl;
    ofstream out("textzz.txt");
    out<<s<<endl;
    in.clear();
in.seekg(0,ios::beg);

}
void print_s_1() {
    string o,s,u,me;
         string name=name1fn();
    string customer_name=name2fn();
    string new1= customerfnnew1();
    string new2= customerfnnew2();
     ifstream in("textzz.txt");
        for (int i=0;i<7;i++){
        getline(in,u);
        if(u.find(name)==0){
            s=s+new1+"\n";
            continue;
        } else if(u.find(customer_name)==0){
            s=s+new2+"\n";
            
        }
        else{
             s=s+u+"\n";
        }     
    } cout<<s<<endl;
    ofstream out("textzz.txt");
    out<<s<<endl;
  
    } 

// int main(){

//     cout<<"Hi "<<" Do you wish to withdraw money(0) or transfer to another bank account(1)?"<<endl;
//     int ans;
//     cin>>ans;
    

//     if (ans==0) {
//     cout<<"First enter your name, then enter none"<<endl;
//      print_s_0();

//     } else if(ans==1) {
//     cout<<"First enter your name, then enter name of the person you wish to transfer money"<<endl;
//     print_s_1();}
//     return 0;
// }