/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * massF1.c
 *
 * Code generation for function 'massF1'
 *
 */

/* Include files */
#include <string.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "EOM_eq.h"
#include "massF1.h"
#include "error.h"
#include "EOM_eq_data.h"

/* Variable Definitions */
static emlrtRSInfo r_emlrtRSI = { 17,  /* lineNo */
  "massF1",                            /* fcnName */
  "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v1.0/Rods/1. STIFF-FLOP/code/massF1.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 22,  /* lineNo */
  "massF1",                            /* fcnName */
  "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v1.0/Rods/1. STIFF-FLOP/code/massF1.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 23,  /* lineNo */
  "massF1",                            /* fcnName */
  "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v1.0/Rods/1. STIFF-FLOP/code/massF1.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 24,  /* lineNo */
  "massF1",                            /* fcnName */
  "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v1.0/Rods/1. STIFF-FLOP/code/massF1.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 26,  /* lineNo */
  "massF1",                            /* fcnName */
  "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v1.0/Rods/1. STIFF-FLOP/code/massF1.m"/* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 29,  /* lineNo */
  "massF1",                            /* fcnName */
  "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v1.0/Rods/1. STIFF-FLOP/code/massF1.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 37,  /* lineNo */
  "massF1",                            /* fcnName */
  "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v1.0/Rods/1. STIFF-FLOP/code/massF1.m"/* pathName */
};

