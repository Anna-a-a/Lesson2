#include <iostream>

using namespace std;

int taskTwelve(){
    float x;
    cout<<"Введите площадь в квадратных метрах ";
    cin>>x;
    int y;
    cout<<"Введите количество копеек на один квадратный дециметр ";
    cin>>y;
    cout<<"Общее количество равно "<<x * 10 * y / 100;
    return 0;
}

int taskEleven(){
    int x;
    cout<<"Введите количество слов в минуту для первой дамы ";
    cin>>x;
    int y;
    cout<<"Введите количество слов в минуту для второй дамы ";
    cin>>y;
    int z;
    cout<<"Введите время их разговора в часах ";
    cin>>z;
    cout<<"разговорчивые тетеньки произнесли "<<z * 60 * x + z * 60 * y<<" слов";
    return 0;
}

int taskTen(){
    float s;
    cout<<"Введите расстояние между двумя поселками в км ";
    cin>>s;
    float v;
    cout<<"Введите скорость тетенек ";
    cin>>v;
    cout<<"разговорчивые тетеньки проговорили "<<3 - ((s/2)/v)<<" ч";
    return 0;
}

int taskNine(){
    float v1;
    cout<<"Введите скорость автомобилиста в км/ч ";
    cin>>v1;
    float v2;
    cout<<"Введите скорость велосипедиста в км/ч ";
    cin>>v2;
    float x;
    cout<<"Введите время автомобилиста в часах ";
    cin>>x;
    float y;
    cout<<"Введите время велосипедиста в часах ";
    cin>>y;
    cout<<"Расстояние между деревнями А и В равно "<<v1 * x + v2 * y<<" км";
    return 0;
}

int taskEight(){
    int A;
    cout<<"Введите A";
    cin>>A;
    int B;
    cout<<"Введите B";
    cin>>B;
    int C;
    cout<<"Введите C";
    cin>>C;
    int D;
    cout<<"Введите D";
    cin>>D;
    int E;
    cout<<"Введите E";
    cin>>E;
    return 0;
}

int taskSeven(){
    int y;
    cout<<"Введите y";
    cin>>y;
    int x;
    cout<<"Введите x";
    cin>>x;
    cout<<"Апельсинов было "<<y + y - x + 2 * (y + y - x);
}

int main() {
    //taskTwelve();
    //taskEleven();
    //taskTen();
    //taskNine();
    //taskEight();
    taskSeven();
}
