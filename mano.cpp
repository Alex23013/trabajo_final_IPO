#include <iostream>
#include <vector>
#include"namespace_interfaz.h"
using namespace std;
using namespace Interfaz;

class mano
{
public:
	vector<int> vec;
	vector<int>::iterator myIT; 
	
	int get_size()
		{return vec.size();}

   	void add_card(int i)
		{vec.push_back(i);}

	void erase_card()
		{vec.pop_back();}

	void print_mano()
		{
		for(myIT = vec.begin();myIT != vec.end();myIT++)
			{
			    print_card(*myIT);
			}
		cout << endl;
		}

	int suma_mano()
		{
		int suma=0;
		for(myIT = vec.begin();myIT != vec.end();myIT++)	
 			{ suma =suma+*myIT;}
		return suma;
		}

	bool validar()
		{
		bool tmp=false;
		if(suma_mano()<21)
			{tmp =true;}
		return tmp;
		}

	bool operator<(mano b)
		{
		bool tmp;
		if(suma_mano()<b.suma_mano())
			{tmp =true;}
		else
			tmp=false;}
		return tmp;
		}

};
 /*
int main()
{
	mano a;
	a.add_card(3);a.add_card(6);a.add_card(5);
	a.print_mano();
	int w;
	w=a.suma_mano();
	cout <<"suma mano A: "<< w<<endl;
	mano b;
	b.add_card(38);
	//a.win_two_player(a,b);
	   
   return 0;
}
*/
