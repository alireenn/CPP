#include "Span.hpp"

Span::Span()
{
}

Span::Span(unsigned int N) : _N(N)
{
}

Span::~Span()
{
}

Span &Span::operator=(const Span &rhs)
{
	if (this != &rhs)
	{
		this->_N = rhs._N;
		this->_list = rhs._list;
	}
	return (*this);
}

void Span::addNumber(int n)
{
	if (_list.size() > _N)
		throw std::out_of_range("AddNumber: List is full");
	_list.push_back(n);
}
/*Prima di aggiungere i numeri, la funzione controlla se la dimensione della lista _list è maggiore di _n.
Se la dimensione della lista è minore o uguale a _n, utilizza il metodo insert della std::list per aggiungere l'intero 
intervallo di numeri specificato dagli iteratori itBegin e itEnd alla fine della lista _list.
quindi serve per inserire un range di numeri in una lista, controllando che non superi la dimensione massima consentita.*/
void Span::addIter(const std::list<int>::iterator &start, const std::list<int>::iterator &end)
{
	if (_list.size() > _N)
		throw std::out_of_range("AddIter: List is full");
	_list.insert(_list.end(), start, end);//aggiungere l'intero intervallo di numeri specificato dagli iteratori 
}

int Span::shortestSpan()
{
	if (_list.size() < 2)
		throw std::out_of_range("shortestSpan: List is empty");
	int min = longestSpan();
	for (std::list<int>::const_iterator it = _list.begin(); it != _list.end(); ++it)
		for (std::list<int>::const_iterator it2 = _list.begin(); it2 != _list.end(); ++it2)
		{
			if (it == it2)
				continue;
			if (std::abs(*it - *it2) < min)
				min = std::abs(*it - *it2);
		}
	return (min);
}

int Span::longestSpan()
{
	if (_list.size() < 2)
		throw std::out_of_range("longestSpan: List is empty");
	return (*std::max_element(_list.begin(), _list.end()) - *std::min_element(_list.begin(), _list.end()));
}

const std::list<int> *Span::getList(void) const
{
	return &_list;
}

std::ostream &operator<<(std::ostream &o, const Span &span)
{
	for (std::list<int>::const_iterator it = span.getList()->begin(); it != span.getList()->end(); ++it)
		o << *it << " ";
	return o;
}
