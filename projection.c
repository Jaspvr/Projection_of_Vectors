#include <stdio.h>
#include <math.h>

typedef double Vector[2];
//projects the first onto the second
void projection(Vector first, Vector second){
    //code to compute the projection formula
    double top = (first[0]*second[0]) + (first[1]*second[2]);
    double bottom = (second[0]*second[0]) + (second[1]*second[1]);
    if(bottom == 0){
        printf("The projection of [%.1f, %.1f] onto [%.1f, %.1f] is [0, 0]\n",first[0], first[1], second[0], second[1]);
    }else{
    double formed_constant = top / bottom;
    
    Vector final_product;
    final_product[0] = formed_constant*second[0];
    final_product[1] = formed_constant*second[1];
    
    printf("The projection of [%.1f, %.1f] onto [%.1f, %.1f] is [%.1f, %.1f]\n", first[0], first[1], second[0], second[1], final_product[0], final_product[1]);
    }
    
}

int main(){
    //typedef double Vector[2];
    
    Vector first = {3, 2};
    Vector second = {4, 5};
    
    
    projection(first, second);
    
return 0;
}
    
   
    
 
