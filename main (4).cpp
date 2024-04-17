#include <iostream>
#include <cmath>

// Завдання на введення-виведення даних
void task1() {
    double a, b, c, P;

    std::cout << "Enter the lengths of the two legs of the right triangle: ";
    std::cin >> a >> b;

    c = sqrt(a * a + b * b);
    P = a + b + c;

    std::cout << "Hypotenuse c = " << c << std::endl;
    std::cout << "Perimeter P = " << P << std::endl;
}

// Завдання на обчислення булевих виразів
void task2() {
    int a, b, c;

    std::cout << "Enter three integers: ";
    std::cin >> a >> b >> c;

    if ((a == -b) || (a == -c) || (b == -c)) {
        std::cout << "There is at least one pair of mutually opposite numbers." << std::endl;
    } else {
        std::cout << "There is no pair of mutually opposite numbers." << std::endl;
    }
}

// Передача структур в якості параметрів функцій
struct TTime {
    int hours;
    int minutes;
    int seconds;
};

int CheckTime(TTime time) {
    if (time.hours < 1 || time.hours > 12 || time.minutes < 0 || time.minutes > 59 || time.seconds < 0 || time.seconds > 59) {
        return 1;
    }
    return 0;
}

void task3() {
    TTime time1 = {12, 30, 45};
    TTime time2 = {13, 20, 10};
    TTime time3 = {10, 60, 5};
    TTime time4 = {8, 45, -5};
    TTime time5 = {15, 20, 30};

    std::cout << "Time 1: " << CheckTime(time1) << std::endl;
    std::cout << "Time 2: " << CheckTime(time2) << std::endl;
    std::cout << "Time 3: " << CheckTime(time3) << std::endl;
    std::cout << "Time 4: " << CheckTime(time4) << std::endl;
    std::cout << "Time 5: " << CheckTime(time5) << std::endl;
}

int main() {
    // Вибір завдання для виконання
    int choice;
    std::cout << "Choose a task to perform (1 - Right triangle, 2 - Opposite numbers, 3 - Time): ";
    std::cin >> choice;

    // Виконання вибраного завдання
    switch (choice) {
        case 1:
            task1();
            break;
        case 2:
            task2();
            break;
        case 3:
            task3();
            break;
        default:
            std::cout << "Invalid choice. Please choose a valid task." << std::endl;
            break;
    }

    return 0;
}