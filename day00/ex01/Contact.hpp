/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 14:26:18 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/22 22:13:31 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

/*
 * class that describes a contact in a phone book
 */

class Contact
{
	//properties of a contact
	public:
		std::string		first_name;
		std::string		last_name;
		std::string		nickname;
		std::string		login;
		std::string		postal_address;
		std::string		email_address;
		std::string		phone_number;
		std::string		birth_date;
		std::string		favorite_meal;
		std::string		underwear_color;
		std::string		darkest_secret;

		//constructor and destructor
		Contact		(void);
		~Contact	(void);
	
};
#endif
