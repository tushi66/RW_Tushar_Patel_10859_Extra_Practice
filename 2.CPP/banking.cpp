#include<iostream>
using namespace std;

class Bank {
private:
    int balance = 0;
    int account;
    string name;

    static int accountCounter;

public:
    void createAccount(string n) {
        name = n;
        account = 100000 + accountCounter * 13 + n[0];
        accountCounter++;
        cout << "Account created successfully!" << endl;
        cout << "Generated Account Number: " << account << endl;
    }

    int getAccount() const {
        return account;
    }

    string getName() const {
        return name;
    }

    int getBalance() const {
        return balance;
    }

    void deposit(int amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful!" << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(int amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful!" << endl;
        } else {
            cout << "Invalid or insufficient balance." << endl;
        }
    }

    bool transfer(Bank &receiver, int amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            receiver.balance += amount;
            return true;
        } else {
            return false;
        }
    }
};


int Bank::accountCounter = 1;

int findAccount(Bank users[], int total, int accno) {
    for (int i = 0; i < total; ++i) {
        if (users[i].getAccount() == accno) {
            return i;
        }
    }
    return -1;
}

int main() {
    const int MAX = 100;
    Bank users[MAX];
    int totalAccounts = 0;
    int choice;

    do {
        cout << "\n--- Welcome to BANK---" << endl;
        cout << "1. Create New Account" << endl;
        cout << "2. Show Account Details" << endl;
        cout << "3. Deposit Money" << endl;
        cout << "4. Withdraw Money" << endl;
        cout << "5. Transfer Money (between accounts)" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: {
                if (totalAccounts >= MAX) {
                    cout << "Account limit reached!" << endl;
                    break;
                }
                string name;
                cout << "Enter your name: ";
                cin.ignore();
                getline(cin, name);
                users[totalAccounts].createAccount(name);
                totalAccounts++;
                break;
            }

            case 2: {
                int acc;
                cout << "Enter your account number: ";
                cin >> acc;
                int idx = findAccount(users, totalAccounts, acc);
                if (idx != -1) {
                    cout << "Name: " << users[idx].getName() << endl;
                    cout << "Account Number: " << users[idx].getAccount() << endl;
                    cout << "Balance: " << users[idx].getBalance() << endl;
                } else {
                    cout << "Account not found." << endl;
                }
                break;
            }

            case 3: {
                int acc, amt;
                cout << "Enter your account number: ";
                cin >> acc;
                int idx = findAccount(users, totalAccounts, acc);
                if (idx != -1) {
                    cout << "Enter deposit amount: ";
                    cin >> amt;
                    users[idx].deposit(amt);
                } else {
                    cout << "Account not found." << endl;
                }
                break;
            }

            case 4: {
                int acc, amt;
                cout << "Enter your account number: ";
                cin >> acc;
                int idx = findAccount(users, totalAccounts, acc);
                if (idx != -1) {
                    cout << "Enter withdrawal amount: ";
                    cin >> amt;
                    users[idx].withdraw(amt);
                } else {
                    cout << "Account not found." << endl;
                }
                break;
            }

            case 5: {
                int fromAcc, toAcc, amt;
                cout << "Enter your account number: ";
                cin >> fromAcc;
                int senderIdx = findAccount(users, totalAccounts, fromAcc);
                if (senderIdx == -1) {
                    cout << "Sender account not found!" << endl;
                    break;
                }

                cout << "Enter recipient account number: ";
                cin >> toAcc;
                int receiverIdx = findAccount(users, totalAccounts, toAcc);
                if (receiverIdx == -1) {
                    cout << "Receiver account not found!" << endl;
                    break;
                }

                cout << "Enter amount to transfer: ";
                cin >> amt;
                if (users[senderIdx].transfer(users[receiverIdx], amt)) {
                    cout << "Transfer successful!" << endl;
                } else {
                    cout << "Transfer failed! Insufficient balance." << endl;
                }
                break;
            }

            case 6: {
                cout << "Exiting the system. Thank you!" << endl;
                break;
            }

            default:
                cout << "Invalid choice. Try again!" << endl;
        }

    } while (choice != 6);

    return 0;
}
