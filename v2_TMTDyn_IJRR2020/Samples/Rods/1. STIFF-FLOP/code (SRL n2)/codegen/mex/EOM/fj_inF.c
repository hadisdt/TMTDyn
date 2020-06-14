/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * fj_inF.c
 *
 * Code generation for function 'fj_inF'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "EOM.h"
#include "fj_inF.h"
#include "error.h"

/* Variable Definitions */
static emlrtRSInfo hb_emlrtRSI = { 19, /* lineNo */
  "fj_inF",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/fj_inF.m"/* pathName */
};

static emlrtRSInfo ib_emlrtRSI = { 21, /* lineNo */
  "fj_inF",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/fj_inF.m"/* pathName */
};

static emlrtRSInfo jb_emlrtRSI = { 22, /* lineNo */
  "fj_inF",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/fj_inF.m"/* pathName */
};

static emlrtRSInfo kb_emlrtRSI = { 23, /* lineNo */
  "fj_inF",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/fj_inF.m"/* pathName */
};

static emlrtRSInfo lb_emlrtRSI = { 26, /* lineNo */
  "fj_inF",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/fj_inF.m"/* pathName */
};

static emlrtRSInfo mb_emlrtRSI = { 27, /* lineNo */
  "fj_inF",                            /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/fj_inF.m"/* pathName */
};

static emlrtRSInfo nb_emlrtRSI = { 12, /* lineNo */
  "sqrt",                              /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/elfun/sqrt.m"/* pathName */
};

/* Function Definitions */
void fj_inF(const emlrtStack *sp, const real_T in1[34], real_T fj_in[12])
{
  real_T t21;
  real_T t3;
  real_T t10;
  real_T t5;
  real_T t8_tmp;
  real_T t17_tmp;
  real_T b_t17_tmp;
  real_T t17;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;

  /* FJ_INF */
  /*     FJ_IN = FJ_INF(IN1,IN2,S) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.2. */
  /*     06-Jan-2019 07:54:15 */
  t21 = muDoubleScalarCos(in1[20]);
  st.site = &hb_emlrtRSI;
  t3 = in1[18] * in1[18];
  t10 = muDoubleScalarSin(in1[20]);
  st.site = &ib_emlrtRSI;
  t5 = 1.0 / (t10 * t10);
  st.site = &jb_emlrtRSI;
  st.site = &kb_emlrtRSI;
  t8_tmp = in1[33] * in1[33] * (t21 * t21);
  st.site = &lb_emlrtRSI;
  if (in1[33] < 0.0) {
    b_st.site = &nb_emlrtRSI;
    error(&b_st);
  }

  t10 = 1.0 / muDoubleScalarSqrt(in1[33]);
  st.site = &mb_emlrtRSI;
  t21 = in1[23] * in1[19] * t3 * t5 * (t8_tmp - 1.0) * t10 * 3.1415926535897931;
  t17_tmp = in1[24] * in1[19] * t3 * t5 * (t8_tmp - 1.0) * t10 *
    3.1415926535897931;
  b_t17_tmp = in1[21] * in1[19] * t3 * t5 * (t8_tmp - 1.0) * t10;
  t17 = ((((t21 * 0.167999098695029 + t17_tmp * 0.76971716428074954) + in1[25] *
           in1[19] * t3 * t5 * (t8_tmp - 1.0) * t10 * 3.1415926535897931 *
           0.76971716428074932) + in1[26] * in1[19] * t3 * t5 * (t8_tmp - 1.0) *
          t10 * 3.1415926535897931 * 0.16799909869502891) - b_t17_tmp *
         3.1415926535897931 * 0.93771626297577859) - in1[22] * in1[19] * t3 * t5
    * (t8_tmp - 1.0) * t10 * 3.1415926535897931 * 0.93771626297577859;
  t21 = ((((t21 * 0.9857871488499218 + t17_tmp * 0.63838506170774523) + in1[22] *
           in1[19] * t3 * t5 * (t8_tmp - 1.0) * t10 * 8.3666002653407556 *
           3.1415926535897931 * 0.041522491349480967) - in1[25] * in1[19] * t3 *
          t5 * (t8_tmp - 1.0) * t10 * 3.1415926535897931 * 0.63838506170774545)
         - in1[26] * in1[19] * t3 * t5 * (t8_tmp - 1.0) * t10 *
         3.1415926535897931 * 0.9857871488499218) - b_t17_tmp *
    8.3666002653407556 * 3.1415926535897931 * 0.041522491349480967;
  fj_in[0] = 0.0;
  fj_in[1] = 0.0;
  t10 = -t3 * t5 * (t8_tmp - 1.0) * (((((in1[21] + in1[22]) + in1[23]) + in1[24])
    + in1[25]) + in1[26]) * 3.1415926535897931;
  fj_in[2] = t10;
  fj_in[3] = 0.0;
  fj_in[4] = t17;
  fj_in[5] = t21;
  fj_in[6] = 0.0;
  fj_in[7] = 0.0;
  fj_in[8] = t10;
  fj_in[9] = 0.0;
  fj_in[10] = t17;
  fj_in[11] = t21;
}

/* End of code generation (fj_inF.c) */
