//
// Created by Rocket on 2022/12/29.
//

#ifndef SAMANTHA_USERINTERFACE_H
#define SAMANTHA_USERINTERFACE_H

#include "iostream"
#include "string"

class UserInterface {
public:
    static void Greeting();
    static std::string UserInformation();
    static void Introduce();
    static int FirstQuestion();
    static void FirstAnswer();
    static void SecondQuestion();
    static void SecondAnswer1();
    static void SecondAnswer2();

private:
    std::string userName;
};


#endif //SAMANTHA_USERINTERFACE_H
