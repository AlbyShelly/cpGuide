#include<iostream>

using namespace std;

class Fun{

    private:
        long int times=0;

    public:
        void operator()(int n){
            times++;

            if(n == 1)
               return;
            
            (*this)(n-1);
            (*this)(n-1);
        }

        void print(){
            cout << times << endl;
        }
};

int main(int argc, char* argv[]){

    Fun fun;
    fun( stoi(argv[1]) );
    fun.print(); 
}
