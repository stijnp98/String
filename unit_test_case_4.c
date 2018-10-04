#include <gtest/gtest.h>
#include "string.h"

TEST(CpString,MyTest1)
{
	char worda[] ="HeLlo";
	char wordb[] ="";
	char expword[]="HeLlo";

	mystrcpy(worda,wordb);
	EXPECT_STREQ(expword,wordb);
}

TEST(CpString,MyTest2)
{
	char worda[] ="";
	char wordb[] ="";
	char expword[]="";

	mystrcpy(worda,wordb);
	EXPECT_STREQ(expword,wordb);
}

TEST(CpString,MyTest3)
{
	char worda[] ="HeLlo1234";
	char wordb[] ="";
	char expword[]="HeLlo1234";

	mystrcpy(worda,wordb);
	EXPECT_STREQ(expword,wordb);
}

TEST(CompString,MyTest1)
{
	char worda[] ="HELLO";
	char wordb[] ="HELLO";
    int val = 0;

    val = mystrcmp(worda,wordb);
	EXPECT_EQ(val,0);
}

TEST(CompString,MyTest2)
{
	char worda[] ="Hel58";
	char wordb[] ="Helik";
	int val = 4;

	val =mystrcmp(worda,wordb);
    EXPECT_EQ(val,-4);
}

TEST(CompString,MyTest3)
{
	char worda[] ="HeLlo";
	char wordb[] ="HELLOsegnef";
	int val = 0;

	val =mystrcmp(worda,wordb);
    EXPECT_EQ(val,2);
}

TEST(CompString,MyTest4)
{
	char worda[] ="hello";
	char wordb[] ="helso";
	int val = 0;

	val =mystrcmp(worda,wordb);
    EXPECT_EQ(val,-4);
}

TEST(CompString,MyTest5)
{
	char worda[] ="helso";
	char wordb[] ="hello";
	int val = 0;

	val = mystrcmp(worda,wordb);
    EXPECT_EQ(val,4);
}
TEST(CompString,MyTest6)
{
	char worda[] ="so";
	char wordb[] ="hello";
	int val = 0;

	val = mystrcmp(worda,wordb);
    EXPECT_EQ(val,1);
}

TEST(UplString,MyTest1)
{
	char string[] ="so";

	EXPECT_STREQ(string,strdupl(string));
}

TEST(UplString,MyTest2)
{
	char string[] ="Helo5462";

	EXPECT_STREQ(string,strdupl(string));
}

