#include<iostream>
#include<math.h>

using std::cin;
using std::cout;
using std::endl;
//we use the above lines instead of using namespace std; for space savings
void resultant_of_two_vectors(float a,float b,float c)
    {
    
    float d;
    d=sqrt((a*a)+(b*b)+(2*a*b*cos(c*(M_PI/180))));
    cout<<d<<"newtons"<<endl;
    //return 0;
    //try to update with the angle the resultant makes with the x and y axis.
    
    }

void area_of_circle(float radius)
    {
        float area = M_PI*radius*radius;
        cout<<area<<"metre square"<<endl;
        //return 0;
    }

    //to find the firctional force,coeff_friction can be of kinamtic or static friction

void frictional_force(float coeff_friction,float newton)
    {
        float ff = coeff_friction*newton;
        cout<<ff<<endl;
    }

//to find the area of a rectangle or square
void area_of_rectangle(float length,float breadth)
    {
        float area = length*breadth;
        cout<<area<<endl;
    }

void force(float mass,float accln)
    {
        float force = mass*accln;
        cout<<force<<endl;
    }



int main(){
    //resultant of two vectors
    int Force_1,Force_2,Angle;
    cout<<"enter the first force second force (in newtons) and angle(in degree) between them in this respective order"<<endl;
    cin>>Force_1>>Force_2>>Angle;
    resultant_of_two_vectors(Force_1,Force_2,Angle);

    //area of a circle
    float radis;
    cout<<"enter the radius of the circle in metres to get area of that particular circle"<<endl;
    cin>>radis;
    area_of_circle(radis);

    //frictional force
    float coefficientOfFriction,reactionForce;
    cout<<"enter the coefficient of friction and reaction force"<<endl;
    cin>>coefficientOfFriction>>reactionForce;
    frictional_force(coefficientOfFriction,reactionForce);

    //area of rectangle
    float length,breadth;
    cout<<"enter length and breadth of rectangle"<<endl;
    cin>>length>>breadth;
    area_of_rectangle(length,breadth);

    //force equation
    float mass,acceleration;
    cout<<"enter mass and acceleration"<<endl;
    cin>>mass>>acceleration;
    force(mass,acceleration);

    

    return 0;
}

