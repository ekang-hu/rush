/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeoncho <cyhh1994@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 09:10:20 by yeoncho           #+#    #+#             */
/*   Updated: 2020/07/05 09:34:53 by yeoncho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void ft_putchar(char c);

void print(int Col, int Row, int maxCol, int maxRow)
{
	if(Row==0)
	{
		if((Col==0)||(Col==maxCol))
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('|');
		}
	}
	else if(Row==maxRow)
	{
		if((Col==0)||(Col==maxCol))
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('|');
		}
	}
	else
	{
		if((Col==0)||(Col==maxCol))
		{
			ft_putchar('-');
		}
		else
		{
			ft_putchar(' ');
		}
	}
}

void rush(int a, int b)
{
	int maxCol = b-1;
	int maxRow = a-1;

	int Col=0;
	int Row=0;

	while(Col<=maxCol)
	{
		Row=0;
		while(Row<=maxRow)
		{
			print(Col,Row,maxCol,maxRow);
			Row++;
		}
		ft_putchar('\n');
		Col++;
	}
}
