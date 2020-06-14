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
#include "EOM.h"
#include "sprdmpF101.h"
#include "sqrt.h"

/* Variable Definitions */
static emlrtRSInfo os_emlrtRSI = { 41, /* lineNo */
  "sprdmpF101",                        /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/sprdmpF101.m"/* pathName */
};

static emlrtRSInfo ps_emlrtRSI = { 47, /* lineNo */
  "sprdmpF101",                        /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/sprdmpF101.m"/* pathName */
};

static emlrtRSInfo ts_emlrtRSI = { 77, /* lineNo */
  "sprdmpF101",                        /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/sprdmpF101.m"/* pathName */
};

static emlrtRSInfo us_emlrtRSI = { 89, /* lineNo */
  "sprdmpF101",                        /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/sprdmpF101.m"/* pathName */
};

static emlrtRSInfo gt_emlrtRSI = { 289,/* lineNo */
  "sprdmpF101",                        /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/sprdmpF101.m"/* pathName */
};

/* Function Definitions */
void sprdmpF101(const emlrtStack *sp, const real_T in1[6], const real_T in2[206],
                real_T out1[546], real_T out2[6], real_T out3[6], real_T out4[6])
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
  real_T t169;
  real_T t227;
  real_T t15_tmp;
  real_T t17_tmp;
  real_T t17;
  real_T t19;
  real_T t20;
  real_T t229;
  real_T t22_tmp;
  real_T t23_tmp;
  real_T t197;
  real_T t25;
  real_T t181;
  real_T t223;
  real_T t196;
  real_T t27;
  real_T t29_tmp;
  real_T t29;
  real_T t31;
  real_T t44_tmp;
  real_T t168;
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
  real_T t200;
  real_T t51_tmp;
  real_T t52_tmp;
  real_T t52;
  real_T t220;
  real_T t53_tmp;
  real_T t54;
  real_T t55;
  real_T t56;
  real_T t58;
  real_T t60_tmp;
  real_T t61_tmp;
  real_T t62_tmp;
  real_T t63_tmp;
  real_T t66;
  real_T t69;
  real_T a;
  real_T t71;
  real_T a_tmp;
  real_T b_a_tmp;
  real_T b_a;
  real_T t73;
  real_T t77;
  real_T t81;
  real_T t82;
  real_T t83;
  real_T t84;
  real_T t85;
  real_T t86;
  real_T t97_tmp;
  real_T t97;
  real_T t101;
  real_T t106;
  real_T t107;
  real_T t108;
  real_T t112;
  real_T t113;
  real_T t114;
  real_T t115;
  real_T t116;
  real_T t117;
  real_T t118_tmp;
  real_T b_t118_tmp;
  real_T t118;
  real_T t127_tmp;
  real_T t127;
  real_T t130;
  real_T t140;
  real_T t144;
  real_T t145;
  real_T t146;
  real_T t147;
  real_T t160;
  real_T t163;
  real_T t172;
  real_T t174;
  real_T t177;
  real_T t180;
  real_T t183;
  real_T t187;
  real_T t191;
  real_T t199;
  real_T t203;
  real_T t204;
  real_T t206;
  real_T t209;
  real_T t215;
  int32_T i;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /* SPRDMPF101 */
  /*     [OUT1,OUT2,OUT3,OUT4,OUT5,OUT6,OUT7,OUT8] = SPRDMPF101(IN1,IN2,S) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.2. */
  /*     09-Jan-2019 03:28:27 */
  t2 = in2[28] * in2[28];
  t3 = in2[29] * in2[29];
  t4 = in2[27] * in2[27];
  t5 = ((-t2 - t3) - t4) + 1.0;
  t6 = t5;
  st.site = &os_emlrtRSI;
  b_sqrt(&st, &t6);
  t7 = in2[29] * t6 * 2.0;
  t8 = t3 * 2.0;
  t9 = in2[27] * t6 * 2.0;
  t10 = t4 * 2.0;
  t11 = t2 * 2.0;
  st.site = &ps_emlrtRSI;
  b_sqrt(&st, &t5);
  t12 = 1.0 / t5;
  t169 = in2[25] - in2[31];
  t227 = in2[26] - in2[32];
  t15_tmp = in2[24] - in2[30];
  t17_tmp = in2[27] * t12;
  t17 = (-in2[26] + in2[32]) + t17_tmp * t169;
  t19 = t169 + t17_tmp * t227;
  t20 = t6 * t169;
  t229 = in2[27] * t227;
  t22_tmp = in2[27] * t169;
  t23_tmp = t6 * t227;
  t197 = in2[28] * t15_tmp;
  t25 = t6 * t15_tmp;
  t181 = in2[29] * t169;
  t223 = in2[28] * t227;
  t196 = t25 + t181;
  t27 = t196 - t223;
  t29_tmp = in2[28] * t12;
  t29 = (-in2[24] + in2[30]) + t29_tmp * t227;
  t31 = t227 + t29_tmp * t15_tmp;
  t44_tmp = in2[29] * t15_tmp;
  t168 = t20 + t229;
  t32 = t168 - t44_tmp;
  t34 = (-t22_tmp + t23_tmp) + t197;
  t35 = in2[35] * 2.0;
  t36 = in2[27] - in2[33];
  t5 = ((-(in2[33] * in2[33]) - in2[34] * in2[34]) - in2[35] * in2[35]) + 1.0;
  t41 = t5;
  st.site = &ts_emlrtRSI;
  b_sqrt(&st, &t41);
  t42 = in2[28] - in2[34];
  t43 = in2[29] - in2[35];
  t46_tmp = in2[29] * t12;
  t46 = t15_tmp + t46_tmp * t169;
  t48 = (-in2[25] + in2[31]) + t46_tmp * t15_tmp;
  t49 = in2[33] * 2.0;
  t50_tmp = in2[28] * t6 * 2.0;
  t200 = in2[27] * in2[28];
  t51_tmp = t200 * 2.0;
  t52_tmp = in2[27] * in2[29];
  t52 = t52_tmp * 2.0;
  t220 = in2[28] * in2[29];
  t53_tmp = t220 * 2.0;
  st.site = &us_emlrtRSI;
  b_sqrt(&st, &t5);
  t54 = 1.0 / t5;
  t55 = t6 * 2.0;
  t56 = in2[28] * 2.0;
  t5 = in1[4] / 2.0;
  t58 = muDoubleScalarCos(t5);
  t5 = muDoubleScalarSin(t5);
  t60_tmp = in2[27] * t15_tmp;
  t61_tmp = in2[28] * t169;
  t62_tmp = in2[29] * t227;
  t63_tmp = (t60_tmp + t61_tmp) + t62_tmp;
  t66 = t58 * 0.333 - t5 / 25.0;
  t69 = t58 / 25.0 + t5 * 0.333;
  a = ((t58 * t66 - t5 * t69) - t58 * t58 * 0.333) + t5 * t5 * 0.333;
  t71 = t58 * t5 * 0.666;
  a_tmp = t5 * t66;
  b_a_tmp = t58 * t69;
  b_a = (-t71 + b_a_tmp) + a_tmp;
  t73 = t6 - t41;
  t66 = t220 * t12;
  t77 = (((((t23_tmp + t197) + t6 * t31) + t29_tmp * t27) + t66 * t169) - in2[28]
         * t29) - t22_tmp * 2.0;
  t81 = (((((-t20 + t44_tmp) + t6 * t48) + in2[29] * t46) + t46_tmp * t27) -
         t229 * 2.0) - t66 * t227;
  t82 = (t8 + t11) - 1.0;
  t83 = t7 + t51_tmp;
  t84 = t50_tmp - t52;
  t85 = in2[29] * t17;
  t86 = t17_tmp * t27;
  t97_tmp = in2[28] * t19;
  t97 = ((t63_tmp - t85) - t86) + t97_tmp;
  t101 = muDoubleScalarPower(muDoubleScalarAbs((((((((t77 * in2[131] + t81 *
    in2[132]) + t82 * in2[127]) + t84 * in2[129]) + t83 * in2[134]) - t82 * in2
    [133]) - t83 * in2[128]) - t84 * in2[135]) - t97 * in2[130]), in1[1] - 1.0);
  t106 = t6 * t17;
  t107 = in2[27] * t19;
  t108 = t17_tmp * t32;
  t5 = t52_tmp * t12;
  t112 = ((((t196 + t6 * t46) + t46_tmp * t32) + t5 * t227) - in2[29] * t48) -
    t223 * 2.0;
  t113 = (t8 + t10) - 1.0;
  t114 = t9 + t53_tmp;
  t115 = t7 - t51_tmp;
  t116 = in2[27] * t29;
  t117 = t29_tmp * t32;
  t118_tmp = t197 * 2.0;
  b_t118_tmp = t5 * t15_tmp;
  t118 = (((((t22_tmp - t23_tmp) + t106) + t107) + t108) - t118_tmp) -
    b_t118_tmp;
  t127_tmp = in2[29] * t31;
  t127 = ((t63_tmp - t116) - t117) + t127_tmp;
  t130 = muDoubleScalarPower(muDoubleScalarAbs((((((((t118 * in2[130] + t112 *
    in2[132]) + t113 * in2[128]) + t115 * in2[127]) + t114 * in2[135]) - t113 *
    in2[134]) - t114 * in2[129]) - t115 * in2[133]) - t127 * in2[131]), in1[1] -
    1.0);
  t220 = t200 * t12;
  t140 = ((((t168 + t6 * t19) + t17_tmp * t34) + t220 * t15_tmp) - in2[27] * t17)
    - t44_tmp * 2.0;
  t144 = (((((-t25 + t223) + t6 * t29) + in2[28] * t31) + t29_tmp * t34) - t181 *
          2.0) - t220 * t169;
  t145 = (t10 + t11) - 1.0;
  t146 = t50_tmp + t52;
  t147 = t9 - t53_tmp;
  t31 = in2[28] * t48;
  t48 = t46_tmp * t34;
  t44_tmp = in2[27] * t46;
  t160 = ((t63_tmp - t31) - t48) + t44_tmp;
  t163 = muDoubleScalarPower(muDoubleScalarAbs((((((((t140 * in2[130] + t144 *
    in2[131]) + t145 * in2[129]) + t147 * in2[128]) + t146 * in2[133]) - t145 *
    in2[135]) - t146 * in2[127]) - t147 * in2[134]) - t160 * in2[132]), in1[1] -
    1.0);
  t168 = t17_tmp * t36 * 2.0;
  t169 = t29_tmp * t36 * 2.0;
  t46 = in2[34] * 2.0;
  t25 = t5 * 2.0;
  t172 = (t46 + t46_tmp * t36 * 2.0) - t25;
  t174 = t55 + in2[27] * in2[33] * t54 * 2.0;
  t5 = in2[29] * 2.0;
  t177 = t5 + in2[27] * in2[34] * t54 * 2.0;
  t19 = in2[27] * in2[35] * t54 * 2.0;
  t15_tmp = t220 * 2.0;
  t180 = (t35 - t169) + t15_tmp;
  t181 = t41 * 2.0;
  t227 = t4 * t12 * 2.0;
  t183 = (-t168 + t181) + t227;
  t187 = t56 - t19;
  t191 = muDoubleScalarPower(muDoubleScalarAbs(((((t183 * in2[130] + t180 * in2
    [131]) + t187 * in2[138]) - t172 * in2[132]) - t174 * in2[136]) - t177 *
    in2[137]), in1[1] - 1.0);
  t20 = t29_tmp * t42 * 2.0;
  t196 = t17_tmp * t42 * 2.0;
  t197 = t46_tmp * t42 * 2.0;
  t199 = t55 + in2[28] * in2[34] * t54 * 2.0;
  t200 = in2[28] * in2[33] * t54 * 2.0;
  t4 = in2[27] * 2.0;
  t203 = t4 + in2[28] * in2[35] * t54 * 2.0;
  t204 = (t35 - t15_tmp) + t196;
  t229 = t2 * t12 * 2.0;
  t206 = (t181 - t20) + t229;
  t17 = t66 * 2.0;
  t209 = (t49 - t197) + t17;
  t2 = t5 - t200;
  t215 = muDoubleScalarPower(muDoubleScalarAbs(((((t206 * in2[131] + t209 * in2
    [132]) + t2 * in2[136]) - t204 * in2[130]) - t199 * in2[137]) - t203 * in2
    [138]), in1[1] - 1.0);
  t58 = t46_tmp * t43 * 2.0;
  t220 = t17_tmp * t43 * 2.0;
  t69 = t29_tmp * t43 * 2.0;
  t223 = t55 + in2[29] * in2[35] * t54 * 2.0;
  t29 = t56 + in2[29] * in2[33] * t54 * 2.0;
  t66 = in2[29] * in2[34] * t54 * 2.0;
  memset(&out1[0], 0, 24U * sizeof(real_T));
  out1[24] = t82;
  out1[25] = -t7 - t51_tmp;
  out1[26] = t50_tmp - in2[27] * in2[29] * 2.0;
  out1[27] = ((((t85 + t86) - t61_tmp) - t60_tmp) - t62_tmp) - t97_tmp;
  out1[28] = t77;
  out1[29] = t81;
  out1[30] = (-t8 - t11) + 1.0;
  out1[31] = t83;
  out1[32] = -t50_tmp + t52;
  memset(&out1[33], 0, 82U * sizeof(real_T));
  out1[115] = t7 - in2[27] * in2[28] * 2.0;
  out1[116] = t113;
  out1[117] = -t9 - t53_tmp;
  out1[118] = (((((t22_tmp + t106) + t107) + t108) - t118_tmp) - t23_tmp) -
    b_t118_tmp;
  out1[119] = ((((t116 + t117) - t61_tmp) - t60_tmp) - t62_tmp) - t127_tmp;
  out1[120] = t112;
  out1[121] = -t7 + t51_tmp;
  out1[122] = (-t8 - t10) + 1.0;
  out1[123] = t114;
  memset(&out1[124], 0, 82U * sizeof(real_T));
  out1[206] = t52_tmp * -2.0 - t50_tmp;
  out1[207] = t9 - in2[28] * in2[29] * 2.0;
  out1[208] = t145;
  out1[209] = t140;
  out1[210] = t144;
  out1[211] = ((((t31 + t48) - t61_tmp) - t60_tmp) - t62_tmp) - t44_tmp;
  out1[212] = t146;
  out1[213] = -t9 + t53_tmp;
  out1[214] = (-t10 - t11) + 1.0;
  memset(&out1[215], 0, 85U * sizeof(real_T));
  out1[300] = (t41 * -2.0 + t168) - t227;
  out1[301] = (-t35 + t169) - t15_tmp;
  out1[302] = t172;
  out1[303] = 0.0;
  out1[304] = 0.0;
  out1[305] = 0.0;
  out1[306] = t174;
  out1[307] = t177;
  out1[308] = -t56 + t19;
  memset(&out1[309], 0, 82U * sizeof(real_T));
  out1[391] = (t35 + t196) - t15_tmp;
  out1[392] = (t41 * -2.0 + t20) - t229;
  out1[393] = (-t49 + t197) - t17;
  out1[394] = 0.0;
  out1[395] = 0.0;
  out1[396] = 0.0;
  out1[397] = in2[29] * -2.0 + t200;
  out1[398] = t199;
  out1[399] = t203;
  memset(&out1[400], 0, 82U * sizeof(real_T));
  out1[482] = (in2[34] * -2.0 + t220) - t25;
  out1[483] = (t49 + t69) - t17;
  t5 = t3 * t12 * 2.0;
  out1[484] = (t41 * -2.0 + t58) - t5;
  out1[485] = 0.0;
  out1[486] = 0.0;
  out1[487] = 0.0;
  out1[488] = t29;
  out1[489] = in2[27] * -2.0 + t66;
  out1[490] = t223;
  memset(&out1[491], 0, 55U * sizeof(real_T));
  t227 = (t46 + t25) - t220;
  t229 = (t181 - t58) + t5;
  t20 = (t49 - t17) + t69;
  t58 = t4 - t66;
  t220 = muDoubleScalarPower(muDoubleScalarAbs(((((t229 * in2[132] + t227 * in2
    [130]) + t58 * in2[137]) - t20 * in2[131]) - t223 * in2[138]) - t29 * in2
    [136]), in1[1] - 1.0);
  t5 = a * a + b_a * b_a;
  st.site = &gt_emlrtRSI;
  b_sqrt(&st, &t5);
  out2[0] = in1[0] * ((((((t71 + in2[29] * t32) - in2[28] * t34) + in2[27] *
    t63_tmp) + t6 * t27) - a_tmp) - b_a_tmp) * 0.00026666666666666668;
  out2[1] = in1[0] * (((-in2[29] * t27 + in2[27] * t34) + in2[28] * t63_tmp) +
                      t6 * t32) * 0.00026666666666666668;
  out2[2] = in1[0] * ((((t5 + in2[28] * t27) - in2[27] * t32) + in2[29] *
                       t63_tmp) + t6 * t34) * 0.0008;
  out2[3] = in1[0] * (((in2[28] * t43 * 2.0 - in2[29] * t42 * 2.0) + in2[27] *
                       t73 * 2.0) - t6 * t36 * 2.0) * -4.2666666666666668E-11;
  out2[4] = in1[0] * (((in2[29] * t36 * 2.0 - in2[27] * t43 * 2.0) + in2[28] *
                       t73 * 2.0) - t6 * t42 * 2.0) * -1.421066666666666E-8;
  out2[5] = in1[0] * (((in2[28] * t36 * 2.0 - in2[27] * t42 * 2.0) - in2[29] *
                       t73 * 2.0) + t6 * t43 * 2.0) * 4.75111111111111E-9;
  t69 = in1[2] * t82 * t101;
  t66 = in1[2] * t83 * t101;
  t5 = in1[2] * t84 * t101;
  out3[0] = (((((((-in1[2] * t77 * t101 * in2[131] - t69 * in2[127]) + t66 *
                  in2[128]) - in1[2] * t81 * t101 * in2[132]) - t5 * in2[129]) +
               t69 * in2[133]) - t66 * in2[134]) + t5 * in2[135]) + in1[2] * t97
    * t101 * in2[130];
  t69 = in1[2] * t115 * t130;
  t66 = in1[2] * t114 * t130;
  out3[1] = (((((((-in1[2] * t113 * t130 * in2[128] - t69 * in2[127]) + t66 *
                  in2[129]) - in1[2] * t112 * t130 * in2[132]) + in1[2] * t113 *
                t130 * in2[134]) + t69 * in2[133]) - in1[2] * t118 * t130 * in2
              [130]) - t66 * in2[135]) + in1[2] * t127 * t130 * in2[131];
  t69 = in1[2] * t146 * t163;
  t66 = in1[2] * t145 * t163;
  t5 = in1[2] * t147 * t163;
  out3[2] = (((((((-in1[2] * t140 * t163 * in2[130] + t69 * in2[127]) - t66 *
                  in2[129]) - in1[2] * t144 * t163 * in2[131]) - t5 * in2[128])
               - t69 * in2[133]) + t66 * in2[135]) + t5 * in2[134]) + in1[2] *
    t160 * t163 * in2[132];
  out3[3] = ((((-in1[3] * t172 * t191 * in2[132] - in1[3] * t174 * t191 * in2
                [136]) + in1[3] * t180 * t191 * in2[131]) + in1[3] * t183 * t191
              * in2[130]) - in1[3] * t177 * t191 * in2[137]) + in1[3] * t187 *
    t191 * in2[138];
  out3[4] = ((((-in1[3] * t204 * t215 * in2[130] - in1[3] * t199 * t215 * in2
                [137]) + in1[3] * t206 * t215 * in2[131]) - in1[3] * t203 * t215
              * in2[138]) + in1[3] * t209 * t215 * in2[132]) + in1[3] * t2 *
    t215 * in2[136];
  out3[5] = ((((in1[3] * t227 * t220 * in2[130] - in1[3] * t223 * t220 * in2[138])
               - in1[3] * t29 * t220 * in2[136]) + in1[3] * t229 * t220 * in2
              [132]) - in1[3] * t20 * t220 * in2[131]) + in1[3] * t58 * t220 *
    in2[137];
  for (i = 0; i < 6; i++) {
    out4[i] = 0.0;
  }
}

/* End of code generation (sprdmpF101.c) */
