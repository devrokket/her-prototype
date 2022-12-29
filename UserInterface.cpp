//
// Created by Rocket on 2022/12/29.
//

#include "UserInterface.h"

void UserInterface::Greeting() {
    Story story;
    std::cout << "두근두근 대학교 연애 시뮬레이터!" << std::endl;
    story.Intro();
    std::cout << ">>" << std::endl;
}

void UserInterface::Introduce() {
    std::cout << "저는 중앙대학교 무용학과 23학번 김푸앙이라고 해요." << std::endl;
}

std::string UserInterface::UserInformation() {
    std::cout << "사용자의 이름을 입력해주세요: ";
    std::string userName;
    std::cin >> userName;
    return userName;
}

int UserInterface::FirstQuestion() {
    std::string userName2 = UserInformation();
    int firstAnswer;
    std::cout << "<<" << std::endl;
    std::cout << "1. 아 안녕.. 반가워!" << "\n" << "2. 오, 반가워 나는 소프트웨어학부 " << userName2 << "(이)라고 해!" << std::endl;
    std::cout << ">>" << std::endl;
    std::cout << "당신의 대답은?" << std::endl;
    std::cin >> firstAnswer;
    return firstAnswer;
}

void UserInterface::FirstAnswer() {
    int firstAnswer2 = FirstQuestion();
    if(firstAnswer2 == 1) {
        std::cout << "호감도 -5" << std::endl;
        SecondQuestion();
    }
    else if(firstAnswer2 == 2) {
        std::cout << "호감도 +10" << std::endl;
        SecondQuestion();
    }
    else
        std::cout << "[Error] input Error" << std::endl;
}

void UserInterface::SecondQuestion() {
    std::cout << "말 편하게 할까요?" << std::endl;
    std::cout << "1. 아뇨, 전 이게 편해요." << "\n" << "2. 그럴까? 푸앙이도 말 편하게 해!" << std::endl;
    int secondAnswer;
    std::cout << "Your Answer: ";
    std::cin >> secondAnswer;
}





