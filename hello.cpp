#include <iostream>
using namespace std;
class Point {
private:
    int x;
    int y;
public:
    Point() { this->x = 0; this->y=0; }
    const inline int getX() { return this->x; }
    const inline int getY() { return this->y; }
    inline void setX(int x) { this->x = x; }
    inline void setY(int y) { this->y = y; }
};

int main()
{
    Point P;
    P.setX(1);
    P.setY(2);
    cout << P.getX()<<endl;
    cout << P.getY()<<endl;
    return 0;
 }
