#include <iostream>
#include <string>
#include <cmath>

double areaCalculator(double edge);
double areaCalculator(double radyan, const double pi);
double areaCalculator(double width,double height,bool isItTriangle);
double choiceReturner();

int main ()
{
    double result;
    
    
    
    result = choiceReturner();
    
    std::cout << "Your shapes area is : "<<result<<'\n';
    
    return 0;
    
}

double choiceReturner(){
    double result;
    
    int choice;
    
    bool isItOkey = true;
    bool isItTriangle = true;
    
    std::cout << "1-Square\n2-Rectangle\n3-Triangle\n4-Circle\n";
    
    while (isItOkey) {
        double edge;
        
        double length;
        double width;
        
        double radyan;
        const double pi=3.14;
        
        double xd;
        
        std::cout <<"Please choose the geometric shapes that you want to calculate area : ";
        std::cin >> choice;
        
        switch (choice) {
            case 1:
                std::cout << "What is the length of your squares edge : ";
                std::cin >> edge;
                
                result = areaCalculator(edge);
                isItOkey=false;
                break;
                
            case 2:
                std::cout << "What is the length of your rectangels width : ";
                std::cin >>width;
                
                std::cout << "What is the length of your rectangels height : ";
                std::cin >>length;
                
                isItTriangle = false;
                
                result = areaCalculator(width,length,isItTriangle);
                isItOkey=false;
                break;
                
            case 3:
                std::cout << "What is the length of your triangles width : ";
                std::cin >> width;
                
                std::cout << "What is the length of your triangles height : ";
                std::cin >>length;
                
                isItTriangle = true;
                
                result = areaCalculator(width,length,isItTriangle);
                isItOkey=false;
                break;
                
            case 4:
                std::cout << "What is the length of your circles radyan : ";
                std::cin >> radyan;
                
                result =areaCalculator(radyan, pi);
                
                isItOkey=false;
                break;
            default: std::cout << "You have choosed an unknown option please try again."<<'\n';
                break;
        }
           
    }
    return result;
}

double areaCalculator(double e){
    return pow(e,2);
}
double areaCalculator(double w,double h, bool isTriangle){
    return(isTriangle)? w*h / 2.0 : w*h;
}
double areaCalculator(double r, const double pi){
    return pi *pow(r,2);
}


