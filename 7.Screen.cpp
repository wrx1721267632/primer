/*************************************************************************
	> File Name: 7.Screen.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年10月11日 星期日 21时57分24秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Screen {
    public:
        typedef std::string::size_type pos;
        Screen() = default;
        Screen(pos ht, pos wd, char c):height(ht), width(wd), contents(ht * wd,c){}
        char get()const {return contents[cursor];}
        char get(pos ht, pos wd) const;
        Screen &move(pos r, pos c);
    private:
        pos cursor = 0;
        pos height = 0, width = 0;
        std::string contents;
};

Screen &Screen::move(pos r, pos c)
{
    pos row = r * width;
    cursor = row + c;
    return *this;
}

char Screen::get(pos r, pos c)const
{
    pos row = r * width;
    return contents[row + c];
}

int main()
{
    Screen myscreen(10,10,'a');
    char ch = myscreen.get();
    char sh = myscreen.get(1,1);

    cout << "ch: " << ch <<endl;
    cout << "sh: " << sh <<endl;

    return 0;
}