/* Function Definitions */
void massF1(const emlrtStack *sp, const real_T in1[34], const real_T in2[12],
            real_T out1[36], real_T out2[36], real_T out3[36], real_T out4[6])
{
  int32_T i;
  real_T t2;
  real_T t6;
  real_T t7;
  real_T t8;
  real_T t9;
  real_T t10;
  real_T t11;
  real_T t12;
  real_T t33;
  real_T t13;
  real_T t17;
  real_T t18;
  real_T t19;
  real_T t20;
  real_T t21;
  real_T t22;
  real_T t23;
  real_T t35;
  real_T t36;
  real_T t37;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  for (i = 0; i < 6; i++) {
    out4[i] = dv0[i];
  }

  /* MASSF1 */
  /*     [OUT1,OUT2,OUT3,OUT4] = MASSF1(IN1,IN2,S) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.2. */
  /*     15-May-2019 14:15:52 */
  t2 = 1.0 / in1[33];
  st.site = &r_emlrtRSI;
  t6 = t2 * 1.7155954737915039E-6 + in1[33] * in1[33] * 8.1000730585056838E-6;
  out1[0] = 0.028159665750452111;
  out1[1] = 0.0;
  out1[2] = 0.0;
  out1[3] = 0.0;
  out1[4] = 0.0;
  out1[5] = 0.0;
  out1[6] = 0.0;
  out1[7] = 0.028159665750452111;
  out1[8] = 0.0;
  out1[9] = 0.0;
  out1[10] = 0.0;
  out1[11] = 0.0;
  out1[12] = 0.0;
  out1[13] = 0.0;
  out1[14] = 0.028159665750452111;
  out1[15] = 0.0;
  out1[16] = 0.0;
  out1[17] = 0.0;
  out1[18] = 0.0;
  out1[19] = 0.0;
  out1[20] = 0.0;
  out1[21] = t6;
  out1[22] = 0.0;
  out1[23] = 0.0;
  out1[24] = 0.0;
  out1[25] = 0.0;
  out1[26] = 0.0;
  out1[27] = 0.0;
  out1[28] = t6;
  out1[29] = 0.0;
  out1[30] = 0.0;
  out1[31] = 0.0;
  out1[32] = 0.0;
  out1[33] = 0.0;
  out1[34] = 0.0;
  out1[35] = t2 * 3.4311909475830091E-6;
  st.site = &s_emlrtRSI;
  t7 = in2[3] * in2[3];
  st.site = &t_emlrtRSI;
  t8 = in2[4] * in2[4];
  st.site = &u_emlrtRSI;
  t9 = in2[5] * in2[5];
  t10 = ((-t7 - t8) - t9) + 1.0;
  st.site = &v_emlrtRSI;
  if (t10 < 0.0) {
    b_st.site = &q_emlrtRSI;
    error(&b_st);
  }

  t2 = muDoubleScalarSqrt(t10);
  t11 = 1.0 / t2;
  t12 = in2[5] * 2.0;
  t33 = in2[3] * in2[4];
  t13 = t33 * t11 * 2.0;
  st.site = &w_emlrtRSI;
  t2 *= 2.0;
  t6 = in2[3] * in2[5] * t11 * 2.0;
  t17 = in2[3] * 2.0;
  t18 = in2[4] * in2[5] * t11 * 2.0;
  out2[0] = 1.0;
  out2[1] = 0.0;
  out2[2] = 0.0;
  out2[3] = 0.0;
  out2[4] = 0.0;
  out2[5] = 0.0;
  out2[6] = 0.0;
  out2[7] = 1.0;
  out2[8] = 0.0;
  out2[9] = 0.0;
  out2[10] = 0.0;
  out2[11] = 0.0;
  out2[12] = 0.0;
  out2[13] = 0.0;
  out2[14] = 1.0;
  out2[15] = 0.0;
  out2[16] = 0.0;
  out2[17] = 0.0;
  out2[18] = 0.0;
  out2[19] = 0.0;
  out2[20] = 0.0;
  out2[21] = t2 + t7 * t11 * 2.0;
  out2[22] = -t12 + t13;
  out2[23] = in2[4] * 2.0 + t6;
  out2[24] = 0.0;
  out2[25] = 0.0;
  out2[26] = 0.0;
  out2[27] = t12 + t13;
  out2[28] = t2 + t8 * t11 * 2.0;
  out2[29] = -t17 + t18;
  out2[30] = 0.0;
  out2[31] = 0.0;
  out2[32] = 0.0;
  out2[33] = in2[4] * -2.0 + t6;
  out2[34] = t17 + t18;
  out2[35] = t2 + t9 * t11 * 2.0;
  st.site = &x_emlrtRSI;
  t19 = 1.0 / muDoubleScalarPower(t10, 1.5);
  t20 = in2[4] * t11 * 2.0;
  t21 = in2[4] * t7 * t19 * 2.0;
  t22 = in2[3] * t11 * 2.0;
  t23 = t33 * in2[5] * t19 * 2.0;
  t2 = in2[5] * t11 * 2.0;
  t6 = in2[5] * t7 * t19 * 2.0;
  t17 = t20 + t21;
  t18 = in2[3] * t8 * t19 * 2.0;
  t10 = t22 + t18;
  t12 = in2[5] * t8 * t19 * 2.0;
  t13 = t2 + t6;
  t33 = in2[3] * t9 * t19 * 2.0;
  t11 = t2 + t12;
  t35 = in2[4] * t9 * t19 * 2.0;
  t36 = t22 + t33;
  t37 = t20 + t35;
  memset(&out3[0], 0, 21U * sizeof(real_T));
  out3[21] = (t17 * in2[10] + t13 * in2[11]) + in2[9] * (t22 + in2[3] * t7 * t19
    * 2.0);
  out3[22] = (t17 * in2[9] + (t23 + 2.0) * in2[11]) - in2[10] * (t22 - t18);
  out3[23] = ((t23 - 2.0) * in2[10] + t13 * in2[9]) - in2[11] * (t22 - t33);
  out3[24] = 0.0;
  out3[25] = 0.0;
  out3[26] = 0.0;
  out3[27] = (t10 * in2[10] + (t23 - 2.0) * in2[11]) - in2[9] * (t20 - t21);
  out3[28] = (t10 * in2[9] + t11 * in2[11]) + in2[10] * (t20 + in2[4] * t8 * t19
    * 2.0);
  out3[29] = ((t23 + 2.0) * in2[9] + t11 * in2[10]) - in2[11] * (t20 - t35);
  out3[30] = 0.0;
  out3[31] = 0.0;
  out3[32] = 0.0;
  out3[33] = ((t23 + 2.0) * in2[10] + t36 * in2[11]) - in2[9] * (t2 - t6);
  out3[34] = ((t23 - 2.0) * in2[9] + t37 * in2[11]) - in2[10] * (t2 - t12);
  out3[35] = (t36 * in2[9] + t37 * in2[10]) + in2[11] * (t2 + in2[5] * t9 * t19 *
    2.0);
}

/* End of code generation (massF1.c) */
