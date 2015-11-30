#include <iostream>
#include "player.cpp"
class Juego
{
public:
	int win_two_player(mano* a, mano* b,int din, int ap)
		{
		if(*a<*b)
			{
			//cout << "=> mano TU gana con "<<b->suma_mano()<<" La mesa con "<<a->suma_mano()<<endl;
			ganaste();
			tienes_tanto_US(b->suma_mano());
			la_mesa();
			tiene_tanto_US(a->suma_mano());
			//cout<< "GANASTE y  te llevas el doble"<<endl;
			
			doblas_tu_dinero();
			din=din+(ap*2);
				
			}
		else
			{			
			//cout << " => mano MESA gana "<<a->suma_mano()<< " y tu tenias "<<b->suma_mano()<<endl;
			gana_la_mesa();
			tiene_tanto_US(a->suma_mano());
			tienes_tanto_US(b->suma_mano());
			//cout<< "pierdes tu apuesta"<<endl;
			pierdes_lo_apostado();
			din=din-ap;
			}
	
		return din;
		}

	int partida(player_mesa a,player_person b,bool win,int apuesta)
	{
	mano tmp_player;
	mano tmp_mesa;
	while(true)			
	{		
		baraja baraj;
		for(int i=0;i<4;i++){
			baraj.random_cartas();}
		//baraj.print_baraj();
		if(b.play(b,baraj,win,&tmp_player))
			{//cout<< "pierdes tu apuesta"<<endl;
			pierdes_lo_apostado();
			b.dinero=b.dinero-apuesta;
			break;};
		for(int i=0;i<2;i++){
			baraj.random_cartas();}
		if(a.play(a,baraj,win,&tmp_mesa))
			{//cout<< "GANASTE y  te llevas el doble"<<endl;
			ganaste();
			doblas_tu_dinero();
			b.dinero=b.dinero*2;
			break;};
		
		if(win == false)
			{b.dinero=win_two_player(&tmp_mesa,&tmp_player,b.dinero,apuesta);
			break;}
	}	
	return b.dinero;
	}

};
