#include <gtest/gtest.h>
#include "string.h"

TEST(NumberTest,MyTEst1)
{
    char word[] ="HeLlo";
	char expword[]="HeLlo";
	int res;

	res=str_strip_numbers(word);
	EXPECT_EQ(5,res);
	EXPECT_STREQ(expword,word);
}

TEST(NumberTest,MyTEst2)
{
	char word[]="AZ123568az";
	char expword[]="AZaz";
	int res;

	res=str_strip_numbers(word);
	EXPECT_EQ(4,res);
	EXPECT_STREQ(expword,word);
}

TEST(NumberTest,MyTEst3)
{
	char word[]="1234";
	char expword[]="";
	int res;

	res=str_strip_numbers(word);
	EXPECT_EQ(0,res);
	EXPECT_STREQ(expword,word);
}

TEST(NumberTest,MyTEst4)
{
	char word[]="";
	char expword[]="";
	int res;

	res=str_strip_numbers(word);
	EXPECT_EQ(0,res);
	EXPECT_STREQ(expword,word);
}