

////////nodo.h///////
template<typename T>
class nodo
{
public:
	T dato;
	nodo<T> *sig;
	nodo<T> *ant;

nodo(T dato=0)
	{
	this->dato=dato;
	sig=NULL;
	ant=NULL;
	}

};
