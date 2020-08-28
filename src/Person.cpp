//
// Created by Maikol Guzman on 8/20/20.
//

#include "Person.h"

Person::Person() {}

Person::Person(const std::string &firstName, const std::string &lastName, int documentId) : firstName(firstName),
                                                                                            lastName(lastName),
                                                                                            documentId(documentId) {}

const std::string &Person::getFirstName() const {
    return firstName;
}

void Person::setFirstName(const std::string &firstName) {
    Person::firstName = firstName;
}

const std::string &Person::getLastName() const {
    return lastName;
}

void Person::setLastName(const std::string &lastName) {
    Person::lastName = lastName;
}

int Person::getDocumentId() const {
    return documentId;
}

void Person::setDocumentId(int documentId) {
    Person::documentId = documentId;
}

std::string Person::toString() const {
    return getFirstName() + " " + getLastName() + "\nDoc Id: " + std::to_string(getDocumentId());
}

std::string Person::processPayment(ISender* paymentMethod) {
    MoneySender* moneySender=new MoneySender;

if(paymentMethod==dynamic_cast<BankTransferSender*>(paymentMethod)){
return moneySender->Sender(dynamic_cast<BankTransferSender*>(paymentMethod));
}
else
if(paymentMethod==dynamic_cast<CheckSender*>(paymentMethod)){
   return moneySender->Sender(dynamic_cast<CheckSender*>(paymentMethod));
}
else
if(paymentMethod==dynamic_cast<CashSender*>(paymentMethod)){
   return moneySender->Sender(dynamic_cast<CashSender*>(paymentMethod));
}
else
    return "ERROR";

}


