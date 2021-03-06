/***********
AUTHORS:  Michael Katelman, Vijay Ganesh, Trevor Hansen, Dan Liew

BEGIN DATE: Oct, 2008

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
**********************/

#include "stp/c_interface.h"
#include <gtest/gtest.h>

TEST(b4_c, one)
{
  VC vc = vc_createValidityChecker();
  //vc_setFlag(vc, 'v');
  //vc_setFlag(vc, 's');
  //vc_setFlag(vc, 'n');
  vc_setFlag(vc, 'd');

  // vc_push(vc);
  Expr e12866 = vc_varExpr(vc, "at", vc_bvType(vc, 5));
  Expr e12867 = e12866;
  Expr e12868 = vc_bvConstExprFromStr(vc, "10000");
  Expr e12869 = vc_eqExpr(vc, e12867, e12868);
  Expr e12870 = vc_varExpr(vc, "x", vc_bvType(vc, 8));
  Expr e12871 = e12870;
  Expr e12872 = vc_bvConstExprFromStr(vc, "00000000");
  Expr e12873 = vc_sbvGtExpr(vc, e12871, e12872);
  Expr e12874 = vc_andExpr(vc, e12869, e12873);
  Expr e12875 = vc_varExpr(vc, "lambda", vc_bvType(vc, 8));
  Expr e12876 = e12875;
  Expr e12877 = e12870;
  Expr e12878 = vc_iteExpr(vc, vc_bvBoolExtract(vc, e12876, 0),
                           vc_bvRightShiftExpr(vc, 1 << 0, e12877), e12877);
  Expr e12879 = vc_iteExpr(vc, vc_bvBoolExtract(vc, e12876, 1),
                           vc_bvRightShiftExpr(vc, 1 << 1, e12878), e12878);
  Expr e12880 = vc_iteExpr(vc, vc_bvBoolExtract(vc, e12876, 2),
                           vc_bvRightShiftExpr(vc, 1 << 2, e12879), e12879);
  Expr e12881 = vc_bvConstExprFromStr(vc, "00000001");
  Expr e12882 = vc_eqExpr(vc, e12880, e12881);
  Expr e12883 = vc_impliesExpr(vc, e12874, e12882);
  Expr e12884 = e12866;
  Expr e12885 = vc_eqExpr(vc, vc_bvExtract(vc, e12884, 0, 0),
                          vc_bvConstExprFromStr(vc, "1"));
  Expr e12886 = vc_varExpr(vc, "k", vc_bvType(vc, 8));
  Expr e12887 = e12886;
  Expr e12888 = vc_eqExpr(vc, vc_bvExtract(vc, e12887, 7, 7),
                          vc_bvConstExprFromStr(vc, "1"));
  Expr e12889 = vc_notExpr(vc, e12888);
  Expr e12890 = e12866;
  Expr e12891 = vc_eqExpr(vc, vc_bvExtract(vc, e12890, 4, 4),
                          vc_bvConstExprFromStr(vc, "1"));
  Expr e12892 = vc_orExpr(vc, e12889, e12891);
  Expr e12893 = vc_orExpr(vc, e12885, e12892);
  Expr e12894 = vc_trueExpr(vc);
  Expr e12895 = vc_andExpr(vc, e12893, e12894);
  Expr e12896 = vc_andExpr(vc, e12883, e12895);
  Expr e12897 = e12866;
  Expr e12898 = vc_bvConstExprFromStr(vc, "00001");
  Expr e12899 = vc_eqExpr(vc, e12897, e12898);
  Expr e12900 = e12886;
  Expr e12901 = vc_bvConstExprFromStr(vc, "00000000");
  Expr e12902 = vc_sbvGeExpr(vc, e12900, e12901);
  Expr e12903 = vc_andExpr(vc, e12899, e12902);
  Expr e12904 = vc_varExpr(vc, "_at", vc_bvType(vc, 5));
  Expr e12905 = e12904;
  Expr e12906 = vc_bvConstExprFromStr(vc, "00010");
  Expr e12907 = vc_eqExpr(vc, e12905, e12906);
  Expr e12908 = vc_varExpr(vc, "_lambda", vc_bvType(vc, 8));
  Expr e12909 = e12908;
  Expr e12910 = e12875;
  Expr e12911 = vc_eqExpr(vc, e12909, e12910);
  Expr e12912 = vc_andExpr(vc, e12907, e12911);
  Expr e12913 = vc_varExpr(vc, "_x", vc_bvType(vc, 8));
  Expr e12914 = e12913;
  Expr e12915 = e12870;
  Expr e12916 = vc_eqExpr(vc, e12914, e12915);
  Expr e12917 = vc_andExpr(vc, e12912, e12916);
  Expr e12918 = vc_varExpr(vc, "_y", vc_bvType(vc, 8));
  Expr e12919 = e12918;
  Expr e12920 = vc_varExpr(vc, "y", vc_bvType(vc, 8));
  Expr e12921 = e12920;
  Expr e12922 = vc_eqExpr(vc, e12919, e12921);
  Expr e12923 = vc_andExpr(vc, e12917, e12922);
  Expr e12924 = vc_varExpr(vc, "_k", vc_bvType(vc, 8));
  Expr e12925 = e12924;
  Expr e12926 = e12886;
  Expr e12927 = vc_eqExpr(vc, e12925, e12926);
  Expr e12928 = vc_andExpr(vc, e12923, e12927);
  Expr e12929 = vc_andExpr(vc, e12903, e12928);
  Expr e12930 = e12866;
  Expr e12931 = vc_bvConstExprFromStr(vc, "00001");
  Expr e12932 = vc_eqExpr(vc, e12930, e12931);
  Expr e12933 = e12886;
  Expr e12934 = vc_bvConstExprFromStr(vc, "00000000");
  Expr e12935 = vc_sbvGeExpr(vc, e12933, e12934);
  Expr e12936 = vc_notExpr(vc, e12935);
  Expr e12937 = vc_andExpr(vc, e12932, e12936);
  Expr e12938 = e12904;
  Expr e12939 = vc_bvConstExprFromStr(vc, "10000");
  Expr e12940 = vc_eqExpr(vc, e12938, e12939);
  Expr e12941 = e12908;
  Expr e12942 = e12875;
  Expr e12943 = vc_eqExpr(vc, e12941, e12942);
  Expr e12944 = vc_andExpr(vc, e12940, e12943);
  Expr e12945 = e12913;
  Expr e12946 = e12870;
  Expr e12947 = vc_eqExpr(vc, e12945, e12946);
  Expr e12948 = vc_andExpr(vc, e12944, e12947);
  Expr e12949 = e12918;
  Expr e12950 = e12920;
  Expr e12951 = vc_eqExpr(vc, e12949, e12950);
  Expr e12952 = vc_andExpr(vc, e12948, e12951);
  Expr e12953 = e12924;
  Expr e12954 = e12886;
  Expr e12955 = vc_eqExpr(vc, e12953, e12954);
  Expr e12956 = vc_andExpr(vc, e12952, e12955);
  Expr e12957 = vc_andExpr(vc, e12937, e12956);
  Expr e12958 = vc_orExpr(vc, e12929, e12957);
  Expr e12959 = e12866;
  Expr e12960 = vc_bvConstExprFromStr(vc, "00010");
  Expr e12961 = vc_eqExpr(vc, e12959, e12960);
  Expr e12962 = e12920;
  Expr e12963 = e12886;
  Expr e12964 = vc_bvLeftShiftExpr(vc, 3, e12963);
  Expr e12965 = vc_bvConstExprFromStr(vc, "111100001100110010101010");
  Expr e12966 = vc_iteExpr(vc, vc_bvBoolExtract(vc, e12964, 0),
                           vc_bvRightShiftExpr(vc, 1 << 0, e12965), e12965);
  Expr e12967 = vc_iteExpr(vc, vc_bvBoolExtract(vc, e12964, 1),
                           vc_bvRightShiftExpr(vc, 1 << 1, e12966), e12966);
  Expr e12968 = vc_iteExpr(vc, vc_bvBoolExtract(vc, e12964, 2),
                           vc_bvRightShiftExpr(vc, 1 << 2, e12967), e12967);
  Expr e12969 = vc_iteExpr(vc, vc_bvBoolExtract(vc, e12964, 3),
                           vc_bvRightShiftExpr(vc, 1 << 3, e12968), e12968);
  Expr e12970 = vc_bvExtract(vc, e12969, 7, 0);
  Expr e12971 = vc_bvAndExpr(vc, e12962, e12970);
  Expr e12972 = vc_bvConstExprFromStr(vc, "00000000");
  Expr e12973 = vc_eqExpr(vc, e12971, e12972);
  Expr e12974 = vc_notExpr(vc, e12973);
  Expr e12975 = vc_andExpr(vc, e12961, e12974);
  Expr e12976 = e12904;
  Expr e12977 = vc_bvConstExprFromStr(vc, "00100");
  Expr e12978 = vc_eqExpr(vc, e12976, e12977);
  Expr e12979 = e12908;
  Expr e12980 = e12875;
  Expr e12981 = vc_eqExpr(vc, e12979, e12980);
  Expr e12982 = vc_andExpr(vc, e12978, e12981);
  Expr e12983 = e12913;
  Expr e12984 = e12870;
  Expr e12985 = vc_eqExpr(vc, e12983, e12984);
  Expr e12986 = vc_andExpr(vc, e12982, e12985);
  Expr e12987 = e12918;
  Expr e12988 = e12920;
  Expr e12989 = vc_eqExpr(vc, e12987, e12988);
  Expr e12990 = vc_andExpr(vc, e12986, e12989);
  Expr e12991 = e12924;
  Expr e12992 = e12886;
  Expr e12993 = vc_eqExpr(vc, e12991, e12992);
  Expr e12994 = vc_andExpr(vc, e12990, e12993);
  Expr e12995 = vc_andExpr(vc, e12975, e12994);
  Expr e12996 = vc_orExpr(vc, e12958, e12995);
  Expr e12997 = e12866;
  Expr e12998 = vc_bvConstExprFromStr(vc, "00010");
  Expr e12999 = vc_eqExpr(vc, e12997, e12998);
  Expr e13000 = e12920;
  Expr e13001 = e12886;
  Expr e13002 = vc_bvLeftShiftExpr(vc, 3, e13001);
  Expr e13003 = vc_bvConstExprFromStr(vc, "111100001100110010101010");
  Expr e13004 = vc_iteExpr(vc, vc_bvBoolExtract(vc, e13002, 0),
                           vc_bvRightShiftExpr(vc, 1 << 0, e13003), e13003);
  Expr e13005 = vc_iteExpr(vc, vc_bvBoolExtract(vc, e13002, 1),
                           vc_bvRightShiftExpr(vc, 1 << 1, e13004), e13004);
  Expr e13006 = vc_iteExpr(vc, vc_bvBoolExtract(vc, e13002, 2),
                           vc_bvRightShiftExpr(vc, 1 << 2, e13005), e13005);
  Expr e13007 = vc_iteExpr(vc, vc_bvBoolExtract(vc, e13002, 3),
                           vc_bvRightShiftExpr(vc, 1 << 3, e13006), e13006);
  Expr e13008 = vc_bvExtract(vc, e13007, 7, 0);
  Expr e13009 = vc_bvAndExpr(vc, e13000, e13008);
  Expr e13010 = vc_bvConstExprFromStr(vc, "00000000");
  Expr e13011 = vc_eqExpr(vc, e13009, e13010);
  Expr e13012 = vc_andExpr(vc, e12999, e13011);
  Expr e13013 = e12904;
  Expr e13014 = vc_bvConstExprFromStr(vc, "01000");
  Expr e13015 = vc_eqExpr(vc, e13013, e13014);
  Expr e13016 = e12908;
  Expr e13017 = e12875;
  Expr e13018 = vc_eqExpr(vc, e13016, e13017);
  Expr e13019 = vc_andExpr(vc, e13015, e13018);
  Expr e13020 = e12913;
  Expr e13021 = e12870;
  Expr e13022 = vc_eqExpr(vc, e13020, e13021);
  Expr e13023 = vc_andExpr(vc, e13019, e13022);
  Expr e13024 = e12918;
  Expr e13025 = e12920;
  Expr e13026 = vc_eqExpr(vc, e13024, e13025);
  Expr e13027 = vc_andExpr(vc, e13023, e13026);
  Expr e13028 = e12924;
  Expr e13029 = e12886;
  Expr e13030 = vc_eqExpr(vc, e13028, e13029);
  Expr e13031 = vc_andExpr(vc, e13027, e13030);
  Expr e13032 = vc_andExpr(vc, e13012, e13031);
  Expr e13033 = vc_orExpr(vc, e12996, e13032);
  Expr e13034 = e12866;
  Expr e13035 = vc_bvConstExprFromStr(vc, "00100");
  Expr e13036 = vc_eqExpr(vc, e13034, e13035);
  Expr e13037 = e12908;
  Expr e13038 = e12875;
  Expr e13039 = e12886;
  Expr e13040 = vc_bvConstExprFromStr(vc, "00000001");
  Expr e13041 = vc_iteExpr(
      vc, vc_bvBoolExtract(vc, e13039, 0),
      vc_bvExtract(vc, vc_bvLeftShiftExpr(vc, 1, e13040), 8, 1), e13040);
  Expr e13042 = vc_iteExpr(
      vc, vc_bvBoolExtract(vc, e13039, 1),
      vc_bvExtract(vc, vc_bvLeftShiftExpr(vc, 2, e13041), 9, 2), e13041);
  Expr e13043 = vc_iteExpr(
      vc, vc_bvBoolExtract(vc, e13039, 2),
      vc_bvExtract(vc, vc_bvLeftShiftExpr(vc, 4, e13042), 11, 4), e13042);
  Expr e13044 = vc_bvPlusExpr(vc, 8, e13038, e13043);
  Expr e13045 = vc_eqExpr(vc, e13037, e13044);
  Expr e13046 = e12918;
  Expr e13047 = e12886;
  Expr e13048 = vc_bvConstExprFromStr(vc, "00000001");
  Expr e13049 = vc_iteExpr(
      vc, vc_bvBoolExtract(vc, e13047, 0),
      vc_bvExtract(vc, vc_bvLeftShiftExpr(vc, 1, e13048), 8, 1), e13048);
  Expr e13050 = vc_iteExpr(
      vc, vc_bvBoolExtract(vc, e13047, 1),
      vc_bvExtract(vc, vc_bvLeftShiftExpr(vc, 2, e13049), 9, 2), e13049);
  Expr e13051 = vc_iteExpr(
      vc, vc_bvBoolExtract(vc, e13047, 2),
      vc_bvExtract(vc, vc_bvLeftShiftExpr(vc, 4, e13050), 11, 4), e13050);
  Expr e13052 = e12920;
  Expr e13053 = vc_iteExpr(vc, vc_bvBoolExtract(vc, e13051, 0),
                           vc_bvRightShiftExpr(vc, 1 << 0, e13052), e13052);
  Expr e13054 = vc_iteExpr(vc, vc_bvBoolExtract(vc, e13051, 1),
                           vc_bvRightShiftExpr(vc, 1 << 1, e13053), e13053);
  Expr e13055 = vc_iteExpr(vc, vc_bvBoolExtract(vc, e13051, 2),
                           vc_bvRightShiftExpr(vc, 1 << 2, e13054), e13054);
  Expr e13056 = vc_eqExpr(vc, e13046, e13055);
  Expr e13057 = vc_andExpr(vc, e13045, e13056);
  Expr e13058 = e12904;
  Expr e13059 = vc_bvConstExprFromStr(vc, "01000");
  Expr e13060 = vc_eqExpr(vc, e13058, e13059);
  Expr e13061 = vc_andExpr(vc, e13057, e13060);
  Expr e13062 = e12913;
  Expr e13063 = e12870;
  Expr e13064 = vc_eqExpr(vc, e13062, e13063);
  Expr e13065 = vc_andExpr(vc, e13061, e13064);
  Expr e13066 = e12924;
  Expr e13067 = e12886;
  Expr e13068 = vc_eqExpr(vc, e13066, e13067);
  Expr e13069 = vc_andExpr(vc, e13065, e13068);
  Expr e13070 = vc_andExpr(vc, e13036, e13069);
  Expr e13071 = vc_orExpr(vc, e13033, e13070);
  Expr e13072 = e12866;
  Expr e13073 = vc_bvConstExprFromStr(vc, "01000");
  Expr e13074 = vc_eqExpr(vc, e13072, e13073);
  Expr e13075 = e12924;
  Expr e13076 = e12886;
  Expr e13077 = vc_bvConstExprFromStr(vc, "00000001");
  Expr e13078 = vc_bvMinusExpr(vc, 8, e13076, e13077);
  Expr e13079 = vc_eqExpr(vc, e13075, e13078);
  Expr e13080 = e12904;
  Expr e13081 = vc_bvConstExprFromStr(vc, "00001");
  Expr e13082 = vc_eqExpr(vc, e13080, e13081);
  Expr e13083 = vc_andExpr(vc, e13079, e13082);
  Expr e13084 = e12908;
  Expr e13085 = e12875;
  Expr e13086 = vc_eqExpr(vc, e13084, e13085);
  Expr e13087 = vc_andExpr(vc, e13083, e13086);
  Expr e13088 = e12913;
  Expr e13089 = e12870;
  Expr e13090 = vc_eqExpr(vc, e13088, e13089);
  Expr e13091 = vc_andExpr(vc, e13087, e13090);
  Expr e13092 = e12918;
  Expr e13093 = e12920;
  Expr e13094 = vc_eqExpr(vc, e13092, e13093);
  Expr e13095 = vc_andExpr(vc, e13091, e13094);
  Expr e13096 = vc_andExpr(vc, e13074, e13095);
  Expr e13097 = vc_orExpr(vc, e13071, e13096);
  Expr e13098 = e12866;
  Expr e13099 = vc_bvConstExprFromStr(vc, "10000");
  Expr e13100 = vc_eqExpr(vc, e13098, e13099);
  Expr e13101 = e12904;
  Expr e13102 = e12866;
  Expr e13103 = vc_eqExpr(vc, e13101, e13102);
  Expr e13104 = e12908;
  Expr e13105 = e12875;
  Expr e13106 = vc_eqExpr(vc, e13104, e13105);
  Expr e13107 = vc_andExpr(vc, e13103, e13106);
  Expr e13108 = e12913;
  Expr e13109 = e12870;
  Expr e13110 = vc_eqExpr(vc, e13108, e13109);
  Expr e13111 = vc_andExpr(vc, e13107, e13110);
  Expr e13112 = e12918;
  Expr e13113 = e12920;
  Expr e13114 = vc_eqExpr(vc, e13112, e13113);
  Expr e13115 = vc_andExpr(vc, e13111, e13114);
  Expr e13116 = e12924;
  Expr e13117 = e12886;
  Expr e13118 = vc_eqExpr(vc, e13116, e13117);
  Expr e13119 = vc_andExpr(vc, e13115, e13118);
  Expr e13120 = vc_andExpr(vc, e13100, e13119);
  Expr e13121 = vc_orExpr(vc, e13097, e13120);
  Expr e13122 = vc_andExpr(vc, e12896, e13121);
  Expr e13123 = e12886;
  Expr e13124 = vc_eqExpr(vc, vc_bvExtract(vc, e13123, 7, 7),
                          vc_bvConstExprFromStr(vc, "1"));
  Expr e13125 = vc_notExpr(vc, e13124);
  Expr e13126 = e12924;
  Expr e13127 = vc_eqExpr(vc, vc_bvExtract(vc, e13126, 7, 7),
                          vc_bvConstExprFromStr(vc, "1"));
  Expr e13128 = vc_notExpr(vc, e13127);
  Expr e13129 = vc_notExpr(vc, e13128);
  Expr e13130 = vc_andExpr(vc, e13125, e13129);
  Expr e13131 = vc_andExpr(vc, e13122, e13130);
  vc_assertFormula(vc, e13131);
  // vc_push(vc);
  Expr e13132 = vc_falseExpr(vc);
  int ret = vc_query(vc, e13132);
  ASSERT_FALSE(ret);
  // vc_pop(vc);
  // vc_pop(vc);
  vc_Destroy(vc);
  // FIXME: Actually test something
  // ASSERT_TRUE(false && "FIXME: Actually test something");
}
