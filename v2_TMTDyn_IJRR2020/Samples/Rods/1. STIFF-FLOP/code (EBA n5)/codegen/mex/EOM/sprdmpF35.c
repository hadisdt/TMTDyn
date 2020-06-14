/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sprdmpF35.c
 *
 * Code generation for function 'sprdmpF35'
 *
 */

/* Include files */
#include <string.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "EOM.h"
#include "sprdmpF35.h"
#include "sqrt.h"

/* Variable Definitions */
static emlrtRSInfo wi_emlrtRSI = { 57, /* lineNo */
  "sprdmpF35",                         /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/sprdmpF35.m"/* pathName */
};

static emlrtRSInfo xi_emlrtRSI = { 63, /* lineNo */
  "sprdmpF35",                         /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/sprdmpF35.m"/* pathName */
};

static emlrtRSInfo cj_emlrtRSI = { 93, /* lineNo */
  "sprdmpF35",                         /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/sprdmpF35.m"/* pathName */
};

static emlrtRSInfo dj_emlrtRSI = { 105,/* lineNo */
  "sprdmpF35",                         /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/sprdmpF35.m"/* pathName */
};

static emlrtRSInfo xj_emlrtRSI = { 310,/* lineNo */
  "sprdmpF35",                         /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/sprdmpF35.m"/* pathName */
};

static emlrtRSInfo yj_emlrtRSI = { 311,/* lineNo */
  "sprdmpF35",                         /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/sprdmpF35.m"/* pathName */
};

static emlrtRSInfo bk_emlrtRSI = { 314,/* lineNo */
  "sprdmpF35",                         /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/sprdmpF35.m"/* pathName */
};

