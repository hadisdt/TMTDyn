/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * massF3.c
 *
 * Code generation for function 'massF3'
 *
 */

/* Include files */
#include <string.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "EOM.h"
#include "massF3.h"
#include "error.h"
#include "EOM_data.h"

/* Variable Definitions */
static emlrtRSInfo xb_emlrtRSI = { 23, /* lineNo */
  "massF3",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/massF3.m"/* pathName */
};

static emlrtRSInfo yb_emlrtRSI = { 25, /* lineNo */
  "massF3",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/massF3.m"/* pathName */
};

static emlrtRSInfo ac_emlrtRSI = { 26, /* lineNo */
  "massF3",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/massF3.m"/* pathName */
};

static emlrtRSInfo bc_emlrtRSI = { 33, /* lineNo */
  "massF3",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/massF3.m"/* pathName */
};

static emlrtRSInfo cc_emlrtRSI = { 34, /* lineNo */
  "massF3",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/massF3.m"/* pathName */
};

static emlrtRSInfo dc_emlrtRSI = { 40, /* lineNo */
  "massF3",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/massF3.m"/* pathName */
};

static emlrtRSInfo ec_emlrtRSI = { 41, /* lineNo */
  "massF3",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/massF3.m"/* pathName */
};

static emlrtRSInfo fc_emlrtRSI = { 42, /* lineNo */
  "massF3",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/massF3.m"/* pathName */
};

static emlrtRSInfo gc_emlrtRSI = { 44, /* lineNo */
  "massF3",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/massF3.m"/* pathName */
};

static emlrtRSInfo hc_emlrtRSI = { 47, /* lineNo */
  "massF3",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/massF3.m"/* pathName */
};

static emlrtRSInfo ic_emlrtRSI = { 55, /* lineNo */
  "massF3",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/massF3.m"/* pathName */
};

