/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:23:23 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/16 12:51:03 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <string>
# include <iostream>


template <typename T> class Array
{
	private:
		unsigned int	size;
		T*				array;

    public:
        Array();
        Array(unsigned int n);
        Array(const Array &rhs)
		{
			this->array = new T[rhs.size];
			this->size = rhs.size;
			for (unsigned int x = 0; x < this->array.size; x++)
				this->array[x] = rhs.array[x];
		}
        virtual ~Array();

        Array& operator=(const Array &rhs)
		{
			if (this != &rhs)
			{
				this->~Array();
				this->size = rhs.size;
				this->array = new T[rhs.size];
				for (unsigned int i = 0; i < this->size; i++)
				{
					this->array[i] = rhs.array[i];
				}
			}
			return *this;			
		}

		T& operator[](unsigned int i)
		{
			if (i >= this->size)
				throw OutOfRange();
			return (this->array[i]);
		}

		const T& operator[](unsigned int i) const
		{
			if (i >= this->size)
				throw OutOfRange();
			return (this->array[i]);
		}

		unsigned int getSize() const;
	/*
			ECCEZIONI
	*/
	class OutOfRange : public std::exception
	{
		public:
			const char *what() const throw()
			{
				return ("element is out of range");
			}	
	};
};


template <typename T> 
std::ostream& operator<<(std::ostream &o, const Array<T> &arry)
{
	for(unsigned int i = 0; i < arry.getSize(); i++)
	{
		o << arry[i] << std::flush;
	}
	return o;
}

template <typename T>
inline Array<T>::Array() : size(0), array(new T[0]){}

template <typename T>
inline Array<T>::Array(unsigned int n) : size(n), array(new T[n]){}

template <typename T>
inline Array<T>::~Array()
{
	delete[] this->array;
}

template <typename T>
inline unsigned int Array<T>::getSize() const
{
	return this->size;
}

#endif