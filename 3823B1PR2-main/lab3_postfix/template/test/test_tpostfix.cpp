#include "postfix.h"
#include <gtest.h>

TEST(Postfix, can_create_Postfix)
{
	ASSERT_NO_THROW(Postfix pf);
}

TEST(Postfix, can_add)
{
	Postfix pf;
	ASSERT_NO_THROW(pf.calculation("3 5 +"));
}

TEST(Postfix, add_is_true)
{
	Postfix pf;
	ASSERT_EQ(pf.calculation("3 6 +"), 9);
}

TEST(Postfix, can_sub)
{
	Postfix pf;
	ASSERT_NO_THROW(pf.calculation("9 3 -"));
}

TEST(Postfix, sub_is_true_in)
{
	Postfix pf;
	ASSERT_EQ(pf.calculation("9 6 -"), 3);
}

TEST(Postfix, can_mult)
{
	Postfix pf;
	ASSERT_NO_THROW(pf.calculation("3 3 *"));
}

TEST(Postfix, mult_is_true)
{
	Postfix pf;
	ASSERT_EQ(pf.calculation("3 5 *"), 15);
}

TEST(Postfix, can_div)
{
	Postfix pf;
	ASSERT_NO_THROW(pf.calculation("4 2 /"));
}

TEST(Postfix, div_is_true)
{
	Postfix pf;
	ASSERT_EQ(pf.calculation("4 2 /"), 2);
}

TEST(Postfix, can_raise_to_a_degree)
{
	Postfix pf;
	ASSERT_NO_THROW(pf.calculation("5 2 ^"));
}

TEST(Postfix, exponentiation_is_true_in_Postfix)
{
	Postfix pf;
	ASSERT_EQ(pf.calculation("5 2 ^"), 25);
}

TEST(Postfix, can_raise_to_a_degree_like_a_profi)
{
	Postfix pf;
	ASSERT_EQ(pf.calculation("3 2 ^ 3 ^"), 729);
}

TEST(Postfix, can_execute_with_brackets)
{
	Postfix pf;
	ASSERT_NO_THROW(pf.calculation("2 5 2 * 8 - +"));
}

TEST(Postfix, execute_with_brackets_is_true)
{
	Postfix pf;
	ASSERT_EQ(pf.calculation("2 5 2 * 8 - +"), 4);
}

TEST(Postfix, can_execute_with_sin)
{
	Postfix pf;
	ASSERT_NO_THROW(pf.calculation("0 s"));
}

	TEST(Postfix, execute_with_sin_is_true)
{
	Postfix pf;
	ASSERT_EQ(pf.calculation("0 s"), 0);
}

TEST(Postfix, can_execute_with_cos)
{
	Postfix pf;
	ASSERT_NO_THROW(pf.calculation("0 c"));
}

TEST(Postfix, execute_with_cos_is_true)
{
	Postfix pf;
	ASSERT_EQ(pf.calculation("0 c"), 1);
}

TEST(Postfix, can_execute_with_tg)
{
	Postfix pf;
	ASSERT_NO_THROW(pf.calculation("0 tg"));
}

TEST(Postfix, execute_with_tg_is_true)
{
	Postfix pf;
	ASSERT_EQ(pf.calculation("0 tg"), 0);
}

TEST(Postfix, can_execute_with_log)
{
	Postfix pf;
	ASSERT_NO_THROW(pf.calculation("1 l"));
}

TEST(Postfix, execute_with_log_is_true)
{
	Postfix pf;
	ASSERT_EQ(pf.calculation("1 l"), 0);
}