/*
*   lesson1.2.cpp
*
*   Onishchenko Evgeniy
*
*
*/

#include <iostream>
using namespace std;

// Task 2
enum GameElements 
{
    Empty,
    X,
    O
};

// Task 5 union
union MyUnion
{
    int iVar;
    float fVar;
    char cVar;
};
// Task 5 struct
struct MyStruct
{
    unsigned int isInt : 1;
    unsigned int isFloat : 1;
    unsigned int isChar : 1;
    MyUnion uni;
};

// Task 4 enum
enum Players
{
    PlayerOne,
    PlayerTwo,
    None 
};
// Task 4 struct
struct FieldForGame
{
    GameElements elements;
    int field[3][3];
    Players whosTurn;
    Players winner; 
};

int main()
{
    // Task 1
    {
        short a = 0;
        int b = 0;
        long long c = 0;
        char d = '0';
        bool bFlag = true;
        float e = 0.0f;
        double f = 0.0;
    }



    // Task 3
    const int size_arr = 5;
    GameElements elements[size_arr] = { Empty,Empty,Empty,Empty,Empty };
    
    for (size_t i = 0; i < size_arr; i++)
    {
        cout << elements[i] << endl;
    }

    // Task 5
    // При помощи функции можно будет элегантней оформить
    MyStruct st = {0, 0, 0, 0};
    st.uni.fVar = 100.1F;
    st.isInt = 0;
    st.isFloat = 1;
    st.isChar = 0;
    if (st.isInt)
    {
        cout << st.uni.iVar << endl;
    }
    else if(st.isChar)
    {
        cout << st.uni.cVar << endl;
    }
    else if(st.isFloat)
    {
        cout << st.uni.fVar << endl;
    }

}

