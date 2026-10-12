#include "main.h"

pros::Motor m1(1);
pros::Motor m2(2);

void initialize() {
    m1.move(127);
    m2.move(127);
}