/* Function Definitions */
void massF3(const emlrtStack *sp, const real_T in1[34], const real_T in2[36],
            real_T out1[36], real_T out2[108], real_T out3[108], real_T out4[6])
{
  real_T t4;
  real_T t5;
  real_T t7;
  real_T t16;
  real_T t20;
  real_T t22;
  real_T t17;
  real_T t18;
  real_T t19;
  real_T t21;
  real_T t43;
  real_T t23;
  real_T t29;
  real_T t30;
  real_T t31;
  real_T t32;
  real_T t33;
  real_T t45;
  real_T t46;
  real_T t47;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;

  /* MASSF3 */
  /*     [OUT1,OUT2,OUT3,OUT4] = MASSF3(IN1,IN2,S) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.2. */
  /*     06-Jan-2019 18:49:28 */
  st.site = &xb_emlrtRSI;
  st.site = &yb_emlrtRSI;
  t4 = in1[2] * in1[2];
  st.site = &ac_emlrtRSI;
  t5 = in1[3] * in1[3];
  t7 = 1.0 / in1[33];
  st.site = &bc_emlrtRSI;
  st.site = &cc_emlrtRSI;
  t16 = t4 - t5;
  t20 = -in1[0] * ((in1[18] * in1[18] * 6.0 + t4) - t5) * 3.1415926535897931;
  out1[0] = t20;
  out1[1] = 0.0;
  out1[2] = 0.0;
  out1[3] = 0.0;
  out1[4] = 0.0;
  out1[5] = 0.0;
  out1[6] = 0.0;
  out1[7] = t20;
  out1[8] = 0.0;
  out1[9] = 0.0;
  out1[10] = 0.0;
  out1[11] = 0.0;
  out1[12] = 0.0;
  out1[13] = 0.0;
  out1[14] = t20;
  out1[15] = 0.0;
  out1[16] = 0.0;
  out1[17] = 0.0;
  out1[18] = 0.0;
  out1[19] = 0.0;
  out1[20] = 0.0;
  t22 = in1[4] * in1[0];
  t20 = t22 * (t7 * (t4 * 3.0 + t5 * 3.0) / 12.0 + in1[4] * in1[4] * (in1[33] *
    in1[33]) / 108.0) * t16 * 3.1415926535897931 * -0.33333333333333331;
  out1[21] = t20;
  out1[22] = 0.0;
  out1[23] = 0.0;
  out1[24] = 0.0;
  out1[25] = 0.0;
  out1[26] = 0.0;
  out1[27] = 0.0;
  out1[28] = t20;
  out1[29] = 0.0;
  out1[30] = 0.0;
  out1[31] = 0.0;
  out1[32] = 0.0;
  out1[33] = 0.0;
  out1[34] = 0.0;
  out1[35] = t22 * t7 * t16 * 3.1415926535897931 * (t4 / 2.0 + t5 / 2.0) *
    -0.33333333333333331;
  st.site = &dc_emlrtRSI;
  t17 = in2[15] * in2[15];
  st.site = &ec_emlrtRSI;
  t18 = in2[16] * in2[16];
  st.site = &fc_emlrtRSI;
  t19 = in2[17] * in2[17];
  t20 = ((-t17 - t18) - t19) + 1.0;
  st.site = &gc_emlrtRSI;
  if (t20 < 0.0) {
    b_st.site = &hb_emlrtRSI;
    error(&b_st);
  }

  t4 = muDoubleScalarSqrt(t20);
  t21 = 1.0 / t4;
  t22 = in2[17] * 2.0;
  t43 = in2[15] * in2[16];
  t23 = t43 * t21 * 2.0;
  st.site = &hc_emlrtRSI;
  t4 *= 2.0;
  t5 = in2[15] * in2[17] * t21 * 2.0;
  t7 = in2[15] * 2.0;
  t16 = in2[16] * in2[17] * t21 * 2.0;
  memset(&out2[0], 0, 72U * sizeof(real_T));
  out2[72] = 1.0;
  out2[73] = 0.0;
  out2[74] = 0.0;
  out2[75] = 0.0;
  out2[76] = 0.0;
  out2[77] = 0.0;
  out2[78] = 0.0;
  out2[79] = 1.0;
  out2[80] = 0.0;
  out2[81] = 0.0;
  out2[82] = 0.0;
  out2[83] = 0.0;
  out2[84] = 0.0;
  out2[85] = 0.0;
  out2[86] = 1.0;
  out2[87] = 0.0;
  out2[88] = 0.0;
  out2[89] = 0.0;
  out2[90] = 0.0;
  out2[91] = 0.0;
  out2[92] = 0.0;
  out2[93] = t4 + t17 * t21 * 2.0;
  out2[94] = -t22 + t23;
  out2[95] = in2[16] * 2.0 + t5;
  out2[96] = 0.0;
  out2[97] = 0.0;
  out2[98] = 0.0;
  out2[99] = t22 + t23;
  out2[100] = t4 + t18 * t21 * 2.0;
  out2[101] = -t7 + t16;
  out2[102] = 0.0;
  out2[103] = 0.0;
  out2[104] = 0.0;
  out2[105] = in2[16] * -2.0 + t5;
  out2[106] = t7 + t16;
  out2[107] = t4 + t19 * t21 * 2.0;
  st.site = &ic_emlrtRSI;
  t29 = 1.0 / muDoubleScalarPower(t20, 1.5);
  t30 = in2[16] * t21 * 2.0;
  t31 = in2[16] * t17 * t29 * 2.0;
  t32 = in2[15] * t21 * 2.0;
  t33 = t43 * in2[17] * t29 * 2.0;
  t4 = in2[17] * t21 * 2.0;
  t5 = in2[17] * t17 * t29 * 2.0;
  t7 = t30 + t31;
  t16 = in2[15] * t18 * t29 * 2.0;
  t20 = t32 + t16;
  t22 = in2[17] * t18 * t29 * 2.0;
  t23 = t4 + t5;
  t43 = in2[15] * t19 * t29 * 2.0;
  t21 = t4 + t22;
  t45 = in2[16] * t19 * t29 * 2.0;
  t46 = t32 + t43;
  t47 = t30 + t45;
  memset(&out3[0], 0, 93U * sizeof(real_T));
  out3[93] = (t7 * in2[34] + t23 * in2[35]) + in2[33] * (t32 + in2[15] * t17 *
    t29 * 2.0);
  out3[94] = (t7 * in2[33] + (t33 + 2.0) * in2[35]) - in2[34] * (t32 - t16);
  out3[95] = ((t33 - 2.0) * in2[34] + t23 * in2[33]) - in2[35] * (t32 - t43);
  out3[96] = 0.0;
  out3[97] = 0.0;
  out3[98] = 0.0;
  out3[99] = (t20 * in2[34] + (t33 - 2.0) * in2[35]) - in2[33] * (t30 - t31);
  out3[100] = (t20 * in2[33] + t21 * in2[35]) + in2[34] * (t30 + in2[16] * t18 *
    t29 * 2.0);
  out3[101] = ((t33 + 2.0) * in2[33] + t21 * in2[34]) - in2[35] * (t30 - t45);
  out3[102] = 0.0;
  out3[103] = 0.0;
  out3[104] = 0.0;
  out3[105] = ((t33 + 2.0) * in2[34] + t46 * in2[35]) - in2[33] * (t4 - t5);
  out3[106] = ((t33 - 2.0) * in2[33] + t47 * in2[35]) - in2[34] * (t4 - t22);
  out3[107] = (t46 * in2[33] + t47 * in2[34]) + in2[35] * (t4 + in2[17] * t19 *
    t29 * 2.0);
  out4[0] = in1[12];
  out4[1] = in1[13];
  out4[2] = in1[14];
  out4[3] = 0.0;
  out4[4] = 0.0;
  out4[5] = 0.0;
}

/* End of code generation (massF3.c) */