//
// Created by Rocket on 2022/12/29.
//

#ifndef SAMANTHA_USERINTERFACE_H
#define SAMANTHA_USERINTERFACE_H

#include "Story.h"
#include "Her.h"
#include "iostream"
#include "string"


class UserInterface {
public:
    void Greeting();
    std::string UserInformation();
    void Introduce();
    int FirstQuestion();
    void FirstAnswer();
    void SecondQuestion();
    void SecondAnswer1();
    void SecondAnswer2();
    void PlayDescription();

private:
    std::string userName;
};


#endif //SAMANTHA_USERINTERFACE_H
