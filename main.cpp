#include <iostream>
#include <string>
#include <cmath>

using namespace std; 

float pi = 3.14159;

//funtion to calculate the volume of sphere
float volume(float r)
{
    float vol;
    vol=(float(4)/float(3))* pi * r * r *r;
    return vol;
}


// function to calculate surfase area sphere
float surface_area(float r)
{
    float sur_ar;
    sur_ar = 4 * pi * r * r;
    return sur_ar;
}

// function to calculate the surfase area of box
float surface_area_B(float h, float w, float l)
{
    float sur_arb;
    sur_arb = (float (2)) * h * w + (float(2)) * h * l + (float (2)) * w * l;
    return sur_arb;
}


//function to calculater the volume of box
float volume_B(float h, float w, float l)
{
    float vol_B;
    vol_B = l * w * h;
    return vol_B;
}

// function to calculate volume of pyrimid
float volume_P ( float w, float h)
{
    float vol_P;
    vol_P =  (float(1)/float(3))* w * w * h;
    return vol_P;
}

//function to calculate surface area of a squar base pyrimid
float surface_area_P ( float w, float h)
{
    float sur_ar_P;
    float perim;
    float slant_height;
    float A_base;

    perim = (float (2)) *( w + w);
    A_base = w * w;
    slant_height = sqrt(h*h+(w/(float(2))) * (w/(float(2))));
    sur_ar_P = A_base + (float(1)/float(2)) * perim * slant_height;
    return sur_ar_P;
}


// main method that will do the calculations
int main()
{
    float radius;
    float vol_1, vol_2, vol_3, sur_area_1, sur_area_2, sur_area_3;
    float length, width, height;
    float width1, height1;
// intro
cout << "welcome to shape calculator\n";
cout << "Let's start with a sphere\n";

// sphere
    cout<<"enter the radius:\n";
    cin>> radius;
     
    vol_1 = volume(radius);
    sur_area_1 = surface_area(radius);

    cout << "volume of a sphere:"<< vol_1 << endl;
    cout << "Surface area of a sphere:" << sur_area_1 << endl;
    

// box
    cout << "Now lets calculate for a box\n";  
    cout << "Enter the lenghth:\n";
    cin >> length;
    cout << "Enter the width:\n";
    cin >> width;
    cout << "Enter the height:\n";
    cin >> height;

    sur_area_2 = surface_area_B(length, width, height);
    vol_2 = volume_B(length,width,height);

    cout << "Volume of box:"<< vol_2 <<endl;
    cout << "Surface area of box:"<< sur_area_2 <<endl;
// pyrmid
    cout<< "Now let's caluculate for a squair base pyrmid:\n";
    cout << "Enter the base length:\n";
    cin >> width1;
    cout << "Enter the height\n";
    cin >> height1;
    
    sur_area_3 = surface_area_P(width1, height1);
    vol_3 = volume_P (width1, height1);

    cout << "volume of pyrmid:\n"<< vol_3<<endl;
    cout << "surface area of pyrmid:\n"<<sur_area_3<<endl;
    return 0;
}

