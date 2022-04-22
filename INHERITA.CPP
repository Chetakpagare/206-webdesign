//porgram to demostric the singel inheritance
#include<iostream.h>
#include<conio.h>
class abc
{
       public:
	   void show()
	   {
	    cout<<"the is the parent class"<<endl;
	   }
};
class xyz:public abc
{

       public:
	     void display()
	     {
		 cout<<"this is child class"<<endl;
	     }

};
void main()
{
   clrscr();
   xyz r1;
   r1.show();
   r1.display();
   getch();
}