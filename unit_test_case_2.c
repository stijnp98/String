#include <gtest/gtest.h>
#include "string.h"

TEST(MytestCategory,MyTEst1)
{
	char word[]="HeLlo";
	char expword[]="hello";
	int res;

	res=str2lower(word);
	EXPECT_EQ(2,res);
	EXPECT_STREQ(expword,word);
}

TEST(MytestCategory,MyTEst2)
{
	char word[]="AZaz";
	char expword[]="azaz";
	int res;

	res=str2lower(word);
	EXPECT_EQ(2,res);
	EXPECT_STREQ(expword,word);
}

TEST(MytestCategory,MyTEst3)
{
	char word[]="1234";
	char expword[]="1234";
	int res;

	res=str2lower(word);
	EXPECT_EQ(0,res);
	EXPECT_STREQ(expword,word);
}

TEST(MytestCategory,MyTEst4)
{
	char word[]="HELLO";
	char expword[]="hello";
	int res;

	res=str2lower(word);
	EXPECT_EQ(5,res);
	EXPECT_STREQ(expword,word);
}