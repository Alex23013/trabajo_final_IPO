#include <iostream>
#include "baraja.cpp"
using namespace std;


class player
{
	protected:
		int dinero;
	
	player()
		{this->dinero =20;}
	public:
	int mostrar_dinero()
		{return dinero;}
	void set_dinero(int dinero)
		{this-> dinero =dinero;}

	bool val_dinero(int din)
		{
		if(din>this->dinero)
			{return false;}
		return true;
		}
};


class player_mesa:public player
{
	public:	

		bool play(player a,baraja baraj,bool win,mano*tmp)
			{
			//cout <<"mesa:Es mi turno"<<endl;
			la_mesa_puede_jugar();
			if(tmp->suma_mano()<14)
						{
						baraj.dar_a_jugador(tmp);
						baraj.dar_a_jugador(tmp);
						if(tmp->suma_mano()<12)
							{baraj.dar_a_jugador(tmp);}
						tmp->print_mano();
						if(tmp->validar() == false)
									{
									//cout << "la mesa volo =o"<<endl;
									la_mesa();
									volo();
									win=true;			
									}
						}
			return win;
			}
};

class player_person:public player
{
	public:	
	bool play(player b,baraja baraj,bool win,mano *tmp)
		{
		//cout <<"player:Es mi turno"<<endl;
		puede_jugar();
		if(tmp->get_size()<1)
					{
					baraj.dar_a_jugador(tmp);
					}
				tmp->print_mano();
				int opcion =2;
				while(opcion ==2)
					{
					escoge_una_opcion();
					cout <<"2: Pedir carta  3:terminar turno "<<endl;
					cin >> opcion;
					if(opcion ==2)
						{
						baraj.dar_a_jugador(tmp);
						tmp->print_mano();
						}
			
					if(tmp->validar() == false)
						{
						//cout << "volaste =("<<endl;
						volaste();
						opcion =3;
						win=true;			
						}
					}
		return win;
		}
};
