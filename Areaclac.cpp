
#include <iostream>
using namespace std;
void initMenu();
double menuDecision(int);
double  AreaCircle(double);
double AreaSquare(double);
double AreaRectangle(double,double);
double AreaTriangle(double,double);

int main(){
    int choice;
    char cont;

    do{

    system("cls");
    initMenu();

    cin>>choice;

    menuDecision(choice);

    cout<< " do you want to continue the program? (Y/N) "<<endl;
    cin >> cont;
    } while(cont== 'y' || cont== 'Y'); //do will execute everything at least once, the if the while is true will do it again

  return 0;
}

void initMenu(){

   cout<< "Enter an option: "<<endl;
   cout<< "1.Circle" <<endl;
   cout<< "2.Square "<<endl;
   cout<< "3.Rectangle" <<endl;
   cout<< "4.Triangle" <<endl;
}
double menuDecision(int choice){
    double r,a,b,c,h;
    switch(choice){
      case 1: cout<< "Enter the radius of the circle: "<<endl;
              cin>>r;
              AreaCircle(r);
              break;
      case 2:cout<< "Enter the side of the square: "<<endl;
              cin>>a;
              AreaSquare(a);
          break;
      case 3:cout<< "Enter the sides of the rectangle: "<<endl;
              cin>>b>>c;
              AreaRectangle(b,c);
          break;
      case 4:cout<< "Enter the hight and the base of the triangle: "<<endl;
              cin>>h>>a;
              AreaTriangle(h,a);
          break;
      default: cout<< "you did not pick one of the options"<<endl;

}


}
double  AreaCircle(double r){
    double result= 3.14*r*r;
    cout<< "the area of the circle of radius "<< r << " is: " <<result<<endl;
    return result;
}

double AreaSquare(double a){
    double t= a*a;
    cout<< "the area of the square of side "<< a << " is: " <<t<<endl;
    return t;
}
double AreaRectangle(double b,double c){
    double result= b*c;
    cout<< "the area of the Rectangle of sides "<< b << " and "<< c << " is: " <<result<<endl;
    return result;
}
double AreaTriangle(double h,double a){
     double result= (0.5*h)*a;
    cout<< "the area of a Triangle of hight "<< h << " and base "<< a << " is: " <<result<<endl;
    return result;
}

