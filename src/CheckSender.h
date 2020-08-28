//
// Created by Maikol Guzman on 8/24/20.
//

#ifndef LAB05_DEPENDENCY_INVERSION_SOLUTION_CHECKSENDER_H
#define LAB05_DEPENDENCY_INVERSION_SOLUTION_CHECKSENDER_H
#include "ISender.h"
#include <string>

class CheckSender: public ISender{
public:
    string sendPayment() override;
};


#endif //LAB05_DEPENDENCY_INVERSION_SOLUTION_CHECKSENDER_H
