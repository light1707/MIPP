#ifndef MAXTEST_HPP_
#define MAXTEST_HPP_

#include <cppunit/extensions/HelperMacros.h>

class MaxTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE(MaxTest);

	CPPUNIT_TEST(test_reg_max_int8);
	CPPUNIT_TEST(test_reg_max_int16);
	CPPUNIT_TEST(test_reg_max_int32);
//	CPPUNIT_TEST(test_reg_max_int64);
	CPPUNIT_TEST(test_reg_max_float);
	CPPUNIT_TEST(test_reg_max_double);

	CPPUNIT_TEST(test_Reg_max_int8);
	CPPUNIT_TEST(test_Reg_max_int16);
	CPPUNIT_TEST(test_Reg_max_int32);
//	CPPUNIT_TEST(test_Reg_max_int64);
	CPPUNIT_TEST(test_Reg_max_float);
	CPPUNIT_TEST(test_Reg_max_double);

	CPPUNIT_TEST(test_reg_maskz_max_int8);
	CPPUNIT_TEST(test_reg_maskz_max_int16);
	CPPUNIT_TEST(test_reg_maskz_max_int32);
//	CPPUNIT_TEST(test_reg_maskz_max_int64);
	CPPUNIT_TEST(test_reg_maskz_max_float);
	CPPUNIT_TEST(test_reg_maskz_max_double);

	CPPUNIT_TEST(test_Reg_maskz_max_int8);
	CPPUNIT_TEST(test_Reg_maskz_max_int16);
	CPPUNIT_TEST(test_Reg_maskz_max_int32);
//	CPPUNIT_TEST(test_Reg_maskz_max_int64);
	CPPUNIT_TEST(test_Reg_maskz_max_float);
	CPPUNIT_TEST(test_Reg_maskz_max_double);

	CPPUNIT_TEST(test_reg_mask_max_int8);
	CPPUNIT_TEST(test_reg_mask_max_int16);
	CPPUNIT_TEST(test_reg_mask_max_int32);
//	CPPUNIT_TEST(test_reg_mask_max_int64);
	CPPUNIT_TEST(test_reg_mask_max_float);
	CPPUNIT_TEST(test_reg_mask_max_double);

	CPPUNIT_TEST(test_Reg_mask_max_int8);
	CPPUNIT_TEST(test_Reg_mask_max_int16);
	CPPUNIT_TEST(test_Reg_mask_max_int32);
//	CPPUNIT_TEST(test_Reg_mask_max_int64);
	CPPUNIT_TEST(test_Reg_mask_max_float);
	CPPUNIT_TEST(test_Reg_mask_max_double);

	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	template <typename T>
	void test_reg_max();
	void test_reg_max_int8();
	void test_reg_max_int16();
	void test_reg_max_int32();
	void test_reg_max_int64();
	void test_reg_max_float();
	void test_reg_max_double();

	template <typename T>
	void test_Reg_max();
	void test_Reg_max_int8();
	void test_Reg_max_int16();
	void test_Reg_max_int32();
	void test_Reg_max_int64();
	void test_Reg_max_float();
	void test_Reg_max_double();

	template <typename T>
	void test_reg_maskz_max();
	void test_reg_maskz_max_int8();
	void test_reg_maskz_max_int16();
	void test_reg_maskz_max_int32();
	void test_reg_maskz_max_int64();
	void test_reg_maskz_max_float();
	void test_reg_maskz_max_double();

	template <typename T>
	void test_Reg_maskz_max();
	void test_Reg_maskz_max_int8();
	void test_Reg_maskz_max_int16();
	void test_Reg_maskz_max_int32();
	void test_Reg_maskz_max_int64();
	void test_Reg_maskz_max_float();
	void test_Reg_maskz_max_double();

	template <typename T>
	void test_reg_mask_max();
	void test_reg_mask_max_int8();
	void test_reg_mask_max_int16();
	void test_reg_mask_max_int32();
	void test_reg_mask_max_int64();
	void test_reg_mask_max_float();
	void test_reg_mask_max_double();

	template <typename T>
	void test_Reg_mask_max();
	void test_Reg_mask_max_int8();
	void test_Reg_mask_max_int16();
	void test_Reg_mask_max_int32();
	void test_Reg_mask_max_int64();
	void test_Reg_mask_max_float();
	void test_Reg_mask_max_double();
};

#endif // MAXTEST_HPP_