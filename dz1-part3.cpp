#include <iostream>

using namespace std;

int main()
{
    //Задача 11
    float check =0;
    std::cout<<"введите сумму чека:"<< std::endl;
    std::cin>>check;
    if(check>1000){
        std::cout<<"стоимость покупки составит:"<<check*0.9 << std::endl;
    }else{
        std::cout<<"стоимость покупки составит:"<<check<<std::endl;
    }
    //Задача 12
        int height=0;
    int weight=0;
    
    std::cout<<"введите рост"<<std::endl;
    std::cin>>height;
    std::cout<<"введите вес"<<std::endl;
    std::cin>>weight;
    
    if(height - 100==weight){
        std::cout<<"у вас идеальный вес!"<<std::endl;
    }
    if(height - 100<weight){
        std::cout<<"вам надо набрать "<<-(height - 100-weight)<< " килограмм"<<std::endl;
    }
    if(height - 100>weight){
        std::cout<<"вам надо скинуть "<<height- weight - 100<< " килограмм"<<std::endl;
    }
    //Задача 14
    int length=0;
    int day=0;
    float cost=0;
    int sum=0;
    
    std::cout<<"введите длительность переговоров"<<std::endl;
    std::cin>>length;
    
    std::cout<<"введите день начала переговоров"<<std::endl;
    std::cin>>day;
    
    std::cout<<"введите стоимость дня переговоров"<<std::endl;
    std::cin>>cost;
    
    while (length>0){
        if (day==6 or day==7){
            sum+=cost*0.8;
        }else{
            sum+=cost;
        }
        length-=1;
        if (day==7){
            day=1;
        }else{
            day+=1;
        }
    }
    std::cout<<"Итого выйдет в: "<<sum<<std::endl;
    //Задача 18
     int chislo=0;
    int firstlet=0;
    int secondlet=0;
    int thirdlet=0;
    int fourthlet=0;
    
    std:cout<<"Введите натуральное четырехзначное число"<<std::endl;
    std::cin>>chislo;
    
    fourthlet=chislo%10;
    thirdlet=chislo/10%10;
    secondlet=chislo/100%10;
    firstlet=chislo/1000;
    
    if(firstlet==fourthlet and secondlet==thirdlet){
        std::cout<<"Это палиндром!"<<std::endl;
    }else{
        std::cout<<"Это не палиндром!"<<std::endl;
    }
    //Задача 19
    chislo=0;
    firstlet=0;
    secondlet=0;
    thirdlet=0;
    int b=0;
    
    std::cout<<"Введите натуральное трехзначное число"<<std::endl;
    std::cin>>chislo;
    
    thirdlet=chislo%10;
    secondlet=chislo/10%10;
    firstlet=chislo/100;
    
    std::cout<<"введите b"<<std::endl;
    std::cin>>b;
    
    if(firstlet*secondlet*thirdlet>b){
        std::cout<<"19.1 Да, больше b"<<std::endl;
    }else{
        std::cout<<"19.1 Нет, меньше b"<<std::endl;
    }
    
    if(firstlet+secondlet+thirdlet%7==0){
        std::cout<<"19.2 Да, кратна семи"<<std::endl;
    }else{
        std::cout<<"19.2 Нет, не кратна семи"<<std::endl;
    }
    //Задача 20
    int a=0;
    b=0;
    int c=0;
    int d=0;
    
    std::cout<<"введите стороны прямоугольников через пробел"<<std::endl;
    std::cin>>a>>b>>c>>d;
    
    if((a<c and b<d) or (a<d and b<c)){
        std::cout<<"можно"<<std::endl;
    }else{
        std::cout<<"нельзя"<<std::endl;
    }
    //Задача 9
        int k=0;
    std::cout<<"Введите секунду:"<<std::endl;
    std::cin >> k;
    std::cout<<"Количество целых минут:" << k/60<<std::endl;
    std::cout<<"Количество целых часов:"<< k/3600<<std::endl;
}