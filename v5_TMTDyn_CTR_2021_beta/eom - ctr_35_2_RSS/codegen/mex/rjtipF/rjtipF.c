/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * rjtipF.c
 *
 * Code generation for function 'rjtipF'
 *
 */

/* Include files */
#include "rjtipF.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo s_emlrtRSI = { 160, /* lineNo */
  "rjtipF",                            /* fcnName */
  "C:\\Users\\customer\\MEGAsync\\Hadi\\Postdoc\\2_KCL\\2_Research\\2. Model\\CTR TMTDyn\\eom\\rjtipF.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 161, /* lineNo */
  "rjtipF",                            /* fcnName */
  "C:\\Users\\customer\\MEGAsync\\Hadi\\Postdoc\\2_KCL\\2_Research\\2. Model\\CTR TMTDyn\\eom\\rjtipF.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 174, /* lineNo */
  "rjtipF",                            /* fcnName */
  "C:\\Users\\customer\\MEGAsync\\Hadi\\Postdoc\\2_KCL\\2_Research\\2. Model\\CTR TMTDyn\\eom\\rjtipF.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 175, /* lineNo */
  "rjtipF",                            /* fcnName */
  "C:\\Users\\customer\\MEGAsync\\Hadi\\Postdoc\\2_KCL\\2_Research\\2. Model\\CTR TMTDyn\\eom\\rjtipF.m"/* pathName */
};

static emlrtRTEInfo emlrtRTEI = { 13,  /* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pName */
};

