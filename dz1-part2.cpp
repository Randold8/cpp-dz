
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
    cout << "������� �������� �������: ";
    cin >> a >> b;
    cout << "������� ����� " << 0.5 * a * b << endl;
    c = sqrt(a * a + b * b);
    cout << "���������� ����� " << c;*/


    //task 4
    /*int n, digit, sum = 0;
    cout << "������� ���������� �������������� �����: ";
    cin >> n;
    while (n > 0) {
        digit = n % 10;
        sum += digit;
        n /= 10;
    }
    cout << "���������� �����: " << sum;*/


    //task 10
    /*float a, b, c;
    cout << "������� �������� ������ ������������: ";
    cin >> a >> b >> c;
    if ((a < (b + c)) && (b < (a + c)) && (c < (a + b))){
        if (a == b || b == c || a == c)
            cout << "����������� ��������������";
        else
            cout << "����������� �� ��������������";
    }
    else
        cout << "������ ������������ �� ����������";*/


    //task 15
    /*int number_month;
    std::cout << "������� ����� ������: ";
    std::cin >> number_month;
    if (number_month >= 1 && number_month <= 12){
        switch(number_month)
        {
            case 1:
                std::cout << "�����: ������" << '\n' << "����� ����: ����";
                break;
            case 2:
                std::cout << "�����: �������" << '\n' << "����� ����: ����";
                break;
            case 3:
                std::cout << "�����: ����" << '\n' << "����� ����: �����";
                break;
            case 4:
                std::cout << "�����: ������" << '\n' << "����� ����: �����";
                break;
            case 5:
                std::cout << "�����: ���" << '\n' << "����� ����: �����";
                break;
            case 6:
                std::cout << "�����: ����" << '\n' << "����� ����: ����";
                break;
            case 7:
                std::cout << "�����: ����" << '\n' << "����� ����: ����";
                break;
            case 8:
                std::cout << "�����: ������" << '\n' << "����� ����: ����";
                break;
            case 9:
                std::cout << "�����: ��������" << '\n' << "����� ����: �����";
                break;
            case 10:
                std::cout << "�����: �������" << '\n' << "����� ����: �����";
                break;
            case 11:
                std::cout << "�����: ������" << '\n' << "����� ����: �����";
                break;
            case 12:
                std::cout << "�����: �������" << '\n' << "����� ����: ����";
                break;
        }
    }
    else
        std::cout << "������ � ����� ������� �� ����������"; */

    //task 16
    /*int n;
    std::cout << "������� ������������ �����: ";
    std::cin >> n;
    int left_side = n / 1000;
    int right_side = n % 1000;
    if (sumOfdigits(left_side) == sumOfdigits(right_side))
        std::cout << "�����������! �� ����� ���������� �����!";
    else
        std::cout << "���! ��� �� ���������� �����."; */

    //task 17
    /*int number;
    std::cout << "������� ����� �� 1 �� 99: ";
    std::cin >> number;
    if (number < 1 || number > 99) {
        std::cout << "��������� ����� �� ������ � �������� ��������" << std::endl;
    } else {
        if (number % 10 == 1 && number != 11)
            std::cout << number << " �������" << std::endl;
        else if ((number % 10 >= 2 && number % 10 <= 4) && (number != 12 && number != 13 && number != 14))
            std::cout << number << " �������" << std::endl;
        else
            std::cout << number << " ������" << std::endl; }*/

    return 0;
}
