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
static emlrtRSInfo tb_emlrtRSI = { 20, /* lineNo */
  "massF3",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/massF3.m"/* pathName */
};

static emlrtRSInfo ub_emlrtRSI = { 21, /* lineNo */
  "massF3",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/massF3.m"/* pathName */
};

static emlrtRSInfo vb_emlrtRSI = { 29, /* lineNo */
  "massF3",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/massF3.m"/* pathName */
};

static emlrtRSInfo wb_emlrtRSI = { 30, /* lineNo */
  "massF3",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/massF3.m"/* pathName */
};

static emlrtRSInfo xb_emlrtRSI = { 31, /* lineNo */
  "massF3",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/massF3.m"/* pathName */
};

static emlrtRSInfo yb_emlrtRSI = { 33, /* lineNo */
  "massF3",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/massF3.m"/* pathName */
};

static emlrtRSInfo ac_emlrtRSI = { 34, /* lineNo */
  "massF3",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/massF3.m"/* pathName */
};

static emlrtRSInfo bc_emlrtRSI = { 46, /* lineNo */
  "massF3",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/massF3.m"/* pathName */
};

/* Function Definitions */
void massF3(const emlrtStack *sp, const real_T in1[34], const real_T in2[24],
            real_T out1[36], real_T out2[72], real_T out3[72], real_T out4[6])
{
  real_T t2;
  real_T t3;
  real_T t9;
  real_T t10;
  real_T t11;
  real_T t12;
  real_T t13;
  real_T t15;
  real_T t53;
  real_T t17;
  real_T t54;
  real_T t18;
  real_T t21;
  real_T t22;
  real_T out2_tmp;
  real_T t52;
  real_T b_out2_tmp;
  real_T t23;
  real_T t24_tmp;
  real_T t26;
  real_T t27;
  real_T t30;
  real_T t31_tmp;
  real_T t33;
  real_T t35;
  real_T t37;
  real_T t38;
  real_T t39;
  real_T t40;
  real_T t41;
  real_T out3_tmp;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;

  /* MASSF3 */
  /*     [OUT1,OUT2,OUT3,OUT4] = MASSF3(IN1,IN2,S) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.2. */
  /*     06-Jan-2019 18:35:08 */
  st.site = &tb_emlrtRSI;
  t2 = in1[16] * in1[16];
  st.site = &ub_emlrtRSI;
  t3 = in1[17] * in1[17];
  t2 = in1[15] * (t2 + t3 * 3.0) / 12.0 + in1[15] * t2 / 4.0;
  out1[0] = in1[15];
  out1[1] = 0.0;
  out1[2] = 0.0;
  out1[3] = 0.0;
  out1[4] = 0.0;
  out1[5] = 0.0;
  out1[6] = 0.0;
  out1[7] = in1[15];
  out1[8] = 0.0;
  out1[9] = 0.0;
  out1[10] = 0.0;
  out1[11] = 0.0;
  out1[12] = 0.0;
  out1[13] = 0.0;
  out1[14] = in1[15];
  out1[15] = 0.0;
  out1[16] = 0.0;
  out1[17] = 0.0;
  out1[18] = 0.0;
  out1[19] = 0.0;
  out1[20] = 0.0;
  out1[21] = t2;
  out1[22] = 0.0;
  out1[23] = 0.0;
  out1[24] = 0.0;
  out1[25] = 0.0;
  out1[26] = 0.0;
  out1[27] = 0.0;
  out1[28] = t2;
  out1[29] = 0.0;
  out1[30] = 0.0;
  out1[31] = 0.0;
  out1[32] = 0.0;
  out1[33] = 0.0;
  out1[34] = 0.0;
  out1[35] = in1[15] * t3 / 2.0;
  st.site = &vb_emlrtRSI;
  t9 = in2[9] * in2[9];
  st.site = &wb_emlrtRSI;
  t10 = in2[10] * in2[10];
  st.site = &xb_emlrtRSI;
  t11 = in2[11] * in2[11];
  t12 = ((-t9 - t10) - t11) + 1.0;
  st.site = &yb_emlrtRSI;
  if (t12 < 0.0) {
    b_st.site = &db_emlrtRSI;
    error(&b_st);
  }

  t2 = muDoubleScalarSqrt(t12);
  t13 = 1.0 / t2;
  st.site = &ac_emlrtRSI;
  t15 = in1[16] * t2;
  t53 = in1[16] * in2[11];
  t17 = in2[11] * 2.0;
  t54 = in2[9] * in2[10];
  t18 = t54 * t13 * 2.0;
  t2 *= 2.0;
  t3 = in2[9] * in2[11] * t13 * 2.0;
  t21 = in2[9] * 2.0;
  t22 = in2[10] * in2[11] * t13 * 2.0;
  memset(&out2[0], 0, 36U * sizeof(real_T));
  out2[36] = 1.0;
  out2[37] = 0.0;
  out2[38] = 0.0;
  out2[39] = 0.0;
  out2[40] = 0.0;
  out2[41] = 0.0;
  out2[42] = 0.0;
  out2[43] = 1.0;
  out2[44] = 0.0;
  out2[45] = 0.0;
  out2[46] = 0.0;
  out2[47] = 0.0;
  out2[48] = 0.0;
  out2[49] = 0.0;
  out2[50] = 1.0;
  out2[51] = 0.0;
  out2[52] = 0.0;
  out2[53] = 0.0;
  out2_tmp = in1[16] * in2[9];
  t52 = out2_tmp * in2[10];
  b_out2_tmp = t52 * t13;
  out2[54] = t53 - b_out2_tmp;
  out2[55] = -t15 + in1[16] * t9 * t13;
  out2[56] = out2_tmp * -2.0;
  out2[57] = t2 + t9 * t13 * 2.0;
  out2[58] = -t17 + t18;
  out2[59] = in2[10] * 2.0 + t3;
  out2[60] = t15 - in1[16] * t10 * t13;
  out2[61] = t53 + b_out2_tmp;
  b_out2_tmp = in1[16] * in2[10];
  out2[62] = b_out2_tmp * -2.0;
  out2[63] = t17 + t18;
  out2[64] = t2 + t10 * t13 * 2.0;
  out2[65] = -t21 + t22;
  out2[66] = out2_tmp - b_out2_tmp * in2[11] * t13;
  out2[67] = b_out2_tmp + out2_tmp * in2[11] * t13;
  out2[68] = 0.0;
  out2[69] = in2[10] * -2.0 + t3;
  out2[70] = t21 + t22;
  out2[71] = t2 + t11 * t13 * 2.0;
  st.site = &bc_emlrtRSI;
  t23 = 1.0 / muDoubleScalarPower(t12, 1.5);
  t24_tmp = out2_tmp * t13;
  t26 = t24_tmp + out2_tmp * t10 * t23;
  t2 = t52 * in2[11] * t23;
  t27 = in1[16] - t2;
  t3 = t53 * t13;
  t30 = t3 + t53 * t10 * t23;
  t31_tmp = b_out2_tmp * t13;
  t33 = t31_tmp + b_out2_tmp * t9 * t23;
  t35 = in1[16] + t2;
  t37 = t3 + t53 * t9 * t23;
  t38 = in2[10] * t13 * 2.0;
  t39 = in2[10] * t9 * t23 * 2.0;
  t40 = in2[9] * t13 * 2.0;
  t41 = t54 * in2[11] * t23 * 2.0;
  t2 = in2[11] * t13 * 2.0;
  t3 = in2[11] * t9 * t23 * 2.0;
  t21 = t38 + t39;
  t22 = in2[9] * t10 * t23 * 2.0;
  t12 = t40 + t22;
  t15 = in2[11] * t10 * t23 * 2.0;
  t17 = t2 + t3;
  t18 = in2[9] * t11 * t23 * 2.0;
  t52 = t2 + t15;
  t53 = in2[10] * t11 * t23 * 2.0;
  t54 = t40 + t18;
  t13 = t38 + t53;
  memset(&out3[0], 0, 54U * sizeof(real_T));
  out3_tmp = t33 * in2[21];
  out3[54] = (-t26 * in2[22] + t27 * in2[23]) - out3_tmp;
  out3[55] = (in2[21] * (t24_tmp * 3.0 + out2_tmp * t9 * t23) + t33 * in2[22]) +
    t37 * in2[23];
  out3[56] = in1[16] * in2[21] * -2.0;
  out3[57] = (t21 * in2[22] + t17 * in2[23]) + in2[21] * (t40 + in2[9] * t9 *
    t23 * 2.0);
  out3[58] = (t21 * in2[21] + (t41 + 2.0) * in2[23]) - in2[22] * (t40 - t22);
  out3[59] = ((t41 - 2.0) * in2[22] + t17 * in2[21]) - in2[23] * (t40 - t18);
  out3[60] = (-in2[22] * (t31_tmp * 3.0 + b_out2_tmp * t10 * t23) - t26 * in2[21])
    - t30 * in2[23];
  out3[61] = (t26 * in2[22] + out3_tmp) + t35 * in2[23];
  out3[62] = in1[16] * in2[22] * -2.0;
  out3[63] = (t12 * in2[22] + (t41 - 2.0) * in2[23]) - in2[21] * (t38 - t39);
  out3[64] = (t12 * in2[21] + t52 * in2[23]) + in2[22] * (t38 + in2[10] * t10 *
    t23 * 2.0);
  out3[65] = ((t41 + 2.0) * in2[21] + t52 * in2[22]) - in2[23] * (t38 - t53);
  out3[66] = (t27 * in2[21] - t30 * in2[22]) - in2[23] * (t31_tmp + b_out2_tmp *
    t11 * t23);
  out3[67] = (t35 * in2[22] + t37 * in2[21]) + in2[23] * (t24_tmp + out2_tmp *
    t11 * t23);
  out3[68] = 0.0;
  out3[69] = ((t41 + 2.0) * in2[22] + t54 * in2[23]) - in2[21] * (t2 - t3);
  out3[70] = ((t41 - 2.0) * in2[21] + t13 * in2[23]) - in2[22] * (t2 - t15);
  out3[71] = (t54 * in2[21] + t13 * in2[22]) + in2[23] * (t2 + in2[11] * t11 *
    t23 * 2.0);
  out4[0] = in1[12];
  out4[1] = in1[13];
  out4[2] = in1[14];
  out4[3] = 0.0;
  out4[4] = 0.0;
  out4[5] = 0.0;
}

/* End of code generation (massF3.c) */
