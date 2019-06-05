/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sprdmpF101.c
 *
 * Code generation for function 'sprdmpF101'
 *
 */

/* Include files */
#include <string.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "EOM_eq.h"
#include "sprdmpF101.h"
#include "sqrt.h"

/* Variable Definitions */
static emlrtRSInfo vp_emlrtRSI = { 40, /* lineNo */
  "sprdmpF101",                        /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/sprdmpF101.m"/* pathName */
};

static emlrtRSInfo aq_emlrtRSI = { 49, /* lineNo */
  "sprdmpF101",                        /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/sprdmpF101.m"/* pathName */
};

static emlrtRSInfo bq_emlrtRSI = { 57, /* lineNo */
  "sprdmpF101",                        /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/sprdmpF101.m"/* pathName */
};

static emlrtRSInfo cq_emlrtRSI = { 86, /* lineNo */
  "sprdmpF101",                        /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/sprdmpF101.m"/* pathName */
};

/* Function Definitions */
void sprdmpF101(const emlrtStack *sp, const real_T in1[6], const real_T in2[198],
                real_T out1[546], real_T out2[6], real_T out3[6], real_T out4[6])
{
  real_T t2;
  real_T t3;
  real_T t4;
  real_T t5;
  real_T t6;
  real_T t7_tmp;
  real_T t7;
  real_T t8;
  real_T t222;
  real_T t9;
  real_T t10_tmp;
  real_T t10;
  real_T t14;
  real_T t28;
  real_T t15;
  real_T t16;
  real_T t17;
  real_T t18_tmp;
  real_T t19;
  real_T t20_tmp;
  real_T t21;
  real_T t22;
  real_T t23;
  real_T t213;
  real_T t159;
  real_T t26_tmp;
  real_T t28_tmp;
  real_T t30;
  real_T t31;
  real_T t32_tmp;
  real_T t33;
  real_T t34_tmp;
  real_T t35;
  real_T t36_tmp;
  real_T t46_tmp;
  real_T t185;
  real_T t37;
  real_T t39_tmp;
  real_T t39;
  real_T t41;
  real_T t53_tmp;
  real_T t211;
  real_T t45;
  real_T t58_tmp;
  real_T t47;
  real_T t48;
  real_T t49;
  real_T t51;
  real_T t52;
  real_T t55_tmp;
  real_T t55;
  real_T t57;
  real_T t59;
  real_T t60_tmp;
  real_T t61;
  real_T t62;
  real_T t63;
  real_T t64;
  real_T t208;
  real_T t65;
  real_T t66;
  real_T t67;
  real_T t68;
  real_T t70;
  real_T t74_tmp;
  real_T b_t74_tmp;
  real_T c_t74_tmp;
  real_T t74;
  real_T t79_tmp;
  real_T b_t79_tmp;
  real_T c_t79_tmp;
  real_T t79;
  real_T t89;
  real_T t94;
  real_T t95;
  real_T t96;
  real_T t97;
  real_T t98;
  real_T t99;
  real_T t100;
  real_T t102;
  real_T t106_tmp;
  real_T b_t106_tmp;
  real_T c_t106_tmp;
  real_T t106;
  real_T t111_tmp;
  real_T b_t111_tmp;
  real_T c_t111_tmp;
  real_T t111;
  real_T t120;
  real_T t125;
  real_T t126;
  real_T t127;
  real_T t128;
  real_T t129;
  real_T t130;
  real_T t131;
  real_T t133;
  real_T t137_tmp;
  real_T b_t137_tmp;
  real_T c_t137_tmp;
  real_T t137;
  real_T t142;
  real_T t151;
  real_T t156;
  real_T t158;
  real_T t161;
  real_T t165;
  real_T t166;
  real_T t169;
  real_T t174;
  real_T t176;
  real_T t180;
  real_T t184;
  real_T t186;
  real_T t188;
  real_T t190;
  real_T t193;
  real_T t198;
  real_T t200;
  real_T t204;
  int32_T i;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /* SPRDMPF101 */
  /*     [OUT1,OUT2,OUT3,OUT4,OUT5,OUT6,OUT7,OUT8] = SPRDMPF101(IN1,IN2,S) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.2. */
  /*     08-Jan-2019 02:24:09 */
  t2 = in2[70] * in2[70];
  t3 = in2[71] * in2[71];
  t4 = in2[69] * in2[69];
  t5 = ((-t2 - t3) - t4) + 1.0;
  t6 = t5;
  st.site = &vp_emlrtRSI;
  b_sqrt(&st, &t6);
  t7_tmp = in2[69] * in2[70];
  t7 = t7_tmp * 2.0;
  t8 = in2[70] * t6 * 2.0;
  t222 = in2[69] * in2[71];
  t9 = t222 * 2.0;
  t10_tmp = in2[70] * in2[71];
  t10 = t10_tmp * 2.0;
  t14 = ((-(in2[27] * in2[27]) - in2[28] * in2[28]) - in2[29] * in2[29]) + 1.0;
  t28 = t14;
  st.site = &aq_emlrtRSI;
  b_sqrt(&st, &t28);
  t15 = 1.0 / t28;
  t16 = t6 * 2.0;
  t17 = in2[70] * 2.0;
  t18_tmp = in2[71] * t6 * 2.0;
  t19 = t3 * 2.0;
  t20_tmp = in2[69] * t6 * 2.0;
  t21 = t4 * 2.0;
  t22 = t2 * 2.0;
  st.site = &bq_emlrtRSI;
  b_sqrt(&st, &t5);
  t23 = 1.0 / t5;
  t213 = in2[25] - in2[67];
  t159 = in2[26] - in2[68];
  t26_tmp = in2[24] - in2[66];
  t28_tmp = in2[69] * t23;
  t28 = (-in2[26] + in2[68]) + t28_tmp * t213;
  t30 = t213 + t28_tmp * t159;
  t31 = t6 * t213;
  t32_tmp = in2[69] * t159;
  t33 = t6 * t159;
  t34_tmp = in2[70] * t26_tmp;
  t35 = t6 * t26_tmp;
  t36_tmp = in2[71] * t213;
  t46_tmp = in2[70] * t159;
  t185 = t35 + t36_tmp;
  t37 = t185 - t46_tmp;
  t39_tmp = in2[70] * t23;
  t39 = (-in2[24] + in2[66]) + t39_tmp * t159;
  t41 = t159 + t39_tmp * t26_tmp;
  t53_tmp = in2[71] * t26_tmp;
  t211 = t31 + t32_tmp;
  t45 = t211 - t53_tmp;
  t58_tmp = in2[69] * t213;
  t5 = t33 + t34_tmp;
  t47 = t5 - t58_tmp;
  t48 = in2[29] * 2.0;
  t49 = in2[27] - in2[69];
  st.site = &cq_emlrtRSI;
  b_sqrt(&st, &t14);
  t51 = in2[28] - in2[70];
  t52 = in2[29] - in2[71];
  t55_tmp = in2[71] * t23;
  t55 = t26_tmp + t55_tmp * t213;
  t57 = (-in2[25] + in2[67]) + t55_tmp * t26_tmp;
  t59 = in2[27] * 2.0;
  t60_tmp = (in2[69] * t26_tmp + in2[70] * t213) + in2[71] * t159;
  t61 = t6 - t14;
  t62 = in2[70] * t39;
  t63 = t58_tmp * 2.0;
  t64 = t32_tmp * 2.0;
  t208 = t10_tmp * t23;
  t65 = t208 * t159;
  t66 = (t19 + t22) - 1.0;
  t67 = t7 + t18_tmp;
  t68 = t8 - t9;
  t70 = ((t60_tmp + in2[70] * t30) - in2[71] * t28) - t28_tmp * t37;
  t74_tmp = t6 * t41;
  b_t74_tmp = t39_tmp * t37;
  c_t74_tmp = t208 * t213;
  t74 = ((((t5 - t62) - t63) + t74_tmp) + b_t74_tmp) + c_t74_tmp;
  t79_tmp = in2[71] * t55;
  b_t79_tmp = t6 * t57;
  c_t79_tmp = t55_tmp * t37;
  t79 = (((((-t31 + t53_tmp) - t64) - t65) + b_t79_tmp) + t79_tmp) + c_t79_tmp;
  t89 = muDoubleScalarPower(muDoubleScalarAbs((((((((t74 * in2[169] + t79 * in2
    [170]) + t66 * in2[123]) + t68 * in2[125]) + t67 * in2[166]) - t66 * in2[165])
    - t67 * in2[124]) - t68 * in2[167]) - t70 * in2[168]), in1[1] - 1.0);
  t94 = t34_tmp * 2.0;
  t222 *= t23;
  t95 = t222 * t26_tmp;
  t96 = in2[71] * t57;
  t97 = t46_tmp * 2.0;
  t98 = (t19 + t21) - 1.0;
  t99 = -t7 + t18_tmp;
  t100 = t10 + t20_tmp;
  t102 = ((t60_tmp + in2[71] * t41) - in2[69] * t39) - t39_tmp * t45;
  t106_tmp = in2[69] * t30;
  b_t106_tmp = t6 * t28;
  c_t106_tmp = t28_tmp * t45;
  t106 = (((((-t33 + t58_tmp) - t94) - t95) + b_t106_tmp) + t106_tmp) +
    c_t106_tmp;
  t111_tmp = t6 * t55;
  b_t111_tmp = t55_tmp * t45;
  c_t111_tmp = t222 * t159;
  t111 = ((((t185 - t96) - t97) + t111_tmp) + b_t111_tmp) + c_t111_tmp;
  t120 = muDoubleScalarPower(muDoubleScalarAbs((((((((t106 * in2[168] + t111 *
    in2[170]) + t98 * in2[124]) + t99 * in2[123]) + t100 * in2[167]) - t98 *
    in2[166]) - t100 * in2[125]) - t99 * in2[165]) - t102 * in2[169]), in1[1] -
    1.0);
  t125 = in2[69] * t28;
  t126 = t53_tmp * 2.0;
  t127 = t36_tmp * 2.0;
  t5 = t7_tmp * t23;
  t128 = t5 * t213;
  t129 = (t21 + t22) - 1.0;
  t130 = t8 + t9;
  t131 = -t10 + t20_tmp;
  t133 = ((t60_tmp + in2[69] * t55) - in2[70] * t57) - t55_tmp * t47;
  t137_tmp = t6 * t30;
  b_t137_tmp = t28_tmp * t47;
  c_t137_tmp = t5 * t26_tmp;
  t137 = ((((t211 - t125) - t126) + t137_tmp) + b_t137_tmp) + c_t137_tmp;
  t26_tmp = in2[70] * t41;
  t55 = t6 * t39;
  t57 = t39_tmp * t47;
  t142 = (((((-t35 + t46_tmp) - t127) - t128) + t55) + t26_tmp) + t57;
  t151 = muDoubleScalarPower(muDoubleScalarAbs((((((((t137 * in2[168] + t142 *
    in2[169]) + t129 * in2[125]) + t131 * in2[124]) + t130 * in2[165]) - t129 *
    in2[167]) - t130 * in2[123]) - t131 * in2[166]) - t133 * in2[170]), in1[1] -
    1.0);
  t156 = in2[28] * 2.0;
  t158 = t16 + in2[27] * in2[69] * t15 * 2.0;
  t159 = in2[71] * 2.0;
  t161 = t159 + in2[28] * in2[69] * t15 * 2.0;
  t30 = in2[29] * in2[69] * t15 * 2.0;
  t28 = t5 * 2.0;
  t7_tmp = t39_tmp * t49 * 2.0;
  t165 = (t48 + t28) + t7_tmp;
  t166 = t14 * 2.0;
  t21 = t4 * t23 * 2.0;
  t22 = t28_tmp * t49 * 2.0;
  t169 = (t166 + t21) + t22;
  t41 = t222 * 2.0;
  t222 = t55_tmp * t49 * 2.0;
  t174 = (-t156 + t41) + t222;
  t176 = t17 - t30;
  t180 = muDoubleScalarPower(muDoubleScalarAbs(((((t169 * in2[168] + t165 * in2
    [169]) + t174 * in2[170]) + t176 * in2[128]) - t158 * in2[126]) - t161 *
    in2[127]), in1[1] - 1.0);
  t184 = t16 + in2[28] * in2[70] * t15 * 2.0;
  t185 = in2[27] * in2[70] * t15 * 2.0;
  t186 = in2[69] * 2.0;
  t188 = t186 + in2[29] * in2[70] * t15 * 2.0;
  t10_tmp = t28_tmp * t51 * 2.0;
  t190 = (-t48 + t28) + t10_tmp;
  t213 = t2 * t23 * 2.0;
  t19 = t39_tmp * t51 * 2.0;
  t193 = (t166 + t213) + t19;
  t39 = t208 * 2.0;
  t5 = t55_tmp * t51 * 2.0;
  t198 = (t59 + t39) + t5;
  t200 = t159 - t185;
  t204 = muDoubleScalarPower(muDoubleScalarAbs(((((t193 * in2[169] + t190 * in2
    [168]) + t198 * in2[170]) + t200 * in2[126]) - t184 * in2[127]) - t188 *
    in2[128]), in1[1] - 1.0);
  t208 = t16 + in2[29] * in2[71] * t15 * 2.0;
  t16 = t17 + in2[27] * in2[71] * t15 * 2.0;
  t211 = in2[28] * in2[71] * t15 * 2.0;
  memset(&out1[0], 0, 24U * sizeof(real_T));
  out1[24] = (t2 * -2.0 - t3 * 2.0) + 1.0;
  out1[25] = t67;
  out1[26] = -t8 + t9;
  memset(&out1[27], 0, 39U * sizeof(real_T));
  out1[66] = t66;
  out1[67] = -t7 - t18_tmp;
  out1[68] = t68;
  out1[69] = t70;
  out1[70] = (((((-t33 - t34_tmp) + t62) + t63) - t74_tmp) - b_t74_tmp) -
    c_t74_tmp;
  out1[71] = (((((t31 - t53_tmp) + t64) + t65) - t79_tmp) - b_t79_tmp) -
    c_t79_tmp;
  memset(&out1[72], 0, 43U * sizeof(real_T));
  out1[115] = t7 - t18_tmp;
  out1[116] = (t3 * -2.0 - t4 * 2.0) + 1.0;
  out1[117] = t100;
  memset(&out1[118], 0, 39U * sizeof(real_T));
  out1[157] = t99;
  out1[158] = t98;
  out1[159] = -t10 - t20_tmp;
  out1[160] = (((((t33 + t94) + t95) - t58_tmp) - t106_tmp) - b_t106_tmp) -
    c_t106_tmp;
  out1[161] = t102;
  out1[162] = (((((-t35 - t36_tmp) + t96) + t97) - t111_tmp) - b_t111_tmp) -
    c_t111_tmp;
  memset(&out1[163], 0, 43U * sizeof(real_T));
  out1[206] = t130;
  out1[207] = t10 - t20_tmp;
  out1[208] = (t2 * -2.0 - t4 * 2.0) + 1.0;
  memset(&out1[209], 0, 39U * sizeof(real_T));
  out1[248] = -t8 - t9;
  out1[249] = t131;
  out1[250] = t129;
  out1[251] = (((((-t31 - t32_tmp) + t125) + t126) - t137_tmp) - b_t137_tmp) -
    c_t137_tmp;
  out1[252] = (((((t35 - t46_tmp) + t127) + t128) - t26_tmp) - t55) - t57;
  out1[253] = t133;
  memset(&out1[254], 0, 46U * sizeof(real_T));
  out1[300] = t158;
  out1[301] = t161;
  out1[302] = -t17 + t30;
  memset(&out1[303], 0, 39U * sizeof(real_T));
  out1[342] = (t14 * -2.0 - t21) - t22;
  out1[343] = (-t48 - t28) - t7_tmp;
  out1[344] = (t156 - t41) - t222;
  memset(&out1[345], 0, 46U * sizeof(real_T));
  out1[391] = in2[71] * -2.0 + t185;
  out1[392] = t184;
  out1[393] = t188;
  memset(&out1[394], 0, 39U * sizeof(real_T));
  out1[433] = (t48 - t28) - t10_tmp;
  out1[434] = (t14 * -2.0 - t213) - t19;
  out1[435] = (-t59 - t39) - t5;
  memset(&out1[436], 0, 46U * sizeof(real_T));
  out1[482] = t16;
  out1[483] = in2[69] * -2.0 + t211;
  out1[484] = t208;
  memset(&out1[485], 0, 39U * sizeof(real_T));
  t222 = t28_tmp * t52 * 2.0;
  out1[524] = (in2[28] * -2.0 - t41) - t222;
  t19 = t39_tmp * t52 * 2.0;
  out1[525] = (t59 - t39) - t19;
  t28 = t3 * t23 * 2.0;
  t5 = t55_tmp * t52 * 2.0;
  out1[526] = (t14 * -2.0 - t28) - t5;
  memset(&out1[527], 0, 19U * sizeof(real_T));
  t213 = (t156 + t41) + t222;
  t185 = (t166 + t28) + t5;
  t159 = (-t59 + t39) + t19;
  t222 = t186 - t211;
  t19 = muDoubleScalarPower(muDoubleScalarAbs(((((t185 * in2[170] + t213 * in2
    [168]) + t159 * in2[169]) + t222 * in2[127]) - t208 * in2[128]) - t16 * in2
    [126]), in1[1] - 1.0);
  out2[0] = in1[0] * (((in2[71] * t45 - in2[70] * t47) + in2[69] * t60_tmp) + t6
                      * t37) * -0.00026666666666666668;
  out2[1] = in1[0] * (((-in2[71] * t37 + in2[69] * t47) + in2[70] * t60_tmp) +
                      t6 * t45) * -0.00026666666666666668;
  out2[2] = in1[0] * ((((-83.721409235974619 + in2[70] * t37) - in2[69] * t45) +
                       in2[71] * t60_tmp) + t6 * t47) * -0.0008;
  out2[3] = in1[0] * (((in2[70] * t52 * -2.0 + in2[71] * t51 * 2.0) + in2[69] *
                       t61 * 2.0) + t6 * t49 * 2.0) * -4.2666666666666668E-11;
  out2[4] = in1[0] * (((in2[71] * t49 * -2.0 + in2[69] * t52 * 2.0) + in2[70] *
                       t61 * 2.0) + t6 * t51 * 2.0) * -1.421066666666666E-8;
  out2[5] = in1[0] * (((in2[70] * t49 * 2.0 - in2[69] * t51 * 2.0) + in2[71] *
                       t61 * 2.0) + t6 * t52 * 2.0) * -4.75111111111111E-9;
  t10_tmp = in1[2] * t66 * t89;
  t5 = in1[2] * t67 * t89;
  t28 = in1[2] * t68 * t89;
  out3[0] = (((((((t10_tmp * in2[123] - t5 * in2[124]) + t28 * in2[125]) -
                 t10_tmp * in2[165]) + t5 * in2[166]) - t28 * in2[167]) - in1[2]
              * t70 * t89 * in2[168]) + in1[2] * t74 * t89 * in2[169]) + in1[2] *
    t79 * t89 * in2[170];
  t10_tmp = in1[2] * t98 * t120;
  t5 = in1[2] * t99 * t120;
  t28 = in1[2] * t100 * t120;
  out3[1] = (((((((t10_tmp * in2[124] + t5 * in2[123]) - t28 * in2[125]) -
                 t10_tmp * in2[166]) - t5 * in2[165]) + t28 * in2[167]) - in1[2]
              * t102 * t120 * in2[169]) + in1[2] * t106 * t120 * in2[168]) +
    in1[2] * t111 * t120 * in2[170];
  t10_tmp = in1[2] * t129 * t151;
  t5 = in1[2] * t131 * t151;
  out3[2] = (((((((-in1[2] * t130 * t151 * in2[123] + t10_tmp * in2[125]) + t5 *
                  in2[124]) + in1[2] * t130 * t151 * in2[165]) - t10_tmp * in2
                [167]) - t5 * in2[166]) - in1[2] * t133 * t151 * in2[170]) +
             in1[2] * t137 * t151 * in2[168]) + in1[2] * t142 * t151 * in2[169];
  out3[3] = ((((-in1[3] * t158 * t180 * in2[126] - in1[3] * t161 * t180 * in2
                [127]) + in1[3] * t176 * t180 * in2[128]) + in1[3] * t165 * t180
              * in2[169]) + in1[3] * t169 * t180 * in2[168]) + in1[3] * t174 *
    t180 * in2[170];
  out3[4] = ((((-in1[3] * t184 * t204 * in2[127] - in1[3] * t188 * t204 * in2
                [128]) + in1[3] * t200 * t204 * in2[126]) + in1[3] * t190 * t204
              * in2[168]) + in1[3] * t193 * t204 * in2[169]) + in1[3] * t198 *
    t204 * in2[170];
  out3[5] = ((((-in1[3] * t208 * t19 * in2[128] - in1[3] * t16 * t19 * in2[126])
               + in1[3] * t222 * t19 * in2[127]) + in1[3] * t213 * t19 * in2[168])
             + in1[3] * t185 * t19 * in2[170]) + in1[3] * t159 * t19 * in2[169];
  for (i = 0; i < 6; i++) {
    out4[i] = 0.0;
  }
}

/* End of code generation (sprdmpF101.c) */