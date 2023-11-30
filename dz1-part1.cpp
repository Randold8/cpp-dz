#include <iostream>
#include <cmath> // Для функции sqrt() и pow(), чтобы вычислить гипотенузу.
#include <cstdlib> // Для rand() и srand()
#include <ctime>   // Для time()

using namespace std;

int main() {
    double a, r, b;
       // Задача 5: Выполнить переход от декартовых координат к полярным.
    double x, y, phi;

    cout << "\nВведите декартовы координаты X и Y для перевода в полярные:";
    cout << "\nX: ";
    cin >> x;

    cout << "Y: ";
    cin >> y;

    r = hypot(x, y); // вычисление радиус-вектора
    phi = atan2(y, x); // вычисление угла в радианах

    cout << "Полярные координаты (R, φ): "
         << "(" << r << ", " << phi << ")"<< endl;

   // Задача 6: Выполнить переход от полярных координат к декартовым.
   double radius, angle;

   cout << "\nВведите полярные координаты R и φ (угол в радианах) для перевода в декартовые:"
        <<"\nR: ";
   cin >> radius;

   cout <<"φ (в радианах): ";
   cin >> angle;


   x = radius * cos(angle);
   y = radius * sin(angle);

   cout <<"Декартовы координаты (X,Y): "
        <<"("<< x<<", "<<y<<")"<<endl;

       // Задача 7: Найти корни квадратного уравнения.
    double c; // Коэффициенты квадратного уравнения.

    cout << "\nВведите коэффициенты квадратного уравнения a, b и c:";
    cout << "\na: ";
    cin >> a;

    cout << "b: ";
    cin >> b;

    cout << "c: ";
    cin >> c;

   double d = b * b - 4 * a * c; // Вычисление дискриминанта.

   if (d > 0) {
       double root1 = (-b + sqrt(d)) / (2 * a);
       double root2 = (-b - sqrt(d)) / (2 * a);
       cout <<"Уравнение имеет два действительных корня: "<< root1 <<" и "<< root2<<endl;
   } else if (d == 0) {
       double root = -b / (2 * a);
       cout <<"Уравнение имеет один действительный корень: "<< root<<endl;
   } else {
       cout <<"Корни уравнения являются комплексными числами и не могут быть найдены в рамках данной задачи."<<endl;
   }

    // Задача 8: Найти медианы треугольника сторонами которого
    // являются медианы исходного треугольника.
    double sideA, sideB, sideC; // Стороны исходного треугольника.

    cout << "\nВведите стороны треугольника а, b и с:"
         << "\na: ";
    cin >> sideA;

    cout << "b: ";
    cin >> sideB;

    cout << "c: ";
    cin >> sideC;

    double ma = 0.5 * sqrt(2*sideB*sideB + 2*sideC*sideC - sideA*sideA); // Медиана к стороне а.
    double mb = 0.5 * sqrt(2*sideA*sideA + 2*sideC*sideC - sideB*sideB); // Медиана к стороне b.
    double mc = 0.5 * sqrt(2*sideA*sideA + 2*sideB*sideB - sideC*sideC); // Медиана к стороне с.

    cout<<"Медианы нового трегульника составленные из медиан первичного:"
        <<"\nm(a): "<< ma
        <<"\nm(b): "<< mb
        <<"\nm(c): "<< mc
        <<endl;

    //Задача 13
        srand(time(0)); // Инициализация генератора случайных чисел.

    int number1 = rand() % 9 + 1; // Случайное число от 1 до 9
    int number2 = rand() % 9 + 1; // Случайное число от 1 до 9

    std::cout << "Сколько будет " << number1 << " * " << number2 << "? ";

    int answer;
    std::cin >> answer;

    if (answer == number1 * number2) {
        std::cout << "Правильно!" << std::endl;
    } else {
        std::cout << "Неправильно. Правильный ответ: " << number1 * number2 << "." << std::endl;
    }

    //Задача 21
    std::cout << "char: " << sizeof(char) << " байт" << std::endl;
    std::cout << "int: " << sizeof(int) << " байта" << std::endl;
    std::cout << "short int: " << sizeof(short int) << " байта" << std::endl;
    std::cout << "long int: "  << sizeof(long int)  <<" байтов" << std::endl;
    std::cout << "float: "<<sizeof(float)<<      " байта"<<std::endl;
    std :: cout<<"double:"<<sizeof(double)<<    "байтов"<<std :: endl;
    std :: cout<<"bool:"<<sizeof(bool)<<        "байт"<<std :: endl;

    return 0;
}