/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env_bt.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbechri <hbechri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 18:58:53 by hbechri           #+#    #+#             */
/*   Updated: 2023/09/14 19:33:46 by hbechri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../minishell.h"

void	env_bt(t_env_lst *env_lst)
{
	t_env_lst	*node;

	node = env_lst;
	while (node)
	{
		if (!ft_strcmp(node->value, ""))
			return ;
		else if (node->value == NULL)
			return ;
		else
		{
			ft_putstr_fd(node->key, 1);
			ft_putstr_fd("=", 1);
			ft_putstr_fd(node->value, 1);
			ft_putstr_fd("\n", 1);
		}
		node = node->next;
	}
}
