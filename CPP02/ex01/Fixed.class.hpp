/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 09:33:04 by albertini         #+#    #+#             */
/*   Updated: 2024/11/19 16:04:03 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>
# include <string>
# include <cmath>


class Fixed
{
	private:
		static int const	_fractional_bits;
		int			_fix_point_value;
	public:
		//Default Constructor
		Fixed(void);
		Fixed(int value);
		Fixed(float value);
		//Copy Constructor 
		Fixed(const Fixed &value);
   		//Assigment Opperator
		Fixed &operator=(const Fixed &rhs);
		//Destructor
		~Fixed(void);
		float toFloat( void ) const;
		int toInt( void ) const;
		int getRawBits(void) const;
		void setRawBits(int const raw);
		friend std::ostream& operator<<(std::ostream &os, const Fixed &fixed);
};

#endif
