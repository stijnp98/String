#include <gtest/gtest.h>
#include "string.h"

TEST(MytestCategory,MyTEst1)
{
	char word[]="HeLlo";
	char expword[]="HELLO";
	int res;

	res=str2upper(word);
	EXPECT_EQ(3,res);
	EXPECT_STREQ(expword,word);
}

TEST(MytestCategory,MyTEst2)
{
	char word[]="";
	char expword[]="";
	int res;

	res=str2upper(word);
	EXPECT_EQ(0,res);
	EXPECT_STREQ(expword,word);
}

TEST(MytestCategory,MyTEst3)
{
	char word[]="1234";
	char expword[]="1234";
	int res;

	res=str2upper(word);
	EXPECT_EQ(0,res);
	EXPECT_STREQ(expword,word);
}

TEST(MytestCategory,MyTEst4)
{
	char word[]="HELLO";
	char expword[]="HELLO";
	int res;

	res=str2upper(word);
	EXPECT_EQ(0,res);
	EXPECT_STREQ(expword,word);
}