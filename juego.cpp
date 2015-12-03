#include <iostream>
#include "player.cpp"
class Juego
{
public:
	player_mesa a;
	player_person b;

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
				
			}else{			
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
					//b.dinero=b.dinero-apuesta;
					b.set_dinero(b.mostrar_dinero()-apuesta);
					break;}
				for(int i=0;i<2;i++){
					baraj.random_cartas();}
				if(a.play(a,baraj,win,&tmp_mesa))
					{//cout<< "GANASTE y  te llevas el doble"<<endl;
					ganaste();
					doblas_tu_dinero();
					b.set_dinero(b.mostrar_dinero()*2);
					break;}
		
				if(win == false)
					{b.set_dinero(win_two_player(&tmp_mesa,&tmp_player,b.mostrar_dinero(),apuesta));
					break;}
			}	
		return b.mostrar_dinero();
		}

	int blackjack()
	{
	int salida =5;
	while(salida !=0)
		{
		//cout <<"Dispones de: "<<b.mostrar_dinero()<<" dolares"<<endl;
		tienes_tanto_US(b.mostrar_dinero());
		int apuesta;
		//cout <<"Cuantos dolares de apuesta ?? "<<endl;
		apuesta_();
		cin>>apuesta;
		if(b.val_dinero(apuesta))
			{
		
			b.set_dinero(partida(a,b,false,apuesta));
			//cout <<"Le queda "<<b.mostrar_dinero()<<" dolares"<<endl;
			tienes_tanto_US(b.mostrar_dinero());
			if(b.mostrar_dinero() <=0)
				{
				//cout << "Ya no puedes seguir jugando "<<endl;
				//cout <<" Se te acabaron los dolares "<<endl;	
				ya_no_puede_jugar();
				tienes_tanto_US(0);
				salida=0;}
			else
				{
				//cout <<"Que desea hacer? "<<endl;
				escoge_una_opcion();
				cout << "1:continuar      0:salir"<<endl;	
				cin>>salida;
				}
			}
		else{	//cout << "NO tienes ese dinero "<<endl;
			no_tiene_esos_US (apuesta);}
		}
	return 0;
	}

};
