#include <climits>
#include <fstream>
#include <iostream>
#include <map>
#include <set>
#include <sstream>
#include <string>
#include <unordered_map>

using namespace std;

using UnixTS = unsigned int;

const unsigned short TRANSACTION_COL_N = 6;
const unsigned short ACCOUNT_COL_N = 3;

struct Transaction {
    std::string id;
    UnixTS date;
    std::string type;
    std::string from;
    std::string to;
    double amount;
    bool operator<(const Transaction& other) const;
};

class Account
{
public:
    Account();// default constructor
    Account(const std::string& id, const std::string& name, UnixTS validity_dt = UINT_MAX);
    void addTransaction(const Transaction& transaction);
    double getBalance(UnixTS = UINT_MAX) const;
    void printInfo() const;
    size_t getTransactionsCount() const;

private:
    std::string id;
    std::string name;
    std::set<Transaction> transactions;
    UnixTS validity_dt;
};

void Account::printInfo() const
{
    std::cout << "--------------------------------\n"
              << "id: " << id << '\n'
              << "name: " << name << '\n'
              << "validity datetime: " << validity_dt << '\n'
              << "--------------------------------\n";
}

size_t Account::getTransactionsCount() const
{
    return transactions.size();
}

Account::Account()
{
    id = "00000000-0000-0000-0000-000000000000";
    name = "Noname";
    validity_dt = 0;
}
// Task 1 (5 points) done
// Implement Account constructor with arguments
Account::Account(const std::string& id,
                 const std::string& name,
                 UnixTS validity_dt)
{
    (*this).id = id;
    (*this).name = name;
    (*this).validity_dt = validity_dt;
}

// Task 2 (10 points) done
// Implement operator< overloading for Transaction
bool Transaction::operator<(const Transaction& other) const
{
    if ((*this).date < other.date) {return true;}
    else if ((*this).date > other.date) {return false;}
    else 
    {
        int a, b;
        if ((*this).type == "deposit") {a = 1;}
        else if ((*this).type == "withdraw") {a = 2;}
        else {a = 3;}

        if (other.type == "deposit") {b = 1;}
        else if (other.type == "withdraw") {b = 2;}
        else {b = 3;}
        return a < b;
    }
}

// Task 3 (10 points) done that's easy)
// Implement adding transaction to Account
void Account::addTransaction(const Transaction& transaction)
{
    (*this).transactions.insert(transaction);
}

// Task 4 (15 points) done
// Implement get balance to date method (default max value)

double Account::getBalance(UnixTS timestamp) const
{
    double balance = 0;
    for (auto it = (*this).transactions.begin(); it != (*this).transactions.end(); it++)
    {
        auto kot = *it;
        if (kot.date <= timestamp)
        {
            if (kot.type == "deposit" && kot.to == (*this).id) {balance += kot.amount;}
            else if (kot.type == "transfer")
            {
                if (kot.to == (*this).id and kot.from != kot.to) {balance += kot.amount;}
                else if (kot.to == (*this).id and kot.from == kot.to) {balance = balance;}
                else if (kot.from == (*this).id and kot.from != kot.to) {balance -= kot.amount;}
            }
            else if (kot.type == "withdraw" && kot.from == (*this).id) {balance -= kot.amount;}
        }
    }
    return balance;
}

// Task 5 (20 points) not today
// Implement transaction and account reading from csv and fill accounts by transactions
using AccountContainer = std::unordered_map<std::string, Account>;
using TransactionContainer = std::set<Transaction>;

TransactionContainer readTransactions(std::ifstream& fileStream)
{
    TransactionContainer transactions;

    std::string line;
    std::getline(fileStream, line);
    size_t transactionsCount = std::stoul(line);
    std::getline(fileStream, line);

    for (size_t i = 0; i < transactionsCount; ++i)
    {
        std::stringstream ss(line);
        std::string field;
        Transaction transaction;
        for (unsigned short i = 0; i < TRANSACTION_COL_N; i++)
        {
            // add your code here;
        }
        // and here;
    }


    return transactions;
}

AccountContainer readAccounts(std::ifstream& fileStream)
{
    AccountContainer accounts;

    // put your code here;

    return accounts;
}

void fillAccounts(AccountContainer& accounts, const TransactionContainer& transactions)
{
    // put your code here;
}
