//
//  main.cpp
//  1000-7
//
//  Created by Даниил Кузнецов on 26.12.2022.
//

#include <iostream>
#include <random>
#include <unistd.h>

using namespace std;

int main()
{
srand(time(0));
int random = rand();




setlocale(LC_ALL, "Russian");
for (int i = 1000; i > 6; i = i - 7)
{
    cout << i << " - 7 = " << (i - 7) << '\n';
    usleep(100000);
};


cout << "Я гуль" << '\n';

if (random % 2 == 0)
{
cout << "Гуль советует вам проебать еще одну катку" << '\n';
}

else

{
cout << "Гуль советует вам пойти отдохнуть" << '\n';
}

cout << "Made by DanilaBaxBax" << '\n';
system("pause");

}
