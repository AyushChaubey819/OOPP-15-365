#include<bits/stdc++.h>
using namespace std ;

class Account {
    private :
    int amt ;
    string name ;
public :
    void withdraw (int rs){
        amt-=rs ;
        cout<<amt<<endl ;
    }

    void deposit(int rs){
        #include <bits/stdc++.h>
using namespace std;

class Account {
private:
    int amt;
    string name;

public:
    
    void setAmount(int balance) {
        amt = balance;
    }

    void withdraw(int rs) {
        if (rs <= amt) {
            amt -= rs;
            cout << "Balance after withdrawal: " << amt << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    void deposit(int rs) {
        amt += rs;
        cout << "Balance after deposit: " << amt << endl;
    }
} ;

int main() {
    int amt;
    cout << "Enter the Initial amount: ";
    cin >> amt;

    Account A1;
    A1.setAmount(amt);

    A1.deposit(25000);
    A1.withdraw(10000);

    return 0;
}
        amt+=rs ;
        cout<<amt <<endl;
    }


};

int main (){


    int rs;
    cin>>rs ;

    int amt;
    cout<<"Enter the Initial amount : ";
    cin>>amt ;

    Account A1,A2 ;
    A1.deposit(25000) ;
    A2.withdraw(10000) ;

}
