/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sprdmpF116.c
 *
 * Code generation for function 'sprdmpF116'
 *
 */

/* Include files */
#include <string.h>
#include "rt_nonfinite.h"
#include "EOM_eq.h"
#include "sprdmpF116.h"
#include "sqrt.h"

/* Variable Definitions */
static emlrtRSInfo fab_emlrtRSI = { 24,/* lineNo */
  "sprdmpF116",                        /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/sprdmpF116.m"/* pathName */
};

static emlrtRSInfo gab_emlrtRSI = { 30,/* lineNo */
  "sprdmpF116",                        /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/sprdmpF116.m"/* pathName */
};

static emlrtRSInfo kab_emlrtRSI = { 142,/* lineNo */
  "sprdmpF116",                        /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/sprdmpF116.m"/* pathName */
};

static emlrtRSInfo lab_emlrtRSI = { 182,/* lineNo */
  "sprdmpF116",                        /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/sprdmpF116.m"/* pathName */
};

/* Function Definitions */
void sprdmpF116(const emlrtStack *sp, const real_T in2[198], real_T out1[546],
                real_T out2[6], real_T out3[6], real_T out4[6])
{
  real_T t2;
  real_T t3;
  real_T t4;
  real_T t5;
  real_T t6;
  real_T t7;
  real_T t8;
  real_T t9;
  real_T t10;
  real_T t11;
  real_T t12;
  real_T t15_tmp;
  real_T t18_tmp;
  real_T t19;
  real_T t22;
  real_T t25;
  real_T t28_tmp;
  real_T t33_tmp_tmp;
  real_T t33_tmp;
  real_T b_t33_tmp;
  real_T t33;
  real_T t36;
  real_T t43_tmp_tmp;
  real_T t43_tmp;
  real_T b_t43_tmp;
  real_T t47_tmp;
  real_T t54_tmp;
  real_T t52_tmp_tmp;
  real_T t52_tmp;
  real_T t56;
  real_T t59_tmp;
  real_T t60;
  real_T t62;
  real_T t63;
  real_T t64_tmp;
  real_T b_t64_tmp;
  real_T c_t64_tmp;
  real_T t64;
  real_T t67;
  real_T t68;
  real_T t74;
  real_T t75;
  real_T t77_tmp;
  real_T t92;
  real_T t93;
  real_T t111;
  real_T t94_tmp;
  real_T t96;
  real_T t100;
  real_T t103;
  real_T t107;
  real_T t108_tmp;
  real_T t117_tmp;
  real_T t118;
  real_T t119;
  real_T t124;
  real_T t125;
  real_T t126;
  real_T t130_tmp;
  real_T b_t130_tmp;
  real_T t130;
  real_T t133;
  real_T t138_tmp;
  real_T t148;
  real_T t150;
  real_T t158_tmp;
  real_T t158;
  real_T t159;
  real_T t160_tmp;
  int32_T i;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /* SPRDMPF116 */
  /*     [OUT1,OUT2,OUT3,OUT4,OUT5,OUT6,OUT7,OUT8] = SPRDMPF116(IN1,IN2,S) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.2. */
  /*     08-Jan-2019 02:42:27 */
  t2 = in2[4] * in2[4];
  t3 = in2[5] * in2[5];
  t4 = in2[3] * in2[3];
  t5 = ((-t2 - t3) - t4) + 1.0;
  t6 = t5;
  st.site = &fab_emlrtRSI;
  b_sqrt(&st, &t6);
  t7 = in2[5] * t6 * 2.0;
  t8 = t3 * 2.0;
  t9 = in2[3] * t6 * 2.0;
  t10 = t4 * 2.0;
  t11 = t2 * 2.0;
  st.site = &gab_emlrtRSI;
  b_sqrt(&st, &t5);
  t12 = 1.0 / t5;
  t15_tmp = in2[4] * 0.03 - t6 * 0.038;
  t18_tmp = in2[4] * 0.038 + t6 * 0.03;
  t19 = in2[3] * 0.038;
  t22 = in2[3] * 0.03 + in2[5] * 0.038;
  t25 = in2[5] * 0.03;
  t5 = t19 - t25;
  t28_tmp = ((((-in2[0] + in2[84]) + t6 * t15_tmp) + in2[4] * t18_tmp) + in2[5] *
             t22) - in2[3] * t5;
  t33_tmp_tmp = in2[3] * in2[4];
  t33_tmp = t33_tmp_tmp * t12;
  b_t33_tmp = in2[3] * t12;
  t33 = ((in2[3] * 0.09 + in2[5] * 0.076) + t33_tmp * 0.038) + b_t33_tmp *
    t18_tmp;
  t36 = ((t19 + t33_tmp * 0.03) + b_t33_tmp * t15_tmp) - in2[5] * 0.06;
  t43_tmp_tmp = in2[3] * in2[5];
  t43_tmp = t43_tmp_tmp * t12;
  b_t43_tmp = t4 * t12;
  t4 = (((b_t43_tmp * 0.03 + b_t33_tmp * t22) + t43_tmp * 0.038) - in2[4] *
        0.076) - t6 * 0.06;
  t47_tmp = ((((in2[2] - in2[86]) + in2[4] * t15_tmp) + in2[3] * t22) + in2[5] *
             t5) - t6 * t18_tmp;
  t54_tmp = in2[5] * t15_tmp;
  t52_tmp_tmp = (((in2[1] - in2[85]) + in2[3] * t18_tmp) + t6 * t22) + in2[4] *
    t5;
  t52_tmp = t52_tmp_tmp - t54_tmp;
  t56 = (((t47_tmp + in2[3] * t33) - in2[5] * t36) - t6 * t4) - b_t33_tmp *
    t52_tmp;
  t59_tmp = ((in2[4] * t33 + in2[5] * t4) - t6 * t36) - b_t33_tmp * t28_tmp;
  t60 = b_t33_tmp * t47_tmp;
  t62 = ((t28_tmp + in2[4] * t4) - in2[3] * t36) - in2[5] * t33;
  t63 = t6 * t52_tmp;
  t64_tmp = in2[4] * t36;
  b_t64_tmp = in2[3] * t4;
  c_t64_tmp = t6 * t33;
  t64 = (((t52_tmp + t60) - t64_tmp) - b_t64_tmp) - c_t64_tmp;
  t67 = in2[5] * t28_tmp;
  t68 = in2[3] * t47_tmp;
  t74 = in2[4] * t28_tmp;
  t75 = in2[3] * t52_tmp;
  t77_tmp = in2[4] * t12;
  t5 = t77_tmp * 0.03 - 0.038;
  t4 = t77_tmp * 0.038 + 0.03;
  t36 = ((t18_tmp + t6 * t4) - in2[4] * t5) - t77_tmp * t15_tmp;
  t33 = ((t15_tmp + t6 * t5) + in2[4] * t4) + t77_tmp * t18_tmp;
  t5 = (((-t19 + t25) + in2[3] * t5) + in2[5] * t4) + t77_tmp * t22;
  t92 = t6 * t28_tmp;
  t93 = in2[4] * t47_tmp;
  t111 = in2[5] * t52_tmp;
  t94_tmp = (t92 + t93) - t111;
  t96 = ((t52_tmp + in2[5] * t33) - in2[3] * t36) - in2[4] * t5;
  t100 = ((in2[3] * t33 + in2[5] * t36) - t6 * t5) - t77_tmp * t52_tmp;
  t103 = (((t28_tmp + in2[4] * t36) + t77_tmp * t47_tmp) - t6 * t33) - in2[3] *
    t5;
  t107 = (((t47_tmp + t6 * t36) + in2[4] * t33) + in2[5] * t5) - t77_tmp *
    t28_tmp;
  t108_tmp = (t63 + t67) + t68;
  t117_tmp = t6 * t47_tmp;
  t118 = in2[89] * 2.0;
  t119 = in2[3] - in2[87];
  t4 = ((-(in2[87] * in2[87]) - in2[88] * in2[88]) - in2[89] * in2[89]) + 1.0;
  t124 = t4;
  st.site = &kab_emlrtRSI;
  b_sqrt(&st, &t124);
  t125 = in2[4] - in2[88];
  t126 = in2[5] - in2[89];
  t5 = in2[4] * in2[5];
  t130_tmp = t5 * t12;
  b_t130_tmp = in2[5] * t12;
  t130 = ((-t25 + in2[3] * 0.076) + t130_tmp * 0.038) + b_t130_tmp * t18_tmp;
  t133 = ((in2[3] * 0.06 + in2[5] * 0.114) - t130_tmp * 0.03) - b_t130_tmp *
    t15_tmp;
  t138_tmp = t3 * t12;
  t25 = (((in2[4] * 0.06 + t138_tmp * 0.038) + b_t130_tmp * t22) + t43_tmp *
         0.03) - t6 * 0.076;
  t22 = (((t28_tmp + in2[5] * t133) + in2[3] * t130) - t6 * t25) - b_t130_tmp *
    t52_tmp;
  t148 = (((t52_tmp + b_t130_tmp * t28_tmp) - t6 * t133) - in2[4] * t130) - in2
    [5] * t25;
  t150 = ((t47_tmp + in2[5] * t130) - in2[3] * t133) - in2[4] * t25;
  t158_tmp = t74 + t75;
  t158 = t158_tmp - t117_tmp;
  t159 = in2[87] * 2.0;
  t160_tmp = in2[4] * t6 * 2.0;
  t15_tmp = t33_tmp_tmp * 2.0;
  t3 = t43_tmp_tmp * 2.0;
  t18_tmp = t5 * 2.0;
  st.site = &lab_emlrtRSI;
  b_sqrt(&st, &t4);
  t36 = 1.0 / t4;
  t33 = t6 * 2.0;
  t19 = in2[4] * 2.0;
  out1[0] = (t8 + t11) - 1.0;
  out1[1] = -t7 - t15_tmp;
  out1[2] = t160_tmp - t3;
  t4 = (in2[3] * t28_tmp - in2[5] * t47_tmp) - in2[4] * t52_tmp;
  out1[3] = ((((t4 - in2[5] * t56) + in2[3] * t62) + t6 * t59_tmp) - in2[4] *
             (((((t52_tmp_tmp + t60) - t54_tmp) - t64_tmp) - b_t64_tmp) -
              c_t64_tmp)) - b_t33_tmp * t94_tmp;
  out1[4] = ((((((-t74 - t75) + t117_tmp) - in2[3] * t96) - in2[5] * t100) -
              in2[4] * t103) + t6 * t107) - t77_tmp * t94_tmp;
  t5 = ((in2[4] * t133 + b_t130_tmp * t47_tmp) - in2[3] * t25) - t6 * t130;
  out1[5] = ((((((-t63 - t67) - t68) - in2[5] * t22) - in2[3] * t150) - t6 *
              t148) - in2[4] * t5) - b_t130_tmp * t94_tmp;
  memset(&out1[6], 0, 78U * sizeof(real_T));
  out1[84] = (-t8 - t11) + 1.0;
  out1[85] = t7 + t15_tmp;
  out1[86] = -t160_tmp + t3;
  out1[87] = 0.0;
  out1[88] = 0.0;
  out1[89] = 0.0;
  out1[90] = 0.0;
  out1[91] = t7 - t15_tmp;
  out1[92] = (t8 + t10) - 1.0;
  out1[93] = -t9 - t18_tmp;
  out1[94] = (((((t158_tmp - in2[5] * t59_tmp) + in2[4] * t62) + in2[3] * t64) -
               t117_tmp) - t6 * t56) + b_t33_tmp * t108_tmp;
  out1[95] = ((((t4 - in2[4] * t96) + in2[3] * t103) - in2[5] * t107) - t6 *
              t100) + t77_tmp * t108_tmp;
  out1[96] = ((((((-t92 - t93) + t111) + in2[5] * t148) - in2[4] * t150) - t6 *
               t22) + in2[3] * t5) + b_t130_tmp * t108_tmp;
  memset(&out1[97], 0, 78U * sizeof(real_T));
  out1[175] = -t7 + t15_tmp;
  out1[176] = (-t8 - t10) + 1.0;
  out1[177] = t9 + t18_tmp;
  out1[178] = 0.0;
  out1[179] = 0.0;
  out1[180] = 0.0;
  out1[181] = 0.0;
  out1[182] = t43_tmp_tmp * -2.0 - t160_tmp;
  out1[183] = t9 - t18_tmp;
  out1[184] = (t10 + t11) - 1.0;
  out1[185] = ((((t108_tmp + in2[3] * t56) + in2[5] * t62) + t6 * t64) + in2[4] *
               t59_tmp) - b_t33_tmp * ((t74 + t75) - t6 * t47_tmp);
  out1[186] = ((((t94_tmp - in2[5] * t96) + in2[3] * t100) + in2[4] * t107) + t6
               * t103) - t77_tmp * t158;
  out1[187] = ((((t4 + in2[3] * t22) - in2[4] * t148) - in2[5] * t150) + t6 * t5)
    - b_t130_tmp * t158;
  memset(&out1[188], 0, 78U * sizeof(real_T));
  out1[266] = t160_tmp + t3;
  out1[267] = -t9 + t18_tmp;
  out1[268] = (-t10 - t11) + 1.0;
  out1[269] = 0.0;
  out1[270] = 0.0;
  out1[271] = 0.0;
  out1[272] = 0.0;
  out1[273] = 0.0;
  out1[274] = 0.0;
  out1[275] = 0.0;
  out1[276] = (t124 * -2.0 - b_t43_tmp * 2.0) + b_t33_tmp * t119 * 2.0;
  t4 = t33_tmp * 2.0;
  out1[277] = (-t118 - t4) + t77_tmp * t119 * 2.0;
  t5 = t43_tmp * 2.0;
  out1[278] = (in2[88] * 2.0 - t5) + b_t130_tmp * t119 * 2.0;
  memset(&out1[279], 0, 81U * sizeof(real_T));
  out1[360] = t33 + in2[3] * in2[87] * t36 * 2.0;
  out1[361] = in2[5] * 2.0 + in2[3] * in2[88] * t36 * 2.0;
  out1[362] = -t19 + in2[3] * in2[89] * t36 * 2.0;
  out1[363] = 0.0;
  out1[364] = 0.0;
  out1[365] = 0.0;
  out1[366] = 0.0;
  out1[367] = (t118 - t4) + b_t33_tmp * t125 * 2.0;
  out1[368] = (t124 * -2.0 - t2 * t12 * 2.0) + t77_tmp * t125 * 2.0;
  t4 = t130_tmp * 2.0;
  out1[369] = (-t159 - t4) + b_t130_tmp * t125 * 2.0;
  memset(&out1[370], 0, 81U * sizeof(real_T));
  out1[451] = in2[5] * -2.0 + in2[4] * in2[87] * t36 * 2.0;
  out1[452] = t33 + in2[4] * in2[88] * t36 * 2.0;
  out1[453] = in2[3] * 2.0 + in2[4] * in2[89] * t36 * 2.0;
  out1[454] = 0.0;
  out1[455] = 0.0;
  out1[456] = 0.0;
  out1[457] = 0.0;
  out1[458] = (in2[88] * -2.0 - t5) + b_t33_tmp * t126 * 2.0;
  out1[459] = (t159 - t4) + t77_tmp * t126 * 2.0;
  out1[460] = (t124 * -2.0 - t138_tmp * 2.0) + b_t130_tmp * t126 * 2.0;
  memset(&out1[461], 0, 81U * sizeof(real_T));
  out1[542] = t19 + in2[5] * in2[87] * t36 * 2.0;
  out1[543] = in2[3] * -2.0 + in2[5] * in2[88] * t36 * 2.0;
  out1[544] = t33 + in2[5] * in2[89] * t36 * 2.0;
  out1[545] = 0.0;
  for (i = 0; i < 6; i++) {
    out2[i] = 0.0;
    out3[i] = 0.0;
    out4[i] = 0.0;
  }
}

/* End of code generation (sprdmpF116.c) */
