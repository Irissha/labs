#include <iostream>
#include <string> //работа со строками
#include <vector> //бесконечный массив


using namespace std;

int main()
{
    string mas, g, prom;
    bool running = true;
    char p[255];
    int words = 0, b = 0, min = 1000, max = 0, min_pos, max_pos;
    vector <string> word;


    getline(cin, mas, '.'); // Получаем строку mas в типе string (gets(s) не работает в новой версии c++ из-за проблем с безопасностью)

    for (int i = 0; i < 255; i++) { // цикл на разделение слов по пробелу для последующей работы с ними
        if (mas[i] != ' ') {
            g.push_back(mas[i]);
        }


        else {
            word.push_back(g);
            g.clear();           //очищение строки
            words++;    //кол-во слов 

        }
        if (mas[i + 1] == NULL) {
            word.push_back(g);      //слово заносим в вектор
            g.clear();
            words++;
            goto next_l;
        }

    }



next_l:
    cout << "\n";
    for (int i = 0; i < words; i++) { // цикл поиска наименьшего и наибольшего слова
        prom = word[i];

        if (prom.length() < min) {
            min = prom.length();
            min_pos = i;
        }
        else if (prom.length() > max) {
            max = prom.length();
            max_pos = i;
        }
        prom.clear();
    }
    cout << word[max_pos] << "- it's longest word! \n";
    cout << word[min_pos] << "- it's smallest word! \n";


    return 0;
}