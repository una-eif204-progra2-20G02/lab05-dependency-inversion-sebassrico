//
// Created by Sebastian on 8/28/2020.
//

#include "MoneySender.h"
string MoneySender::Sender(BankTransferSender* x) {
   return x->sendPayment();

}
string MoneySender::Sender(CheckSender* x) {
   return x->sendPayment();

}
string MoneySender::Sender(CashSender* x) {
   return x->sendPayment();

}