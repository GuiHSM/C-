#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int um,dois,tres,soma;
    cin >>um>>dois>>tres>>soma;
    if(soma< um){
      int escapula=um;
      um=soma;
      soma=escapula;
    }if(soma<dois){
      int escapula=dois;
      dois=soma;
      soma=escapula;
    }if(soma<tres){
      int escapula=tres;
      tres=soma;
      soma=escapula;
    }
    cout<<soma-um<<" "<<soma-dois<<" "<<soma-tres;
}