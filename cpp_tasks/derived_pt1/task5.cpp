#include <iostream>
int main(){

int arr[5]={1,2,3,4,5};

for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){

if (arr[i]%2==0) {

std::cout<<arr[i]<<std::endl;

}         


}



}