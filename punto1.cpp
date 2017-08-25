#include <math.h>
#include <iostream>

using namespace std;

int main (){

    float x1,x2=0;
    float raiz=0;

	float a;
	float b;
	float c;

	cout<<"Digite el coeficiente de grado 2 (a): "<<endl;
	cin>>a;
	cout<<"Digite el coeficiente de grado 1 (b): "<<endl;
	cin>>b;
	cout<<"Digite el coeficiente de grado 0 (c): "<<endl;
	cin>>c;


    float r1 = pow(b,2);

    r1 = r1- (4*a*c);

    if(r1 < 0){
        r1=r1*-1;
        raiz = sqrt(r1);
        x1= (-b + raiz)/(2*a);
        x2= (-b - raiz)/(2*a);

        cout << "La raiz es compleja conjugada" << endl;
        cout << "raiz1 : " << x1 << "i     "; 
        cout << "raiz2: " << x2 << "i" <<endl;

    }else{

        raiz = sqrt(r1);
        x1= (-b + raiz)/(2*a);
        x2= (-b - raiz)/(2*a);

        if(x1==(x2))
            cout << "multiplicidad dos" << endl;
        else
            cout << "complejas conjugadas" << endl;
        
        cout << "raiz 1: " << x1 <<"     raiz 2: " << x2 << endl;
    }

	return 0;
}