/* Function Definitions */
void sprdmpF35(const emlrtStack *sp, const real_T in1[34], const real_T in2[60],
               real_T out1[180], real_T out2[6], real_T out3[6], real_T out4[6])
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
  real_T t184;
  real_T t237;
  real_T t216;
  real_T t17_tmp;
  real_T t17;
  real_T t19;
  real_T t20;
  real_T t211;
  real_T t22_tmp;
  real_T t23_tmp;
  real_T t212;
  real_T t25;
  real_T t26_tmp;
  real_T t197;
  real_T t248;
  real_T t27;
  real_T t29_tmp;
  real_T t29;
  real_T t31;
  real_T t194;
  real_T t32_tmp;
  real_T t32;
  real_T t34;
  real_T t35;
  real_T t36;
  real_T t41;
  real_T t42;
  real_T t43;
  real_T t46_tmp;
  real_T t46;
  real_T t48;
  real_T t49;
  real_T t50_tmp;
  real_T t213;
  real_T t51_tmp;
  real_T t52_tmp;
  real_T t52;
  real_T t235;
  real_T t53_tmp;
  real_T t54;
  real_T t55;
  real_T t56;
  real_T t57;
  real_T t60;
  real_T t61;
  real_T t64;
  real_T t65;
  real_T t66;
  real_T t242;
  real_T t69_tmp;
  real_T t72_tmp;
  real_T t73_tmp;
  real_T t74_tmp;
  real_T t75_tmp;
  real_T t86;
  real_T t89;
  real_T t93;
  real_T t97;
  real_T t98;
  real_T t99;
  real_T t100;
  real_T t101;
  real_T t102;
  real_T t113_tmp;
  real_T t113;
  real_T t117;
  real_T t122;
  real_T t123;
  real_T t124;
  real_T t128;
  real_T t129;
  real_T t130;
  real_T t131;
  real_T t132;
  real_T t133;
  real_T t134_tmp;
  real_T b_t134_tmp;
  real_T t134;
  real_T t143_tmp;
  real_T t143;
  real_T t146;
  real_T t156;
  real_T t160;
  real_T t161;
  real_T t162;
  real_T t163;
  real_T t176;
  real_T t179;
  real_T t188;
  real_T t190;
  real_T t193;
  real_T t196;
  real_T t199;
  real_T t203;
  real_T t207;
  real_T t215;
  real_T t219;
  real_T t220;
  real_T t222;
  real_T t225;
  real_T t227;
  real_T t231;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /* SPRDMPF35 */
  /*     [OUT1,OUT2,OUT3,OUT4,OUT5,OUT6,OUT7,OUT8] = SPRDMPF35(IN1,IN2,S) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.2. */
  /*     06-Jan-2019 19:57:14 */
  t2 = in2[22] * in2[22];
  t3 = in2[23] * in2[23];
  t4 = in2[21] * in2[21];
  t5 = ((-t2 - t3) - t4) + 1.0;
  t6 = t5;
  st.site = &wi_emlrtRSI;
  b_sqrt(&st, &t6);
  t7 = in2[23] * t6 * 2.0;
  t8 = t3 * 2.0;
  t9 = in2[21] * t6 * 2.0;
  t10 = t4 * 2.0;
  t11 = t2 * 2.0;
  st.site = &xi_emlrtRSI;
  b_sqrt(&st, &t5);
  t12 = 1.0 / t5;
  t184 = in2[19] - in2[25];
  t237 = in2[20] - in2[26];
  t216 = in2[18] - in2[24];
  t17_tmp = in2[21] * t12;
  t17 = (-in2[20] + in2[26]) + t17_tmp * t184;
  t19 = t184 + t17_tmp * t237;
  t20 = t6 * t184;
  t211 = in2[21] * t237;
  t22_tmp = in2[21] * t184;
  t23_tmp = t6 * t237;
  t212 = in2[22] * t216;
  t25 = t6 * t216;
  t26_tmp = in2[23] * t184;
  t197 = in2[22] * t237;
  t248 = t25 + t26_tmp;
  t27 = t248 - t197;
  t29_tmp = in2[22] * t12;
  t29 = (-in2[18] + in2[24]) + t29_tmp * t237;
  t31 = t237 + t29_tmp * t216;
  t194 = in2[23] * t216;
  t32_tmp = t20 + t211;
  t32 = t32_tmp - t194;
  t34 = (-t22_tmp + t23_tmp) + t212;
  t35 = in2[29] * 2.0;
  t36 = in2[21] - in2[27];
  t5 = ((-(in2[27] * in2[27]) - in2[28] * in2[28]) - in2[29] * in2[29]) + 1.0;
  t41 = t5;
  st.site = &cj_emlrtRSI;
  b_sqrt(&st, &t41);
  t42 = in2[22] - in2[28];
  t43 = in2[23] - in2[29];
  t46_tmp = in2[23] * t12;
  t46 = t216 + t46_tmp * t184;
  t48 = (-in2[19] + in2[25]) + t46_tmp * t216;
  t49 = in2[27] * 2.0;
  t50_tmp = in2[22] * t6 * 2.0;
  t213 = in2[21] * in2[22];
  t51_tmp = t213 * 2.0;
  t52_tmp = in2[21] * in2[23];
  t52 = t52_tmp * 2.0;
  t235 = in2[22] * in2[23];
  t53_tmp = t235 * 2.0;
  st.site = &dj_emlrtRSI;
  b_sqrt(&st, &t5);
  t54 = 1.0 / t5;
  t55 = t6 * 2.0;
  t56 = in2[22] * 2.0;
  t57 = 1.0 / in1[33];
  t5 = muDoubleScalarCos(in1[20]);
  t60 = in1[2] * in1[2];
  t61 = in1[3] * in1[3];
  t64 = in1[18] * in1[18];
  t65 = muDoubleScalarSin(in1[20]);
  t66 = 1.0 / (t65 * t65);
  t242 = in1[33] * in1[33];
  t69_tmp = t242 * (t5 * t5);
  t72_tmp = in2[21] * t216;
  t73_tmp = in2[22] * t184;
  t74_tmp = in2[23] * t237;
  t75_tmp = (t72_tmp + t73_tmp) + t74_tmp;
  t86 = 1.0 / t242 * (t60 * t60 - t61 * t61) + t64 * t64 * (1.0 /
    muDoubleScalarPower(t65, 4.0)) * ((t69_tmp - 1.0) * (t69_tmp - 1.0)) * 6.0;
  t89 = t6 - t41;
  t242 = t235 * t12;
  t93 = (((((t23_tmp + t212) + t6 * t31) + t29_tmp * t27) + t242 * t184) - in2
         [22] * t29) - t22_tmp * 2.0;
  t97 = (((((-t20 + t194) + t6 * t48) + in2[23] * t46) + t46_tmp * t27) - t211 *
         2.0) - t242 * t237;
  t98 = (t8 + t11) - 1.0;
  t99 = t7 + t51_tmp;
  t100 = t50_tmp - t52;
  t101 = in2[23] * t17;
  t102 = t17_tmp * t27;
  t113_tmp = in2[22] * t19;
  t113 = ((t75_tmp - t101) - t102) + t113_tmp;
  t117 = muDoubleScalarPower(muDoubleScalarAbs((((((((t93 * in2[52] + t97 * in2
    [53]) + t98 * in2[48]) + t100 * in2[50]) + t99 * in2[55]) - t98 * in2[54]) -
    t99 * in2[49]) - t100 * in2[56]) - t113 * in2[51]), in1[11] - 1.0);
  t122 = t6 * t17;
  t123 = in2[21] * t19;
  t124 = t17_tmp * t32;
  t5 = t52_tmp * t12;
  t128 = ((((t248 + t6 * t46) + t46_tmp * t32) + t5 * t237) - in2[23] * t48) -
    t197 * 2.0;
  t129 = (t8 + t10) - 1.0;
  t130 = t9 + t53_tmp;
  t131 = t7 - t51_tmp;
  t132 = in2[21] * t29;
  t133 = t29_tmp * t32;
  t134_tmp = t212 * 2.0;
  b_t134_tmp = t5 * t216;
  t134 = (((((t22_tmp - t23_tmp) + t122) + t123) + t124) - t134_tmp) -
    b_t134_tmp;
  t143_tmp = in2[23] * t31;
  t143 = ((t75_tmp - t132) - t133) + t143_tmp;
  t146 = muDoubleScalarPower(muDoubleScalarAbs((((((((t134 * in2[51] + t128 *
    in2[53]) + t129 * in2[49]) + t131 * in2[48]) + t130 * in2[56]) - t129 * in2
    [55]) - t130 * in2[50]) - t131 * in2[54]) - t143 * in2[52]), in1[11] - 1.0);
  t65 = t213 * t12;
  t156 = ((((t32_tmp + t6 * t19) + t17_tmp * t34) + t65 * t216) - in2[21] * t17)
    - t194 * 2.0;
  t160 = (((((-t25 + t197) + t6 * t29) + in2[22] * t31) + t29_tmp * t34) -
          t26_tmp * 2.0) - t65 * t184;
  t161 = (t10 + t11) - 1.0;
  t162 = t50_tmp + t52;
  t163 = t9 - t53_tmp;
  t29 = in2[22] * t48;
  t31 = t46_tmp * t34;
  t32_tmp = in2[21] * t46;
  t176 = ((t75_tmp - t29) - t31) + t32_tmp;
  t179 = muDoubleScalarPower(muDoubleScalarAbs((((((((t156 * in2[51] + t160 *
    in2[52]) + t161 * in2[50]) + t163 * in2[49]) + t162 * in2[54]) - t161 * in2
    [56]) - t162 * in2[48]) - t163 * in2[55]) - t176 * in2[53]), in1[11] - 1.0);
  t184 = t17_tmp * t36 * 2.0;
  t25 = t29_tmp * t36 * 2.0;
  t48 = in2[28] * 2.0;
  t26_tmp = t5 * 2.0;
  t188 = (t48 + t46_tmp * t36 * 2.0) - t26_tmp;
  t190 = t55 + in2[21] * in2[27] * t54 * 2.0;
  t5 = in2[23] * 2.0;
  t193 = t5 + in2[21] * in2[28] * t54 * 2.0;
  t194 = in2[21] * in2[29] * t54 * 2.0;
  t17 = t65 * 2.0;
  t196 = (t35 - t25) + t17;
  t197 = t41 * 2.0;
  t20 = t4 * t12 * 2.0;
  t199 = (-t184 + t197) + t20;
  t203 = t56 - t194;
  t207 = muDoubleScalarPower(muDoubleScalarAbs(((((t199 * in2[51] + t196 * in2
    [52]) + t203 * in2[59]) - t188 * in2[53]) - t190 * in2[57]) - t193 * in2[58]),
    in1[11] - 1.0);
  t211 = t29_tmp * t42 * 2.0;
  t212 = t17_tmp * t42 * 2.0;
  t213 = t46_tmp * t42 * 2.0;
  t215 = t55 + in2[22] * in2[28] * t54 * 2.0;
  t216 = in2[22] * in2[27] * t54 * 2.0;
  t46 = in2[21] * 2.0;
  t219 = t46 + in2[22] * in2[29] * t54 * 2.0;
  t220 = (t35 - t17) + t212;
  t248 = t2 * t12 * 2.0;
  t222 = (t197 - t211) + t248;
  t19 = t242 * 2.0;
  t225 = (t49 - t213) + t19;
  t227 = t5 - t216;
  t231 = muDoubleScalarPower(muDoubleScalarAbs(((((t222 * in2[52] + t225 * in2
    [53]) + t227 * in2[57]) - t220 * in2[51]) - t215 * in2[58]) - t219 * in2[59]),
    in1[11] - 1.0);
  t235 = t46_tmp * t43 * 2.0;
  t65 = t17_tmp * t43 * 2.0;
  t237 = t29_tmp * t43 * 2.0;
  t4 = t55 + in2[23] * in2[29] * t54 * 2.0;
  t2 = t56 + in2[23] * in2[27] * t54 * 2.0;
  t242 = in2[23] * in2[28] * t54 * 2.0;
  memset(&out1[0], 0, 18U * sizeof(real_T));
  out1[18] = t98;
  out1[19] = -t7 - t51_tmp;
  out1[20] = t50_tmp - in2[21] * in2[23] * 2.0;
  out1[21] = ((((t101 + t102) - t73_tmp) - t72_tmp) - t74_tmp) - t113_tmp;
  out1[22] = t93;
  out1[23] = t97;
  out1[24] = (-t8 - t11) + 1.0;
  out1[25] = t99;
  out1[26] = -t50_tmp + t52;
  memset(&out1[27], 0, 21U * sizeof(real_T));
  out1[48] = t7 - in2[21] * in2[22] * 2.0;
  out1[49] = t129;
  out1[50] = -t9 - t53_tmp;
  out1[51] = (((((t22_tmp + t122) + t123) + t124) - t134_tmp) - t23_tmp) -
    b_t134_tmp;
  out1[52] = ((((t132 + t133) - t73_tmp) - t72_tmp) - t74_tmp) - t143_tmp;
  out1[53] = t128;
  out1[54] = -t7 + t51_tmp;
  out1[55] = (-t8 - t10) + 1.0;
  out1[56] = t130;
  memset(&out1[57], 0, 21U * sizeof(real_T));
  out1[78] = t52_tmp * -2.0 - t50_tmp;
  out1[79] = t9 - in2[22] * in2[23] * 2.0;
  out1[80] = t161;
  out1[81] = t156;
  out1[82] = t160;
  out1[83] = ((((t29 + t31) - t73_tmp) - t72_tmp) - t74_tmp) - t32_tmp;
  out1[84] = t162;
  out1[85] = -t9 + t53_tmp;
  out1[86] = (-t10 - t11) + 1.0;
  memset(&out1[87], 0, 24U * sizeof(real_T));
  out1[111] = (t41 * -2.0 + t184) - t20;
  out1[112] = (-t35 + t25) - t17;
  out1[113] = t188;
  out1[114] = 0.0;
  out1[115] = 0.0;
  out1[116] = 0.0;
  out1[117] = t190;
  out1[118] = t193;
  out1[119] = -t56 + t194;
  memset(&out1[120], 0, 21U * sizeof(real_T));
  out1[141] = (t35 + t212) - t17;
  out1[142] = (t41 * -2.0 + t211) - t248;
  out1[143] = (-t49 + t213) - t19;
  out1[144] = 0.0;
  out1[145] = 0.0;
  out1[146] = 0.0;
  out1[147] = in2[23] * -2.0 + t216;
  out1[148] = t215;
  out1[149] = t219;
  memset(&out1[150], 0, 21U * sizeof(real_T));
  out1[171] = (in2[28] * -2.0 + t65) - t26_tmp;
  out1[172] = (t49 + t237) - t19;
  t5 = t3 * t12 * 2.0;
  out1[173] = (t41 * -2.0 + t235) - t5;
  out1[174] = 0.0;
  out1[175] = 0.0;
  out1[176] = 0.0;
  out1[177] = t2;
  out1[178] = in2[21] * -2.0 + t242;
  out1[179] = t4;
  t216 = (t48 + t26_tmp) - t65;
  t212 = (t197 - t235) + t5;
  t248 = (t49 - t19) + t237;
  t65 = t46 - t242;
  t237 = muDoubleScalarPower(muDoubleScalarAbs(((((t212 * in2[53] + t216 * in2
    [51]) + t65 * in2[58]) - t248 * in2[52]) - t4 * in2[59]) - t2 * in2[57]),
    in1[11] - 1.0);
  t5 = in1[33];
  st.site = &xj_emlrtRSI;
  b_sqrt(&st, &t5);
  t213 = 1.0 / t5;
  t5 = 70.0;
  st.site = &yj_emlrtRSI;
  b_sqrt(&st, &t5);
  t20 = in1[4] * in1[4] / 25.0;
  st.site = &bk_emlrtRSI;
  b_sqrt(&st, &t20);
  t211 = in1[1] * t57 * (1.0 / in1[4]);
  t5 = t211 * (t57 * (t60 - t61) - t64 * t66 * (t69_tmp - 1.0) * 6.0) *
    3.1415926535897931;
  out2[0] = t5 * (((in2[23] * t32 - in2[22] * t34) + in2[21] * t75_tmp) + t6 *
                  t27) * -1.6666666666666667;
  out2[1] = t5 * (((-in2[23] * t27 + in2[21] * t34) + in2[22] * t75_tmp) + t6 *
                  t32) * -1.6666666666666667;
  out2[2] = t5 * ((((t20 + in2[22] * t27) - in2[21] * t32) + in2[23] * t75_tmp)
                  + t6 * t34) * -5.0;
  t5 = t211 * (t86 * 3.1415926535897931 / 4.0 - t57 * t64 * t66 * (t69_tmp - 1.0)
               * (in1[19] * in1[19]) * 3.1415926535897931 * 3.0);
  out2[3] = t5 * (((in2[22] * t43 * 2.0 - in2[23] * t42 * 2.0) + in2[21] * t89 *
                   2.0) - t6 * t36 * 2.0) * 5.0;
  out2[4] = t5 * (((in2[23] * t36 * 2.0 - in2[21] * t43 * 2.0) + in2[22] * t89 *
                   2.0) - t6 * t42 * 2.0) * 5.0;
  out2[5] = t211 * t86 * 3.1415926535897931 * (((in2[22] * t36 * 2.0 - in2[21] *
    t42 * 2.0) - in2[23] * t89 * 2.0) + t6 * t43 * 2.0) * -0.83333333333333337;
  t235 = in1[5] * t98 * t117;
  t242 = in1[5] * t99 * t117;
  t5 = in1[5] * t100 * t117;
  out3[0] = (((((((-in1[5] * t93 * t117 * in2[52] - t235 * in2[48]) + t242 *
                  in2[49]) - in1[5] * t97 * t117 * in2[53]) - t5 * in2[50]) +
               t235 * in2[54]) - t242 * in2[55]) + t5 * in2[56]) + in1[5] * t113
    * t117 * in2[51];
  t235 = in1[6] * t131 * t146;
  t242 = in1[6] * t130 * t146;
  out3[1] = (((((((-in1[6] * t129 * t146 * in2[49] - t235 * in2[48]) + t242 *
                  in2[50]) - in1[6] * t128 * t146 * in2[53]) + in1[6] * t129 *
                t146 * in2[55]) + t235 * in2[54]) - in1[6] * t134 * t146 * in2
              [51]) - t242 * in2[56]) + in1[6] * t143 * t146 * in2[52];
  t235 = in1[7] * t162 * t179;
  t242 = in1[7] * t161 * t179;
  t5 = in1[7] * t163 * t179;
  out3[2] = (((((((-in1[7] * t156 * t179 * in2[51] + t235 * in2[48]) - t242 *
                  in2[50]) - in1[7] * t160 * t179 * in2[52]) - t5 * in2[49]) -
               t235 * in2[54]) + t242 * in2[56]) + t5 * in2[55]) + in1[7] * t176
    * t179 * in2[53];
  out3[3] = ((((-in1[8] * t188 * t207 * in2[53] - in1[8] * t190 * t207 * in2[57])
               + in1[8] * t196 * t207 * in2[52]) + in1[8] * t199 * t207 * in2[51])
             - in1[8] * t193 * t207 * in2[58]) + in1[8] * t203 * t207 * in2[59];
  out3[4] = ((((-in1[9] * t220 * t231 * in2[51] - in1[9] * t215 * t231 * in2[58])
               + in1[9] * t222 * t231 * in2[52]) - in1[9] * t219 * t231 * in2[59])
             + in1[9] * t225 * t231 * in2[53]) + in1[9] * t227 * t231 * in2[57];
  out3[5] = ((((in1[10] * t216 * t237 * in2[51] - in1[10] * t4 * t237 * in2[59])
               - in1[10] * t2 * t237 * in2[57]) + in1[10] * t212 * t237 * in2[53])
             - in1[10] * t248 * t237 * in2[52]) + in1[10] * t65 * t237 * in2[58];
  out4[0] = 0.0;
  out4[1] = 0.0;
  out4[2] = -t64 * t66 * (t69_tmp - 1.0) * 3.1415926535897931 * (((((in1[21] +
    in1[22]) + in1[23]) + in1[24]) + in1[25]) + in1[26]);
  t242 = in1[23] * in1[19] * t64 * t66 * (t69_tmp - 1.0) * t213 *
    3.1415926535897931;
  t235 = in1[24] * in1[19] * t64 * t66 * (t69_tmp - 1.0) * t213 *
    3.1415926535897931;
  t20 = in1[25] * in1[19] * t64 * t66 * (t69_tmp - 1.0) * t213 *
    3.1415926535897931;
  t211 = in1[26] * in1[19] * t64 * t66 * (t69_tmp - 1.0) * t213 *
    3.1415926535897931;
  t65 = in1[21] * in1[19] * t64 * t66 * (t69_tmp - 1.0) * t213;
  t5 = in1[22] * in1[19] * t64 * t66 * (t69_tmp - 1.0) * t213;
  out4[3] = ((((t65 * 3.1415926535897931 * -0.93771626297577859 - t5 *
                3.1415926535897931 * 0.93771626297577859) + t242 *
               0.167999098695029) + t235 * 0.76971716428074954) + t20 *
             0.76971716428074932) + t211 * 0.16799909869502891;
  out4[4] = ((((t242 * 0.9857871488499218 + t235 * 0.63838506170774523) - t20 *
               0.63838506170774545) - t211 * 0.9857871488499218) - t65 *
             8.3666002653407556 * 3.1415926535897931 * 0.041522491349480967) +
    t5 * 8.3666002653407556 * 3.1415926535897931 * 0.041522491349480967;
  out4[5] = 0.0;
}

/* End of code generation (sprdmpF35.c) */
