/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * massF9.c
 *
 * Code generation for function 'massF9'
 *
 */

/* Include files */
#include <string.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "EOM.h"
#include "massF9.h"
#include "error.h"
#include "sqrt.h"
#include "EOM_data.h"

/* Variable Definitions */
static emlrtRSInfo si_emlrtRSI = { 16, /* lineNo */
  "massF9",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/massF9.m"/* pathName */
};

static emlrtRSInfo ti_emlrtRSI = { 17, /* lineNo */
  "massF9",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/massF9.m"/* pathName */
};

static emlrtRSInfo ui_emlrtRSI = { 18, /* lineNo */
  "massF9",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/massF9.m"/* pathName */
};

static emlrtRSInfo vi_emlrtRSI = { 20, /* lineNo */
  "massF9",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/massF9.m"/* pathName */
};

static emlrtRSInfo wi_emlrtRSI = { 23, /* lineNo */
  "massF9",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/massF9.m"/* pathName */
};

static emlrtRSInfo xi_emlrtRSI = { 31, /* lineNo */
  "massF9",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/massF9.m"/* pathName */
};

/* Function Definitions */
void massF9(const emlrtStack *sp, const real_T in2[206], real_T out2[546],
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

  /* MASSF9 */
  /*     [OUT1,OUT2,OUT3,OUT4] = MASSF9(IN1,IN2,S) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.2. */
  /*     09-Jan-2019 03:09:36 */
  st.site = &si_emlrtRSI;
  b_st.site = &tg_emlrtRSI;
  t2 = in2[45] * in2[45];
  st.site = &ti_emlrtRSI;
  b_st.site = &tg_emlrtRSI;
  t3 = in2[46] * in2[46];
  st.site = &ui_emlrtRSI;
  b_st.site = &tg_emlrtRSI;
  t4 = in2[47] * in2[47];
  t5 = ((-t2 - t3) - t4) + 1.0;
  t9 = t5;
  st.site = &vi_emlrtRSI;
  b_sqrt(&st, &t9);
  t6 = 1.0 / t9;
  t7 = in2[47] * 2.0;
  t28 = in2[45] * in2[46];
  t8 = t28 * t6 * 2.0;
  t9 = t5;
  st.site = &wi_emlrtRSI;
  b_sqrt(&st, &t9);
  t9 *= 2.0;
  t11 = in2[45] * in2[47] * t6 * 2.0;
  t12 = in2[45] * 2.0;
  t13 = in2[46] * in2[47] * t6 * 2.0;
  memset(&out2[0], 0, 252U * sizeof(real_T));
  out2[252] = 1.0;
  out2[253] = 0.0;
  out2[254] = 0.0;
  out2[255] = 0.0;
  out2[256] = 0.0;
  out2[257] = 0.0;
  out2[258] = 0.0;
  out2[259] = 1.0;
  out2[260] = 0.0;
  out2[261] = 0.0;
  out2[262] = 0.0;
  out2[263] = 0.0;
  out2[264] = 0.0;
  out2[265] = 0.0;
  out2[266] = 1.0;
  out2[267] = 0.0;
  out2[268] = 0.0;
  out2[269] = 0.0;
  out2[270] = 0.0;
  out2[271] = 0.0;
  out2[272] = 0.0;
  out2[273] = t9 + t2 * t6 * 2.0;
  out2[274] = -t7 + t8;
  out2[275] = in2[46] * 2.0 + t11;
  out2[276] = 0.0;
  out2[277] = 0.0;
  out2[278] = 0.0;
  out2[279] = t7 + t8;
  out2[280] = t9 + t3 * t6 * 2.0;
  out2[281] = -t12 + t13;
  out2[282] = 0.0;
  out2[283] = 0.0;
  out2[284] = 0.0;
  out2[285] = in2[46] * -2.0 + t11;
  out2[286] = t12 + t13;
  out2[287] = t9 + t4 * t6 * 2.0;
  memset(&out2[288], 0, 258U * sizeof(real_T));
  st.site = &xi_emlrtRSI;
  b_st.site = &tg_emlrtRSI;
  if (t5 < 0.0) {
    c_st.site = &ug_emlrtRSI;
    error(&c_st);
  }

  t14 = 1.0 / muDoubleScalarPower(t5, 1.5);
  t15 = in2[46] * t6 * 2.0;
  t16 = in2[46] * t2 * t14 * 2.0;
  t17 = in2[45] * t6 * 2.0;
  t18 = t28 * in2[47] * t14 * 2.0;
  t9 = in2[47] * t6 * 2.0;
  t11 = in2[47] * t2 * t14 * 2.0;
  t12 = t15 + t16;
  t13 = in2[45] * t3 * t14 * 2.0;
  t7 = t17 + t13;
  t8 = in2[47] * t3 * t14 * 2.0;
  t5 = t9 + t11;
  t28 = in2[45] * t4 * t14 * 2.0;
  t6 = t9 + t8;
  t30 = in2[46] * t4 * t14 * 2.0;
  t31 = t17 + t28;
  t32 = t15 + t30;
  memset(&out3[0], 0, 273U * sizeof(real_T));
  out3[273] = (t12 * in2[149] + t5 * in2[150]) + in2[148] * (t17 + in2[45] * t2 *
    t14 * 2.0);
  out3[274] = (t12 * in2[148] + (t18 + 2.0) * in2[150]) - in2[149] * (t17 - t13);
  out3[275] = ((t18 - 2.0) * in2[149] + t5 * in2[148]) - in2[150] * (t17 - t28);
  out3[276] = 0.0;
  out3[277] = 0.0;
  out3[278] = 0.0;
  out3[279] = (t7 * in2[149] + (t18 - 2.0) * in2[150]) - in2[148] * (t15 - t16);
  out3[280] = (t7 * in2[148] + t6 * in2[150]) + in2[149] * (t15 + in2[46] * t3 *
    t14 * 2.0);
  out3[281] = ((t18 + 2.0) * in2[148] + t6 * in2[149]) - in2[150] * (t15 - t30);
  out3[282] = 0.0;
  out3[283] = 0.0;
  out3[284] = 0.0;
  out3[285] = ((t18 + 2.0) * in2[149] + t31 * in2[150]) - in2[148] * (t9 - t11);
  out3[286] = ((t18 - 2.0) * in2[148] + t32 * in2[150]) - in2[149] * (t9 - t8);
  out3[287] = (t31 * in2[148] + t32 * in2[149]) + in2[150] * (t9 + in2[47] * t4 *
    t14 * 2.0);
  memset(&out3[288], 0, 258U * sizeof(real_T));
}

/* End of code generation (massF9.c) */
