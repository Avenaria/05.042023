/*Создать абстрактный базовый класс Employer(служащий) с
чисто виртуальной функцией Print().Создайте три производных
класса : President, Manager, Worker.Переопределите функцию
Print() для вывода информации, соответствующей каждому типу
служащего*/
#include <iostream>
#include"Employer.h"
using  namespace std;

int main()
{
  /*  Employer* R;
    President f;
    R = &f;
    R->Print();
    Manager m;
    R = &m;
    R->Print();*/
    /// исключительные ситуэйшен 
    //int a,b;
    //
    //try {//поймать критичискую ошибку, в части кода где может произойти ошибка 
    //    //блок кода
    //    cin >> a >> b;
    //   if(b==0) throw b;// в момент возникновения, генерирует исключение и выводит программу из критической ситуации
    //   cout << a / b;
    //}
    //catch ( int s/*тип исключения имя*/) {
    //    //блок анализа 
    //    cout << " Error"<<s;
    //}
        //
    try {
        int* ptr = nullptr;
        int size; 
        cin >> size;
        if (size < 1 || size>100) throw"\n Eror size\n ";
        ptr = new int[size];
        if (!ptr) throw "\n Error  memori ";
        int a;
        cin >> a;
        if (a == 0)throw "\n Error a";
    }
    catch (int s) {
        cout << "Eror a " << s;
    }
    catch (const char* S) {
        cout << S;
    }
    catch (...) { cout << " Error"; }//универсальный 
}


