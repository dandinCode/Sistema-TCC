//
// Created by Caio on 17/11/2022.
//

#include "Frequency.h"

Frequency::Frequency() {
    percentage = 0;
}

Frequency::Frequency(double percentage) {
    this->percentage = percentage;
}

double Frequency::getPercentage() {
    return percentage;
}

void Frequency::setPercentage(double percentage) {
    this->percentage = percentage;
}