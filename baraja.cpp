
#include <iostream>
#include <vector>
#include <cstdlib> 
#include <ctime> 
#include"mano.cpp"
using namespace std;


class baraja
{
private:
	mano baraj;
public:
	
	long int random(int max)
	{
		srand((unsigned)time(0)); 
		   	int random_integer; 
		random_integer = (rand()%max)+1; 
		return random_integer;
	}
	void print_baraj()
		{
			cout << "La baraj "	;		
			baraj.print_mano();
		}

	bool esta(int num)
	{
		bool tmp =false;		
		for(baraj.myIT = baraj.vec.begin();baraj.myIT != baraj.vec.end();baraj.myIT++)	
 			{
				if(num==*baraj.myIT){
					tmp =true;
					return tmp;}
			}
		return tmp;
	}
	
	int random_cartas()
	{
		int carta;
		if(baraj.get_size()==0){
			carta=random(14);
			baraj.add_card(carta);
			return carta;}
		
		carta=random(14);
		while(esta(carta))
			{carta=random(14);}
		baraj.add_card(carta);
		return carta;			
	}
	void dar_a_jugador(mano *a)
	{
		a->add_card(baraj.vec[baraj.vec.size()-1]);
		baraj.erase_card();
	}
	
	
};
/*
int main()
{
	mano a;
	baraja baraj;
	for(int i=0;i<4;i++)
	{	baraj.random_cartas();}
	baraj.print_baraj();
	baraj.dar_a_jugador(&a);
	a.print_mano();
	cout <<"fff";
	   
   return 0;
}*/
