#ifndef CIRCLE_H
#define CIRCLE_H
#include <vector>
#include <fstream>
#include <string>

using namespace std;

class circle{                   //this class contains properties of a circle shape

    public:
        circle();               //default constructur
        circle(double Radius);              //this constructur creates a circle member

        static double total_Area();
        static double total_Perimeter();
        double Area();
        double Perimeter();

        friend ostream& operator <<(ostream & output, const circle &circ);
        bool operator !=(const circle& circ);
        bool operator ==(const circle& circ);
        bool operator <(const circle& circ);
        bool operator >(const circle& circ);
        const circle operator +(double number)const;
        const circle operator -(double number)const;
        circle operator ++();
        circle operator ++(int);
        circle operator --();
        circle operator --(int);

        inline void setradius(const double a){radius=a;}
        inline double getradius() const {return radius;}
        inline void setx_coordinate(const double a){x_coordinate=a;}
        inline void sety_coordinate(const double a){y_coordinate=a;}            //set and get function for variables
        inline double getx_coordinate() const {return x_coordinate;}
        inline double gety_coordinate() const {return y_coordinate;}
        inline string gettype() const {return type;}
        inline void settype(string name){type=name;}
        inline static void setperimeter(double a){perimeter =a;}
        inline static void setarea(double a){area =a;}
        inline void setbigArea(const double a){bigArea=a;}
        inline void setsmallArea(const double a){smallArea=a;}
        inline double getbigArea() const {return bigArea;}
        inline double getsmallArea()const {return smallArea;}

    private:
        string type;                     //this variable for the underdstand shape big or small
        double radius;                  //this variables for radius sizes
        double x_coordinate;
        double y_coordinate;        //these variables for the starting points of the circle
        static double perimeter;
        static double area;
        double areaOfShape;
        double perimeterOfShape;
        double bigArea;
        double smallArea;
};


#endif // CIRCLE_H
