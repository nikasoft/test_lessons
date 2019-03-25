// этот пример проще будет решить в одном файле
// его необходимо решать путем создания обьектов разного типа
// если посмотреть ниже на класс Cacao
// этот подоазумевет порцию какао
#include <iostream>
using namespace std;

class Cacao
{
public:
    int gramms; // вес порции в граммах
    Cacao(int g)
    {
        gramms = g;
    }
    void info(){
        cout << "\"cacao " << gramms << "gr\"" << endl;// вывести в формате "cacao 100gr"
    }
};
// класс порции Молока
class Milk
{
public:
    int gramms; // вес порции в граммах
    Milk(int g)
    {
        gramms = g;
    }
    void info()
    {
        cout << "\"milk " << gramms << "gr\"" << endl;// вывести в формате "milk 100gr"
    }
};

// класс порции Какао с Молоком -> Chocolate
class Chocolate
{
public:
    int gramms; // вес порции в граммах
    Chocolate(int g)
    {
        gramms = g;
    }
    void info()
    {
        cout << "\"chocolate " << gramms << "gr\"" << endl;// вывести в формате "chocolate 100gr"
    }

    Cacao operator+ (Cacao other)
        {
        return Cacao(gramms + other.gramms);
        }

    Milk operator+ (Milk other)
        {
            return Milk(gramms + other.gramms);
        }
        
};



int main()
{
    // Допишите логику классов так чтобы можно было сделать
    Milk milk(200); // 200 gr молока
    Cacao cacao(50); // 50 gr какао
    milk.info();
    cacao.info();

    // потом перезагрузить оператор + для Cacao и Milk
    // так чтобы можно было получить Chocolate след. путем
    Chocolate chocolate(0);
    chocolate = milk.gramms + cacao.gramms;
    // или
    chocolate = cacao.gramms + milk.gramms;
    // а при выводе чтобы он выдал
    chocolate.info(); // -> "chocalate 250gr"

}

