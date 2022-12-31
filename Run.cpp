//
// Created by Rocket on 2022/12/30.
//

#include "Run.h"

int Run::StartGame() {
    UserInterface UI;
    UI.Greeting();
    int option;
    std::cin >> option;
    if(option == 0) {
        std::cout << "새로운 게임을 시작합니다..." << std::endl;
        Story newStory;
        newStory.Intro();
        UI.Introduce();
        User user1(UI.UserInformation());
        int firstAnswer;
        std::cout << "0. 아 안녕.. 반가워!" << "\n" << "1. 오, 반가워 나는 소프트웨어학부 " << user1.GetUserName() << "(이)라고 해!" << std::endl;
        std::cout << ">>" << std::endl;
        std::cout << "당신의 대답은?" << std::endl;
        std::cin >> firstAnswer;
        Her her;
        if(firstAnswer == 0) {
            her.ShowLiking();
            her.LikingUpDown(-5);
            her.ShowLiking();
        }
        else if(firstAnswer == 1) {
            std::cout << "호감도 +10" << std::endl;
            her.LikingUpDown(10);
            her.ShowLiking();
        }
        else
            std::cout << "[Error] input Error" << std::endl;
        UI.SecondQuestion();
    }
    else if(option == 1) {
        std::cout << "이전의 게임을 계속합니다..." << std::endl;
    }
    else if(option == 2) {
        std::cout << "게임 설명: ..." << std::endl;
        UI.PlayDescription();

    }
    else
        std::cout << "[Error] invalid input" << std::endl;
    return 0;
}