/* Function Definitions */
void rjtipF(const emlrtStack *sp, const real_T in1[60], const real_T in2[48],
            real_T s, real_T ds, real_T t_sym, real_T out1[75])
{
  emlrtStack st;
  real_T a_tmp;
  real_T t101;
  real_T t107;
  real_T t107_tmp;
  real_T t108;
  real_T t108_tmp;
  real_T t109;
  real_T t109_tmp;
  real_T t11;
  real_T t110;
  real_T t117;
  real_T t118;
  real_T t125;
  real_T t126;
  real_T t127;
  real_T t128;
  real_T t13;
  real_T t130;
  real_T t14;
  real_T t15;
  real_T t16;
  real_T t21;
  real_T t22;
  real_T t26;
  real_T t27;
  real_T t28;
  real_T t3;
  real_T t30;
  real_T t31;
  real_T t32;
  real_T t4;
  real_T t43;
  real_T t44;
  real_T t48;
  real_T t5;
  real_T t56;
  real_T t62;
  real_T t63;
  real_T t78;
  real_T t79;
  real_T t80;
  real_T t84;
  real_T t91;
  real_T t92;
  real_T t95;
  (void)ds;
  (void)t_sym;
  st.prev = sp;
  st.tls = sp->tls;

  /* RJTIPF */
  /*     OUT1 = RJTIPF(IN1,IN2,S,DS,T_SYM) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.6. */
  /*     10-Mar-2021 20:55:36 */
  t3 = in1[48] + in1[38];
  t4 = s * s;
  t5 = muDoubleScalarPower(s, 3.0);
  t15 = in1[49] / 2.0;
  t16 = in1[51] / 2.0;
  t11 = s * t3;
  t13 = t3 * t3;
  t14 = muDoubleScalarPower(t3, 3.0);
  t21 = in1[48] + -in1[35];
  t22 = in1[50] + -in1[36];
  a_tmp = (in1[50] + in1[39]) - t3;
  t56 = a_tmp * a_tmp;
  t26 = in2[4] * t13 * 3.0;
  t27 = in2[6] * t13 * 3.0;
  t28 = in2[8] * t13 * 3.0;
  t30 = s * t21;
  t31 = t22 * t22;
  t32 = muDoubleScalarPower(t22, 3.0);
  t43 = in2[9] * t13 / 2.0;
  t44 = in2[10] * t14 / 2.0;
  t48 = in2[0] * t22 / 2.0;
  t62 = in2[1] * t31 / 2.0;
  t63 = in2[2] * t32 / 2.0;
  t80 = ((in1[35] + -in1[48]) + t22) + t30;
  t91 = in2[3] * t4 * t13 + in2[4] * t5 * t14;
  t92 = in2[5] * t4 * t13 + in2[6] * t5 * t14;
  t101 = ((in1[36] + t11) + in2[7] * t4 * t13) + in2[8] * t5 * t14;
  t107_tmp = in2[3] * t3 * 2.0 + t26;
  t107 = (t107_tmp + in2[11] * s * a_tmp * 2.0) + in2[12] * t4 * t56 * 3.0;
  t108_tmp = in2[5] * t3 * 2.0 + t27;
  t108 = (t108_tmp + in2[13] * s * a_tmp * 2.0) + in2[14] * t4 * t56 * 3.0;
  t109_tmp = in2[7] * t3 * 2.0 + t28;
  t109 = ((t109_tmp + in2[15] * s * a_tmp * 2.0) + in2[16] * t4 * t56 * 3.0) +
    1.0;
  t78 = in2[3] * t11 * 2.0 + t4 * t26;
  t79 = in2[5] * t11 * 2.0 + t4 * t27;
  t84 = (in2[7] * t11 * 2.0 + t4 * t28) + 1.0;
  t95 = (in2[0] + -(in2[1] * t22 * 2.0)) + in2[2] * t31 * 3.0;
  t110 = ((t16 + in2[0] * s * t22 * -0.5) + t4 * t62) + in2[2] * t5 * t32 * -0.5;
  t28 = (((((t16 + -t48) + t4 * t43) + t5 * t44) + t62) + -t63) + t11 * t95 /
    2.0;
  t27 = (((((t15 + -(in2[19] * t22 / 2.0)) + in2[22] * t4 * t13 / 2.0) + in2[23]
           * t5 * t14 / 2.0) + in2[20] * t31 / 2.0) + -(in2[21] * t32 / 2.0)) +
    t11 * ((in2[19] + -(in2[20] * t22 * 2.0)) + in2[21] * t31 * 3.0) / 2.0;
  t26 = (t107 * t107 + t108 * t108) + t109 * t109;
  st.site = &s_emlrtRSI;
  if (t26 < 0.0) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      4, "sqrt");
  }

  t26 = muDoubleScalarSqrt(t26);
  t130 = 1.0 / t26;
  t26 = (t78 * t78 + t79 * t79) + t84 * t84;
  st.site = &t_emlrtRSI;
  if (t26 < 0.0) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      4, "sqrt");
  }

  t26 = muDoubleScalarSqrt(t26);
  t117 = 1.0 / t26;
  t118 = ((t15 + -(in2[19] * t80 / 2.0)) + in2[20] * (t80 * t80) / 2.0) + -(in2
    [21] * muDoubleScalarPower(t80, 3.0) / 2.0);
  t125 = muDoubleScalarCos(t28);
  t126 = muDoubleScalarCos(t27);
  t127 = muDoubleScalarSin(t28);
  t128 = muDoubleScalarSin(t27);
  t27 = muDoubleScalarPower(a_tmp, 3.0);
  t11 = ((((((((t16 + t43) + t44) + -t48) + t62) + -t63) + in2[17] * t4 * t56 /
           2.0) + in2[18] * t5 * t27 / 2.0) + t3 * t95 / 2.0) + s * ((in2[9] *
    t3 * 2.0 + in2[10] * t13 * 3.0) + t95) * a_tmp / 2.0;
  t95 = muDoubleScalarCos(t11);
  t80 = muDoubleScalarSin(t11);
  t15 = t109 * t130 + 1.0;
  st.site = &u_emlrtRSI;
  if (t15 < 0.0) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      4, "sqrt");
  }

  t15 = muDoubleScalarSqrt(t15);
  t31 = t84 * t117 + 1.0;
  st.site = &v_emlrtRSI;
  if (t31 < 0.0) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      4, "sqrt");
  }

  t31 = muDoubleScalarSqrt(t31);
  t32 = 1.0 / t15;
  t26 = 1.0 / t31;
  out1[0] = 0.0;
  out1[1] = t91;
  out1[2] = (((in2[3] * t13 + in2[4] * t14) + s * t107_tmp * a_tmp) + in2[12] *
             t5 * t27) + in2[11] * t4 * t56;
  out1[3] = 0.0;
  out1[4] = t91;
  out1[5] = 0.0;
  out1[6] = t92;
  out1[7] = (((in2[5] * t13 + in2[6] * t14) + s * t108_tmp * a_tmp) + in2[14] *
             t5 * t27) + in2[13] * t4 * t56;
  out1[8] = 0.0;
  out1[9] = t92;
  out1[10] = in1[50] - s * t22;
  out1[11] = t101;
  out1[12] = (((((in1[36] + t3) + in2[7] * t13) + in2[8] * t14) + s * a_tmp *
               (t109_tmp + 1.0)) + in2[16] * t5 * t27) + in2[15] * t4 * t56;
  out1[13] = (in1[36] + t21) - t30;
  out1[14] = t101;
  out1[15] = rtNaN;
  out1[16] = rtNaN;
  out1[17] = rtNaN;
  out1[18] = rtNaN;
  out1[19] = rtNaN;
  out1[20] = rtNaN;
  out1[21] = rtNaN;
  out1[22] = rtNaN;
  out1[23] = rtNaN;
  out1[24] = rtNaN;
  out1[25] = rtNaN;
  out1[26] = rtNaN;
  out1[27] = rtNaN;
  out1[28] = rtNaN;
  out1[29] = rtNaN;
  out1[30] = muDoubleScalarCos(t110);
  out1[31] = 1.4142135623730951 * t31 * t125 / 2.0;
  out1[32] = 1.4142135623730951 * t95 * t15 / 2.0;
  out1[33] = muDoubleScalarCos(t118);
  out1[34] = 1.4142135623730951 * t31 * t126 / 2.0;
  out1[35] = 0.0;
  t28 = 1.4142135623730951 * t79 * t117 * t26;
  t27 = 1.4142135623730951 * t78 * t117 * t26;
  out1[36] = t28 * t125 * -0.5 + t27 * t127 / 2.0;
  t11 = 1.4142135623730951 * t107 * t130;
  t26 = 1.4142135623730951 * t108 * t130;
  out1[37] = t11 * t80 * t32 / 2.0 - t26 * t95 * t32 / 2.0;
  out1[38] = 0.0;
  out1[39] = t28 * t126 * -0.5 + t27 * t128 / 2.0;
  out1[40] = 0.0;
  out1[41] = t27 * t125 / 2.0 + t28 * t127 / 2.0;
  out1[42] = t11 * t95 * t32 / 2.0 + t26 * t80 * t32 / 2.0;
  out1[43] = 0.0;
  out1[44] = t27 * t126 / 2.0 + t28 * t128 / 2.0;
  out1[45] = muDoubleScalarSin(t110);
  out1[46] = 1.4142135623730951 * t31 * t127 / 2.0;
  out1[47] = 1.4142135623730951 * t80 * t15 / 2.0;
  out1[48] = muDoubleScalarSin(t118);
  out1[49] = 1.4142135623730951 * t31 * t128 / 2.0;
  out1[50] = rtNaN;
  out1[51] = rtNaN;
  out1[52] = rtNaN;
  out1[53] = rtNaN;
  out1[54] = rtNaN;
  out1[55] = rtNaN;
  out1[56] = rtNaN;
  out1[57] = rtNaN;
  out1[58] = rtNaN;
  out1[59] = rtNaN;
  out1[60] = rtNaN;
  out1[61] = rtNaN;
  out1[62] = rtNaN;
  out1[63] = rtNaN;
  out1[64] = rtNaN;
  out1[65] = rtNaN;
  out1[66] = rtNaN;
  out1[67] = rtNaN;
  out1[68] = rtNaN;
  out1[69] = rtNaN;
  out1[70] = in1[10];
  out1[71] = in1[10];
  out1[72] = in1[10];
  out1[73] = in1[8];
  out1[74] = in1[8];
}

/* End of code generation (rjtipF.c) */