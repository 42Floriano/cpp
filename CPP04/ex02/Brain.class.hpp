/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:45:39 by falberti          #+#    #+#             */
/*   Updated: 2024/11/26 11:01:34 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CLASS_HAPP
# define BRAIN_CLASS_HAPP

# include <iostream>
# include <string>


class Brain
{
	protected:
        std::string _ideas[100];
	public:
		//Constructors
        Brain(void);
		Brain(std::string type);
		//Copy Constructor 
		Brain(const Brain &value);
   		//Assigment Opperator
		Brain &operator=(const Brain &rhs);
		//Destructor
	    ~Brain(void);
		//Methods
		//Getters & Setters
        void setIdea(int index, const std::string& idea);
        std::string getIdea(int index) const;
};

#endif