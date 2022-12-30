//
// Created by Rocket on 2022/12/30.
//

#include "User.h"

User::User(std::string userName_) { userName = userName_; }

std::string User::GetUserName() {
    return userName;
}

