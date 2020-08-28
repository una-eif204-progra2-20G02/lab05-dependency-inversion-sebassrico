//
// Created by Maikol Guzman on 8/24/20.
//

#include <BankTransferSender.h>
#include <Person.h>
#include <CashSender.h>
#include <CheckSender.h>
#include "gtest/gtest.h"

TEST(PersonTestSuite, VerifyProcessPayment){
 CheckSender* check= new CheckSender;
BankTransferSender* bank=new BankTransferSender;
    CashSender* cash= new CashSender;
    Person* sebas=new Person("Sebastian", "Cambronero", 117790076);
    EXPECT_EQ(sebas->processPayment(bank), "Sending the money by transference");
    EXPECT_EQ(sebas->processPayment(check), "Sending the check with the money");


}
