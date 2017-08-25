#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
double f(double x);    


double f(double x)   
{
    double a= pow(2,x) - 1.3;
    return a;
}


int main()
{
    double x,x1,e,fx,fx1, x2;
	int cont = 1;
    cout.precision(4);
    cout.setf(ios::fixed);    
	x = x2 = 1;
	x1 = -1;
	e = 0.0001;

    fx=f(x);      
    fx1=f(x1);

    cout <<"x{n}"<<"    "<<"x{n+1}"<<"        "<<"|x{n+1}-x{n}|"<<endl;                
                    
    do            
    {
		if (cont != 1)
		x1 = x;        
		x=x2;       
        fx=f(x);            
        fx1=f(x1);          
        x2 =x-( fx * ( (x-x1) / (fx - fx1 ) ));            
        cout<<x<<"     "<<x1<<"           "<<abs(x1-x)<<endl;  
		cont++;      
    }while (fabs(x2-x)>=e);        
    cout<<"la raiz de la ecuacion es: "<<x2<<endl;
    return 0;
}
