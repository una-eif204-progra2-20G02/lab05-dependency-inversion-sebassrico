//
// Created by Sebastian on 8/28/2020.
//
#include "BankTransferSender.h"
#include "CashSender.h"
#include "CheckSender.h"
#ifndef MY_PROJECT_NAME_SENDMONEY_H
#define MY_PROJECT_NAME_SENDMONEY_H
using namespace std;
class MoneySender: public BankTransferSender, public CashSender, public CheckSender{
public:
    string Sender(BankTransferSender* x);
   string Sender(CashSender* x);
    string Sender(CheckSender* x);


};
#endif //MY_PROJECT_NAME_SENDMONEY_H
