        #include<stdio.h>
//daire alani hesabi
double dairealani(double r,double Q)
{    
    const float PI = 3.14159;
    return PI*r*r*Q/360 ;

}
int main()
{
    double alanimiz=dairealani(3,30);
    printf("daire alanimiz :%0.4lf",alanimiz);
    return 0;
}

    

    
