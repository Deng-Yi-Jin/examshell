/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 12:38:50 by djin              #+#    #+#             */
/*   Updated: 2023/04/13 12:39:49 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(void)
{
	write(1, "Hello World", 11);
	write(1, "\n", 1);
}
