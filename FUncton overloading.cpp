#include <iostream>
using namespace std;

float tarun(float a ,int b){
float c = a+b;
    return c;
}
int tarun(int d) {
     
     return d;
}

int main() {
	float a=4.5;
   int  b=7;
    float c=a+b;
    int d=3;
    
float result1 =tarun(a,b);
int result2 =tarun(d);

cout<<result1<<endl;
cout<<result2<<endl;
    
    return 0;
}
