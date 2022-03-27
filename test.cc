//all systemc modules should include systemc.h header file
#include "systemc.h"

//hello_world is module name
SC_MODULE(hello_world){
	SC_CTOR(hello_world){
		//nothing in constructor
	}
	void say_hello(){
		//Print "Hello world!!!" to the console.
		cout<<"Hello World!!!"<<endl;
	}
}; //此处分号不要忘了

//sc_main in top level function like in C++ main
int sc_main(int argc, char* argv[]){
	hello_world hello("HELLO");
	hello.say_hello();
	return 0;
}