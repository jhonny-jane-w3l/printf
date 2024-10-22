/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:42:15 by cw3l              #+#    #+#             */
/*   Updated: 2024/10/22 23:16:08 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"

// int ptr_test(void)
// {
// 	//777_PTR_TEST//777//777//777//777//777//
// 	int a = printf("%p\n", (void*)-1000);
// 	print_int(a);
// 	int b = ft_printf("%p\n", (void*)-1000);
// 	print_int(b);
// 	assert(a == b);
// 	int c = printf("ccc%p\n", "(void*)-1000");
// 	print_int(c);
// 	int d = ft_printf("ccc%p\n", "(void*)-1000");
// 	print_int(d);
// 	assert(c == d);
// 	int e = printf("ccc%p\n", NULL);
// 	print_int(e);
// 	int f = ft_printf("ccc%p\n", NULL);
// 	print_int(f);
// 	assert(e == f);
// 	int g = printf("ccc%p\n", (int *)INT_MAX);
// 	print_int(g);
// 	int h = ft_printf("ccc%p\n", (int *)INT_MAX);
// 	print_int(h);
// 	assert(g == h);
// 	int i = printf("ccc%p\n", (int *)INT_MIN);
// 	print_int(i);
// 	int j = ft_printf("ccc%p\n", (int *)INT_MIN);
// 	print_int(j);
// 	assert(i == j);
// 	int k = printf("ccc%p\n", (unsigned long *)ULONG_MAX);
// 	print_int(k);
// 	int l = ft_printf("ccc%p\n", (unsigned long *)ULONG_MAX);
// 	print_int(l);
// 	assert(l == k);
// 	int m = printf("ccc%p\n", (long *)LONG_MIN);
// 	print_int(m);
// 	int n = ft_printf("ccc%p\n", (long *)LONG_MIN);
// 	print_int(n);
// 	assert(n == m);
// 	//777_PTR_TEST//777//777//777//777//777//
// 	return(1);
// }
// int decimal_d_test()
// {
// 	int a = printf(" %d %d %d %d %d %d %d\n", INT_MAX, INT_MIN, (int)LONG_MAX, (int)LONG_MIN, (int)ULONG_MAX, 0, -42);
// 	print_int(a);
// 	int b = ft_printf(" %d %d %d %d %d %d %d\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
// 	print_int(b);
// 	assert(a == b);
// 	int c = printf(" %d ", -99);
// 	print_int(c);
// 	int d = ft_printf(" %d ", -99);
// 	print_int(d);
// 	assert(c == d);
// 	return (1);
// }
// int decimal_i_test()
// {

// 	int a = printf("%ic   cc",INT_MAX);
// 	print_int(a);
// 	int b = ft_printf("%ic   cc",INT_MAX);
// 	print_int(b);
// 	assert(a == b);
// 	int c = printf("    %iccc",UINT_MAX);
// 	print_int(c);
// 	int d = ft_printf("    %iccc",UINT_MAX);
// 	print_int(d);
// 	assert(c == d);
// 	return (1);
// }

// int hex_test()
// {
// 	// printf("voici la valeur de - 1000 to upper : %X\n", -1000);
// 	// ft_printf("voici la valeur de - 1000 to upper : %X\n", -1000);
// 	// printf("voici la valeur de 1000 tolower : %x\n", -1000);
// 	// ft_printf("voici la valeur de 1000 tolower : %x\n", INT_MAX);
    
// 	int a = printf(" %x ", 16);
// 	print_int(a);
// 	int b = ft_printf(" %x ", 16);
// 	print_int(b);
// 	assert(a== b);
    
// 	// int c = printf("   %xccc", INT_MIN);
// 	// print_int(c);
// 	// int d = ft_printf("   %xccc", INT_MIN);
// 	// print_int(d);
// 	// assert(c==d);
// 	// int e = printf("   %xccc%X", INT_MIN,INT_MAX);
// 	// print_int(e);
// 	// int f = ft_printf("   %xccc%X", INT_MIN,INT_MAX);
// 	// print_int(f);
// 	// assert(e==f);
	
// 	return(1);
// }

// int str_test()
// {
// 	int a = printf("%scc%s,ccc%s","voici", "a", "a");
// 	print_int(a);
// 	int b = ft_printf("%scc%s,ccc%s","voici", "a", "a");
// 	print_int(b);
// 	assert(a == b);
// 	int d = printf("%scc%s,ccc%s",(char *)NULL, (char *)NULL, (char *)NULL);
// 	print_int(d);
// 	int c = ft_printf("%scc%s,ccc%s",NULL, NULL, NULL);
// 	print_int(c);
// 	assert(c == d);
// 	int e = printf("%s%s%s","txt", (char *)NULL, "2");
// 	print_int(e);
// 	int f = ft_printf("%s%s%s",NULL, "txt", "2");
// 	print_int(f);
// 	assert(e == f);
// 	return (1); 
// }

// int u_test()
// {
// 	int a = printf("%u\n", UINT_MAX);
// 	print_int(a);
// 	int b = ft_printf("%u\n", UINT_MAX);
// 	print_int(b);
// 	assert(a== b);
// 	int c = printf("%u\n", INT_MAX);
// 	print_int(c);
// 	int d = ft_printf("%u\n", INT_MAX);
// 	print_int(d);
// 	assert(c== d);
// 	int e = printf("%u\n", INT_MIN);
// 	print_int(e);
// 	int f = ft_printf("%u\n", INT_MIN);
// 	print_int(f);
// 	assert(e== f);
// 	int g = ft_printf("%icccn\n",UINT_MAX);
// 	print_int(g);
// 	int h = printf("%icccn\n",UINT_MAX);
// 	print_int(h);
// 	assert(h == g);

// 	return (1);
// }

// int main(void)
// {
// 	// if (ptr_test())
// 	// 	print_str("TESTS POITEUR REALISER AVEC SUCCES");
// 	// if (decimal_i_test())
// 	// 	print_str("TESTS DECIMAL_I REALISER AVEC SUCCES");
// 	if (decimal_d_test())
// 		print_str("TESTS DECIMAL_D REALISER AVEC SUCCES");
// 	// if (hex_test())
// 	// 	print_str("TESTS HEX_xX REALISER AVEC SUCCES");
// 	// if (str_test())
// 	// 	print_str("TESTS STR REALISER AVEC SUCCES");
// 	// if (u_test())
// 	// 	print_str("TESTS STR REALISER AVEC SUCCES");
// 	return (0);
// }