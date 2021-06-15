/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * massF8.c
 *
 * Code generation for function 'massF8'
 *
 */

/* Include files */
#include <string.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "EOM.h"
#include "massF8.h"
#include "error.h"
#include "sqrt.h"
#include "EOM_data.h"

/* Variable Definitions */
static emlrtRSInfo mi_emlrtRSI = { 16, /* lineNo */
  "massF8",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/massF8.m"/* pathName */
};

static emlrtRSInfo ni_emlrtRSI = { 17, /* lineNo */
  "massF8",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/massF8.m"/* pathName */
};

static emlrtRSInfo oi_emlrtRSI = { 18, /* lineNo */
  "massF8",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/massF8.m"/* pathName */
};

static emlrtRSInfo pi_emlrtRSI = { 20, /* lineNo */
  "massF8",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/massF8.m"/* pathName */
};

static emlrtRSInfo qi_emlrtRSI = { 23, /* lineNo */
  "massF8",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/massF8.m"/* pathName */
};

static emlrtRSInfo ri_emlrtRSI = { 31, /* lineNo */
  "massF8",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/massF8.m"/* pathName */
};

/* Function Definitions */
void massF8(const emlrtStack *sp, const real_T in2[206], real_T out2[546],
            real_T out3[546], real_T out4[6])
{
  int32_T i;
  real_T t2;
  real_T t3;
  real_T t4;
  real_T t5;
  real_T t9;
  real_T t6;
  real_T t7;
  real_T t28;
  real_T t8;
  real_T t11;
  real_T t12;
  real_T t13;
  real_T t14;
  real_T t15;
  real_T t16;
  real_T t17;
  real_T t18;
  real_T t30;
  real_T t31;
  real_T t32;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  for (i = 0; i < 6; i++) {
    out4[i] = dv0[i];
  }

  /* MASSF8 */
  /*     [OUT1,OUT2,OUT3,OUT4] = MASSF8(IN1,IN2,S) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.2. */
  /*     09-Jan-2019 03:09:38 */
  st.site = &mi_emlrtRSI;
  b_st.site = &tg_emlrtRSI;
  t2 = in2[39] * in2[39];
  st.site = &ni_emlrtRSI;
  b_st.site = &tg_emlrtRSI;
  t3 = in2[40] * in2[40];
  st.site = &oi_emlrtRSI;
  b_st.site = &tg_emlrtRSI;
  t4 = in2[41] * in2[41];
  t5 = ((-t2 - t3) - t4) + 1.0;
  t9 = t5;
  st.site = &pi_emlrtRSI;
  b_sqrt(&st, &t9);
  t6 = 1.0 / t9;
  t7 = in2[41] * 2.0;
  t28 = in2[39] * in2[40];
  t8 = t28 * t6 * 2.0;
  t9 = t5;
  st.site = &qi_emlrtRSI;
  b_sqrt(&st, &t9);
  t9 *= 2.0;
  t11 = in2[39] * in2[41] * t6 * 2.0;
  t12 = in2[39] * 2.0;
  t13 = in2[40] * in2[41] * t6 * 2.0;
  memset(&out2[0], 0, 216U * sizeof(real_T));
  out2[216] = 1.0;
  out2[217] = 0.0;
  out2[218] = 0.0;
  out2[219] = 0.0;
  out2[220] = 0.0;
  out2[221] = 0.0;
  out2[222] = 0.0;
  out2[223] = 1.0;
  out2[224] = 0.0;
  out2[225] = 0.0;
  out2[226] = 0.0;
  out2[227] = 0.0;
  out2[228] = 0.0;
  out2[229] = 0.0;
  out2[230] = 1.0;
  out2[231] = 0.0;
  out2[232] = 0.0;
  out2[233] = 0.0;
  out2[234] = 0.0;
  out2[235] = 0.0;
  out2[236] = 0.0;
  out2[237] = t9 + t2 * t6 * 2.0;
  out2[238] = -t7 + t8;
  out2[239] = in2[40] * 2.0 + t11;
  out2[240] = 0.0;
  out2[241] = 0.0;
  out2[242] = 0.0;
  out2[243] = t7 + t8;
  out2[244] = t9 + t3 * t6 * 2.0;
  out2[245] = -t12 + t13;
  out2[246] = 0.0;
  out2[247] = 0.0;
  out2[248] = 0.0;
  out2[249] = in2[40] * -2.0 + t11;
  out2[250] = t12 + t13;
  out2[251] = t9 + t4 * t6 * 2.0;
  memset(&out2[252], 0, 294U * sizeof(real_T));
  st.site = &ri_emlrtRSI;
  b_st.site = &tg_emlrtRSI;
  if (t5 < 0.0) {
    c_st.site = &ug_emlrtRSI;
    error(&c_st);
  }

  t14 = 1.0 / muDoubleScalarPower(t5, 1.5);
  t15 = in2[40] * t6 * 2.0;
  t16 = in2[40] * t2 * t14 * 2.0;
  t17 = in2[39] * t6 * 2.0;
  t18 = t28 * in2[41] * t14 * 2.0;
  t9 = in2[41] * t6 * 2.0;
  t11 = in2[41] * t2 * t14 * 2.0;
  t12 = t15 + t16;
  t13 = in2[39] * t3 * t14 * 2.0;
  t7 = t17 + t13;
  t8 = in2[41] * t3 * t14 * 2.0;
  t5 = t9 + t11;
  t28 = in2[39] * t4 * t14 * 2.0;
  t6 = t9 + t8;
  t30 = in2[40] * t4 * t14 * 2.0;
  t31 = t17 + t28;
  t32 = t15 + t30;
  memset(&out3[0], 0, 237U * sizeof(real_T));
  out3[237] = (t12 * in2[143] + t5 * in2[144]) + in2[142] * (t17 + in2[39] * t2 *
    t14 * 2.0);
  out3[238] = (t12 * in2[142] + (t18 + 2.0) * in2[144]) - in2[143] * (t17 - t13);
  out3[239] = ((t18 - 2.0) * in2[143] + t5 * in2[142]) - in2[144] * (t17 - t28);
  out3[240] = 0.0;
  out3[241] = 0.0;
  out3[242] = 0.0;
  out3[243] = (t7 * in2[143] + (t18 - 2.0) * in2[144]) - in2[142] * (t15 - t16);
  out3[244] = (t7 * in2[142] + t6 * in2[144]) + in2[143] * (t15 + in2[40] * t3 *
    t14 * 2.0);
  out3[245] = ((t18 + 2.0) * in2[142] + t6 * in2[143]) - in2[144] * (t15 - t30);
  out3[246] = 0.0;
  out3[247] = 0.0;
  out3[248] = 0.0;
  out3[249] = ((t18 + 2.0) * in2[143] + t31 * in2[144]) - in2[142] * (t9 - t11);
  out3[250] = ((t18 - 2.0) * in2[142] + t32 * in2[144]) - in2[143] * (t9 - t8);
  out3[251] = (t31 * in2[142] + t32 * in2[143]) + in2[144] * (t9 + in2[41] * t4 *
    t14 * 2.0);
  memset(&out3[252], 0, 294U * sizeof(real_T));
}

/* End of code generation (massF8.c) */
