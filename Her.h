//
// Created by Rocket on 2022/12/30.
//

#ifndef SAMANTHA_HER_H
#define SAMANTHA_HER_H
#include "iostream"

// 히로인 답변 클래스
class Her {
public:
    Her();
    int LikingUpDown(int likeAmount);
    void ShowLiking();
private:
    int liking;

};


#endif //SAMANTHA_HER_H
