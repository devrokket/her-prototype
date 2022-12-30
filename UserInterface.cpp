//
// Created by Rocket on 2022/12/29.
//

#include "UserInterface.h"

void UserInterface::Greeting() {
    std::cout << "두근두근 대학교 연애 시뮬레이터!" << std::endl;
    std::cout << ">>" << std::endl;
    std::cout << "Choose an option" << std::endl;
    std::cout << "0. Start a new game" << std::endl;
    std::cout << "1. Continue the previous game" << std::endl;
    std::cout << "2. How to play?" << std::endl;
    std::cout << "Enter your option: ";
}

void UserInterface::Introduce() {

    std::cout << "김푸앙: 저는 중앙대학교 무용학과 23학번 김푸앙이라고 해요." << std::endl;
    std::cout << "김푸앙: 이름이 뭐예요? ... ";
}

std::string UserInterface::UserInformation() {
    std::string name;
    std::cin >> name;
    return name;
}

/*
int UserInterface::FirstQuestion() {
    std::string userName2 = UserInformation();
    int firstAnswer;
    std::cout << "<<" << std::endl;
    std::cout << "1. 아 안녕.. 반가워!" << "\n" << "2. 오, 반가워 나는 소프트웨어학부 " << "(이)라고 해!" << std::endl;
    std::cout << ">>" << std::endl;
    std::cout << "당신의 대답은?" << std::endl;
    std::cin >> firstAnswer;
    return firstAnswer;
}*/



void UserInterface::SecondQuestion() {
    std::cout << "말 편하게 할까요?" << std::endl;
    std::cout << "1. 아뇨, 전 이게 편해요." << "\n" << "2. 그럴까? 푸앙이도 말 편하게 해!" << std::endl;
    int secondAnswer;
    std::cout << "Your Answer: ";
    std::cin >> secondAnswer;
}





