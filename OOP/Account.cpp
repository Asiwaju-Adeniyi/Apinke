#include <iostream>
#include <cctype>
#include <iomanip>



class Account {
    private: 
    double balance;
    double interestRate;
    double interest;
    int transactions;

    public: 
    Account (double iRate = 0.045, double bal = 0) {
        balance = bal;
        interestRate = iRate;
        interest = 0;
        transactions = 0;
    } 

    void setInterestRate(double iRate){
        interestRate = iRate;
    }
    
    void makeDeposit(double amount) {
        balance += amount; transactions++;
    }

    void calcInterest() {
        interest = balance * interestRate; 
        balance += interest;
    }

    double getInterestRate() const {
        return interestRate;
    }

    double getBalance() const {
        return balance;
    }

    double getInterest() const {
        return interest;
    }

    int getTransactions() const {
        return transactions;
    }

    bool withdraw(double amount);


};

bool Account::withdraw(double amount) {
    if (balance < amount) 
    return false;
    else {
        balance -= amount;
        transactions++;
        return true;
    }
}

using namespace std;

void displayMenu();
void makeDeposit(Account &);
void withdraw(Account &);

int main()
{
    Account savings;
    char choice;

    cout << fixed << showpoint << setprecision(2);

    do
    {
        displayMenu();
        cin >> choice;

        while (toupper(choice) < 'A' || toupper(choice) > 'G')
        {
            cout << "Please make a choice in the range "
                 << "of A through G:";
            cin >> choice;
        }

        switch (choice)
        {
        case 'a':
        case 'A':
            cout << "The current balance is $";
            cout << savings.getBalance() << endl;
            break;

        case 'b':
        case 'B':
            cout << "There have been ";
            cout << savings.getTransactions()
                 << " transactions.\n";
            break;

        case 'c':
        case 'C':
            cout << "Interest earned for this period: $";
            cout << savings.getInterest() << endl;
            break;

        case 'd':
        case 'D':
            makeDeposit(savings);
            break;

        case 'e':
        case 'E':
            withdraw(savings);
            break;

        case 'f':
        case 'F':
            savings.calcInterest();
            cout << "Interest added.\n";
        }
    } while (toupper(choice) != 'G');

    return 0;
}

void displayMenu()
{
    cout << "\n MENU\n";
    cout << "-----------------------------------------\n";
    cout << "A) Display the account balance\n";
    cout << "B) Display the number of transactions\n";
    cout << "C) Display interest earned for this period\n";
    cout << "D) Make a deposit\n";
    cout << "E) Make a withdrawal\n";
    cout << "F) Add interest for this period\n";
    cout << "G) Exit the program\n\n";
    cout << "Enter your choice: ";
}

void makeDeposit(Account &acnt)
{
    double dollars;

    cout << "Enter the amount of the deposit: ";
    cin >> dollars;
    cin.ignore();
    acnt.makeDeposit(dollars);
}

void withdraw(Account &acnt)
{
    double dollars;

    cout << "Enter the amount of the withdrawal: ";
    cin >> dollars;
    cin.ignore();

    if (!acnt.withdraw(dollars))
        cout << "ERROR: Withdrawal amount too large.\n\n";
}
