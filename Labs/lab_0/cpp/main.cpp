#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>


using namespace std;

int main(int argc, char** argv)
{

    vector<int> v; // в этот массив запишем все, что считаем из файла
    int n;
    int i = 0;
    ifstream myfile("D:\\LabS\\Labs\\lab_0\\cpp\\data.txt"); // из этого файла считаываем информацю 
    for (string a; getline(myfile, a); i++)  // стринг - строка, куда будем записывать; гетлайн пробегается по всем числам и записывает все в а
    {
        n = atoi(a.c_str()); // меняется стринг в инт, нам нужны числа
        v.push_back(n); // заносим N в массив
        sort(v.begin(), v.end()); // сортировка массива по возрастанию 
        if(n > 0 && n < 32767) // ограничения по числам
        {
            cout <<"Message "<< v[0] << "-" << v[i]; // выводит самое маленькое и самое большое
            int b = 0;
            for(int k = v[0]; k <= v[i]; k++) // пробегаем от самого маленького до самого большого
            {
                if(find(v.begin(), v.end(),k) == v.end()) // проверка наличия элемента K
                {
                   b++;
                   if(b == 1)
                   {
                     cout<< " not enough packages";
                   }
                     cout<<" " << k;
                }
            }
            if(b == 0)
            {
                cout  << " got it completly" << endl; 
            }
           cout<<endl;
        }
     }

    return 0;
}

