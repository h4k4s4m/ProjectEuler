#include <iostream>


int main(){
    int target = 1000;

    for(int i=1; i<target; i++){
        for(int j=i; j<target; j++){
            for(int k=j; k<target; k++){
                if(i+j+k==1000)
                    if((i*i)+(j*j)==(k*k)){
                        std::cout<<i*j*k<<std::endl;
                    }
            }
        }
    }
}