//
// Created by Rocket on 2022/12/30.
//

#include "Her.h"

Her::Her(): liking(0) {}

int Her::LikingUpDown(int likeAmount) {
    liking += likeAmount;
    return liking;
}

void Her::ShowLiking() {
    std::cout << "현재 호감도: " << liking << std::endl;
}
