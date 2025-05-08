#include <iostream>
#include <string>
#include <sstream>

//using namespace std

// struct movies_t {
//     std::string title;
//     int date;
// };

// struct friend_t
// {
//     std::string name;
//     int age;
//     movies_t favorite_movie;
// };

// class Ctest {
//     private:
//     int _x;
//     int _y;
//     public:
//     Ctest();
//     Ctest(const Ctest& other);
//     Ctest& operator=(const Ctest& rhs);
//     Ctest(int x, int y);
//     ~Ctest();
//     void set_value(int x, int y);
//     void get_value(void);
//     int area (void) {return (_x * _y);}
// };

// Ctest::Ctest(){

// }

// Ctest::Ctest(const Ctest&  other){
//     this->_x = other._x; this->_y = other._y;
// }

// Ctest::Ctest(int x, int y) : _x(x), _y(y){

// }

// Ctest& Ctest::operator=(const Ctest& rhs){
//     if (this != &rhs){
//         this->_x = rhs._x;
//         this->_y = rhs._y;
//     }
//     return *this;
// }

// Ctest::~Ctest(){
//     std::cout << "Destroctor caleld bitch! \n";
// }

// void Ctest::set_value(int x, int y){
//     this->_x = x;
//     this->_y = y;
// }

// void Ctest::get_value(){
//     std::cout << this->_x << std::endl;
//     std::cout << this->_y << std::endl;
// }

// class Vect{
//     private:
//         int _x;
//         int _y;
//     public:
//     Vect();
//     Vect(int x, int y);
//     Vect(const Vect& other);
//     Vect& operator=(const Vect& rhs);
//     ~Vect();
//     Vect operator+(Vect);
//     void get_result(void);
// };

class Square;
class Polygone;

class Polygone{
    private:
        int  _height;
        int _width;
    public:
    Polygone();
    ~Polygone();
    void setvalue(int a, int b);
    std::string getstr() const;
    virtual int calculate()=0;
    void print_height(){
        std::cout << this->_height << " and " << this->_width << std::endl;
    }
};

Polygone::Polygone(){}
Polygone::~Polygone(){}

void Polygone::setvalue(int a, int b){
    _height = a; _width = b;
}
class Square : public Polygone{
    public:
    int calculate(){
        return (9);
    }
    // Square();
    // ~Square();

};

std::string Polygone::getstr(void) const {
    std::string res;
    std::ostringstream int1;
    std::ostringstream int2;
    int1 << _height;
    int2 << _width;
    res = "{" + int1.str() + "," + int2.str() + "}";
    return res;
}

std::ostream & operator<<(std::ostream& out, const Polygone& obj){
    out << obj.getstr();
    return out;
}

// Vect::Vect(){};
// Vect::Vect(int x, int y) : _x(x), _y(y){}
// Vect::Vect(const Vect& other){
//     _x = other._x; _y = other._y;
// }
// Vect& Vect::operator=(const Vect& rhs){
//     if (this != &rhs){
//         _x = rhs._x;
//         _y = rhs._y;
//     }
//     return *this;
// }
// Vect::~Vect(){}

// Vect Vect::operator+(const Vect param){
//     Vect temp(_x + param._x, _y + param._y);
//     return temp;
// }

// void Vect::get_result(void){
//     std::cout << "{" << _x << "," << _y << "}" << "\n";
// }


int main(void){

    Square sqr;
    Polygone *psquare;
    psquare = &sqr;
    psquare->setvalue(2, 3);
    psquare->print_height();
    //std::cout << poly.calculate() << std::endl;


    // Vect vec1(5, 5);
    // Vect vec2(5, 5);
    // Vect vec3;

    // //vec3 = vec1 + vec2;
    // vec3 = vec1.operator+(vec2);
    // vec3.get_result();

    // Ctest *ptest;
    // Ctest test(2, 9);
    // ptest = &test;
    // ptest->set_value(11, 55);
    // //Ctest test2(test);
    // ptest[0].get_value();
    // Ctest test2 = *ptest;
    // //test2.set_value(2, 9);
    // test2.get_value();
    // std::cout << test2.area() << std::endl;

    // friend_t avdul;
    // friend_t *pavdul;
    // pavdul = &avdul;

    // pavdul->name = "Avdul";
    // pavdul->age = 29;
    // pavdul->favorite_movie.title = "Naruto";
    // pavdul->favorite_movie.date = 2004;

    // movies_t amovie;
    // movies_t *pmovie;
    // pmovie = &amovie;

    // std::string str;

    // std::cout << "Enter a movie name \n";
    // getline(std::cin, pmovie->title);
    // std::cout << "Enter the date of production \n";
    // getline(std::cin, str);
    // (std::stringstream) str >> pmovie->date;
    
    // std::cout << "My friend: \n";
    // std::cout << pavdul->name << std::endl;
    // std::cout << pavdul->age << std::endl;
    // std::cout << pavdul->favorite_movie.title << std::endl;
    // std::cout << pavdul->favorite_movie.date << std::endl;

    // // std::string a;
    // int num;
    // std::cout << "Hello please enter a phrase:" << std::endl;
    // std::getline(std::cin, a);
    // std::cout << "The string you entered is: " << a << std::endl;
    // std::stringstream(a) >> num;
    // std::cout << "The int is: " << num << "\n";
    // int numbers[5];
    // int *p;
    // p = numbers;
    // *p = 1;
    // *(p+4) = 5;
    // numbers[1] = 2;
    // p++;
    // p++;
    // *p = 3;
    // p = &numbers[3];
    // *p = 4;
    // p = numbers;
    // int tabl[2];
    // int *c;
    // c = tabl;
    // *c = 1;
    // c++; //increment the pointer same as *(p++)
    // *c = 5;
    // (*c)--; //increment the value of the pointer
    // std::cout << *c << "\n";
    // for (int n=0; n<5; n++)
    //     std::cout << numbers[n] << ", ";
    // std::string hello;
    // char *str;
    // str = new char[10];
    // *str = 'h';
    // delete [] str;


    return 0;
}