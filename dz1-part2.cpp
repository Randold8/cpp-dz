
#include <iostream>

#include <cmath>

int sumOfdigits(int x) {
    int sum = 0;
    while (x > 0){
        sum += x % 10;
        x /= 10;
    }
    return sum;
}



int main()
{
    setlocale(LC_ALL, "Russian");

    // task 1
    /*float b, b1, h;
    cout << "Enter base lengths: ";
    cin >> b >> b1;
    cout << "Enter the height: ";
    cin >> h;
    cout << ((b + b1) / 2) * h << endl;*/

    //task 2
    /*float r;
    float pi = 3.14;
    cout << "r is equal: ";
    cin >> r;
    cout << "Circle length is " << 2 * pi * r << '\n' << "Area of the circle is " << 2 * pi * r * r;*/

    //task 3
    /*float a, b, c;
    cout << "¬ведите значени€ катетов: ";
    cin >> a >> b;
    cout << "ѕлощадь равна " << 0.5 * a * b << endl;
    c = sqrt(a * a + b * b);
    cout << "√ипотенуза равна " << c;*/


    //task 4
    /*int n, digit, sum = 0;
    cout << "¬ведите дес€тичное четырехзначное число: ";
    cin >> n;
    while (n > 0) {
        digit = n % 10;
        sum += digit;
        n /= 10;
    }
    cout << "ѕолученна€ сумма: " << sum;*/


    //task 10
    /*float a, b, c;
    cout << "¬ведите значени€ сторон треугольника: ";
    cin >> a >> b >> c;
    if ((a < (b + c)) && (b < (a + c)) && (c < (a + b))){
        if (a == b || b == c || a == c)
            cout << "“реугольник равнобедренный";
        else
            cout << "“реугольник не равнобедренный";
    }
    else
        cout << "“акого треугольника не существует";*/


    //task 15
    /*int number_month;
    std::cout << "¬ведите номер мес€ца: ";
    std::cin >> number_month;
    if (number_month >= 1 && number_month <= 12){
        switch(number_month)
        {
            case 1:
                std::cout << "ћес€ц: €нварь" << '\n' << "¬рем€ года: зима";
                break;
            case 2:
                std::cout << "ћес€ц: февраль" << '\n' << "¬рем€ года: зима";
                break;
            case 3:
                std::cout << "ћес€ц: март" << '\n' << "¬рем€ года: весна";
                break;
            case 4:
                std::cout << "ћес€ц: апрель" << '\n' << "¬рем€ года: весна";
                break;
            case 5:
                std::cout << "ћес€ц: май" << '\n' << "¬рем€ года: весна";
                break;
            case 6:
                std::cout << "ћес€ц: июнь" << '\n' << "¬рем€ года: лето";
                break;
            case 7:
                std::cout << "ћес€ц: июль" << '\n' << "¬рем€ года: лето";
                break;
            case 8:
                std::cout << "ћес€ц: август" << '\n' << "¬рем€ года: лето";
                break;
            case 9:
                std::cout << "ћес€ц: сент€брь" << '\n' << "¬рем€ года: осень";
                break;
            case 10:
                std::cout << "ћес€ц: окт€брь" << '\n' << "¬рем€ года: осень";
                break;
            case 11:
                std::cout << "ћес€ц: но€брь" << '\n' << "¬рем€ года: осень";
                break;
            case 12:
                std::cout << "ћес€ц: декабрь" << '\n' << "¬рем€ года: зима";
                break;
        }
    }
    else
        std::cout << "ћес€ца с таким номером не существует"; */

    //task 16
    /*int n;
    std::cout << "¬ведите шестизначное число: ";
    std::cin >> n;
    int left_side = n / 1000;
    int right_side = n % 1000;
    if (sumOfdigits(left_side) == sumOfdigits(right_side))
        std::cout << "ѕоздравл€ем! ¬ы ввели счастливое число!";
    else
        std::cout << "”вы! Ёто не счастливое число."; */

    //task 17
    /*int number;
    std::cout << "¬ведите число от 1 до 99: ";
    std::cin >> number;
    if (number < 1 || number > 99) {
        std::cout << "¬веденное число не входит в заданный диапазон" << std::endl;
    } else {
        if (number % 10 == 1 && number != 11)
            std::cout << number << " копейка" << std::endl;
        else if ((number % 10 >= 2 && number % 10 <= 4) && (number != 12 && number != 13 && number != 14))
            std::cout << number << " копейки" << std::endl;
        else
            std::cout << number << " копеек" << std::endl; }*/

    return 0;
}
