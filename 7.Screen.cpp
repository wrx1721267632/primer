/*************************************************************************
	> File Name: 7.Screen.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年10月11日 星期日 21时57分24秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Screen;

class Window_mgr
{
    public:
        using ScreenIndex = std::vector<Screen>::size_type;
        void clear(ScreenIndex);
    private:
       std::vector<Screen> screens{Screen(24,80,' ')};
};

class Screen {
    friend void Window_mgr::clear(ScreenIndex);
    public:
        typedef std::string::size_type pos;
        Screen() = default;
        Screen(pos ht, pos wd, char c):height(ht), width(wd), contents(ht * wd,c){}
        char get()const {return contents[cursor];}
        char get(pos ht, pos wd) const;
        Screen &move(pos r, pos c);
        Screen &set(char);
        Screen &set(pos, pos, char);
        Screen &display(std::ostream &os){os << contents; return *this;}
    private:
        pos cursor = 0;
        pos height = 0, width = 0;
        std::string contents;
};

void Window_mgr::clear(ScreenIndex i)
{
    Screen &s = screens[i];

class Window_mgr;
    s.contents = string(s.height * s.width, ' ');
}

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

Screen &Screen::set(char c)
{
    contents[cursor] = c;
    return *this;
}

Screen &Screen::set(pos r, pos c, char ch)
{
    contents [r * width + c] = ch;
    return *this;
}

int main()
{
    Screen myscreen(5,5,'X');
    /*char ch = myscreen.get();
    char sh = myscreen.get(1,1);

    cout << "ch: " << ch <<endl;
    cout << "sh: " << sh <<endl;*/
    myscreen.move(4,0).set('#').display(cout);
    cout << "\n";
    myscreen.display(cout);
    cout << "\n";

    return 0;
}
