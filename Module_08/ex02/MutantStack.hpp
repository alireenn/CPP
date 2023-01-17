/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:50:58 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/17 14:22:45 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
#include <list>
/*std::deque è un contenitore che consente di inserire ed eliminare 
elementi in modo efficiente sia dalla parte anteriore che da quella posteriore.*/
template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	public:
		MutantStack() : MutantStack<T, Container>::stack() {}; // il tipo di container è uno stack
		MutantStack(const MutantStack<T, Container>& other) : MutantStack<T, Container>::stack(other) {};
		virtual ~MutantStack() {};

		MutantStack<T, Container>& operator=(const MutantStack<T, Container>& rhs)
		{
			if (this != &rhs)
				this->MutantStack<T, Container>::operator=(rhs);
			return *this;
		}
		typedef typename Container::iterator				it;
		typedef typename Container::reverse_iterator		rit;
		it	begin(){return this->c.begin(); }; //c = container, sta in deque
		it	end() {return this->c.end(); };
		rit	rbegin() {return this->c.rbegin(); };
		rit	rend() {return this->c.rend(); };
		
};
