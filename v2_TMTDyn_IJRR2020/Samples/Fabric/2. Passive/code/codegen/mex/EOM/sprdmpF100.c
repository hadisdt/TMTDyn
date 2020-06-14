/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sprdmpF100.c
 *
 * Code generation for function 'sprdmpF100'
 *
 */

/* Include files */
#include <string.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "EOM.h"
#include "sprdmpF100.h"
#include "sqrt.h"

/* Variable Definitions */
static emlrtRSInfo sr_emlrtRSI = { 41, /* lineNo */
  "sprdmpF100",                        /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/sprdmpF100.m"/* pathName */
};

static emlrtRSInfo wr_emlrtRSI = { 50, /* lineNo */
  "sprdmpF100",                        /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/sprdmpF100.m"/* pathName */
};

static emlrtRSInfo xr_emlrtRSI = { 58, /* lineNo */
  "sprdmpF100",                        /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/sprdmpF100.m"/* pathName */
};

static emlrtRSInfo yr_emlrtRSI = { 87, /* lineNo */
  "sprdmpF100",                        /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/sprdmpF100.m"/* pathName */
};

static emlrtRSInfo ks_emlrtRSI = { 281,/* lineNo */
  "sprdmpF100",                        /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/sprdmpF100.m"/* pathName */
};

/* Function Definitions */
void sprdmpF100(const emlrtStack *sp, const real_T in1[6], const real_T in2[206],
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
  real_T t168;
  real_T t9;
  real_T t10_tmp;
  real_T t10;
  real_T t14;
  real_T t25_tmp;
  real_T t15;
  real_T t16;
  real_T t17;
  real_T t18_tmp;
  real_T t19;
  real_T t20_tmp;
  real_T t21;
  real_T t22;
  real_T t23;
  real_T t24_tmp;
  real_T t220;
  real_T t28_tmp;
  real_T t28;
  real_T t30;
  real_T t31;
  real_T t32_tmp;
  real_T t33;
  real_T t34_tmp;
  real_T t35;
  real_T t36_tmp;
  real_T t46_tmp;
  real_T t194;
  real_T t37;
  real_T t39_tmp;
  real_T t39;
  real_T t41;
  real_T t53_tmp;
  real_T t45_tmp;
  real_T t45;
  real_T t58_tmp;
  real_T t231;
  real_T t47;
  real_T t48;
  real_T t49;
  real_T t51;
  real_T t52;
  real_T t55_tmp;
  real_T t55;
  real_T t57;
  real_T t59;
  real_T t61_tmp;
  real_T t62;
  real_T t63;
  real_T t64;
  real_T t66;
  real_T a_tmp;
  real_T a;
  real_T t70;
  real_T t71;
  real_T t72;
  real_T t73;
  real_T t217;
  real_T t74;
  real_T t75;
  real_T t76;
  real_T t77;
  real_T t79;
  real_T t83_tmp;
  real_T b_t83_tmp;
  real_T c_t83_tmp;
  real_T t83;
  real_T t88_tmp;
  real_T b_t88_tmp;
  real_T c_t88_tmp;
  real_T t88;
  real_T t98;
  real_T t103;
  real_T t104;
  real_T t105;
  real_T t106;
  real_T t107;
  real_T t108;
  real_T t109;
  real_T t111;
  real_T t115_tmp;
  real_T b_t115_tmp;
  real_T c_t115_tmp;
  real_T t115;
  real_T t120_tmp;
  real_T b_t120_tmp;
  real_T c_t120_tmp;
  real_T t120;
  real_T t129;
  real_T t134;
  real_T t135;
  real_T t136;
  real_T t137;
  real_T t138;
  real_T t139;
  real_T t140;
  real_T t142;
  real_T t146_tmp;
  real_T b_t146_tmp;
  real_T c_t146_tmp;
  real_T t146;
  real_T t151;
  real_T t160;
  real_T t167;
  real_T t170;
  real_T t174;
  real_T t175;
  real_T t178;
  real_T t183;
  real_T t185;
  real_T t189;
  real_T t193;
  real_T t195;
  real_T t197;
  real_T t199;
  real_T t202;
  real_T t207;
  real_T t209;
  real_T t213;
  int32_T i;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /* SPRDMPF100 */
  /*     [OUT1,OUT2,OUT3,OUT4,OUT5,OUT6,OUT7,OUT8] = SPRDMPF100(IN1,IN2,S) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.2. */
  /*     09-Jan-2019 03:12:35 */
  t2 = in2[70] * in2[70];
  t3 = in2[71] * in2[71];
  t4 = in2[69] * in2[69];
  t5 = ((-t2 - t3) - t4) + 1.0;
  t6 = t5;
  st.site = &sr_emlrtRSI;
  b_sqrt(&st, &t6);
  t7_tmp = in2[69] * in2[70];
  t7 = t7_tmp * 2.0;
  t8 = in2[70] * t6 * 2.0;
  t168 = in2[69] * in2[71];
  t9 = t168 * 2.0;
  t10_tmp = in2[70] * in2[71];
  t10 = t10_tmp * 2.0;
  t14 = ((-(in2[27] * in2[27]) - in2[28] * in2[28]) - in2[29] * in2[29]) + 1.0;
  t25_tmp = t14;
  st.site = &wr_emlrtRSI;
  b_sqrt(&st, &t25_tmp);
  t15 = 1.0 / t25_tmp;
  t16 = t6 * 2.0;
  t17 = in2[70] * 2.0;
  t18_tmp = in2[71] * t6 * 2.0;
  t19 = t3 * 2.0;
  t20_tmp = in2[69] * t6 * 2.0;
  t21 = t4 * 2.0;
  t22 = t2 * 2.0;
  st.site = &xr_emlrtRSI;
  b_sqrt(&st, &t5);
  t23 = 1.0 / t5;
  t24_tmp = in2[25] - in2[67];
  t25_tmp = in2[26] - in2[68];
  t220 = in2[24] - in2[66];
  t28_tmp = in2[69] * t23;
  t28 = (-in2[26] + in2[68]) + t28_tmp * t24_tmp;
  t30 = t24_tmp + t28_tmp * t25_tmp;
  t31 = t6 * t24_tmp;
  t32_tmp = in2[69] * t25_tmp;
  t33 = t6 * t25_tmp;
  t34_tmp = in2[70] * t220;
  t35 = t6 * t220;
  t36_tmp = in2[71] * t24_tmp;
  t46_tmp = in2[70] * t25_tmp;
  t194 = t35 + t36_tmp;
  t37 = t194 - t46_tmp;
  t39_tmp = in2[70] * t23;
  t39 = (-in2[24] + in2[66]) + t39_tmp * t25_tmp;
  t41 = t25_tmp + t39_tmp * t220;
  t53_tmp = in2[71] * t220;
  t45_tmp = t31 + t32_tmp;
  t45 = t45_tmp - t53_tmp;
  t58_tmp = in2[69] * t24_tmp;
  t231 = t33 + t34_tmp;
  t47 = t231 - t58_tmp;
  t48 = in2[29] * 2.0;
  t49 = in2[27] - in2[69];
  st.site = &yr_emlrtRSI;
  b_sqrt(&st, &t14);
  t51 = in2[28] - in2[70];
  t52 = in2[29] - in2[71];
  t55_tmp = in2[71] * t23;
  t55 = t220 + t55_tmp * t24_tmp;
  t57 = (-in2[25] + in2[67]) + t55_tmp * t220;
  t59 = in2[27] * 2.0;
  t5 = in1[4] / 2.0;
  t61_tmp = (in2[69] * t220 + in2[70] * t24_tmp) + in2[71] * t25_tmp;
  t62 = muDoubleScalarCos(t5);
  t63 = muDoubleScalarSin(t5);
  t64 = t62 * t62;
  t66 = t63 * t63;
  a_tmp = t64 * 0.01096696696710326 + t66 * 0.01096696696710326;
  a = t64 * 0.083 - t66 * 0.083;
  t70 = t6 - t14;
  t71 = in2[70] * t39;
  t72 = t58_tmp * 2.0;
  t73 = t32_tmp * 2.0;
  t217 = t10_tmp * t23;
  t74 = t217 * t25_tmp;
  t75 = (t19 + t22) - 1.0;
  t76 = t7 + t18_tmp;
  t77 = t8 - t9;
  t79 = ((t61_tmp + in2[70] * t30) - in2[71] * t28) - t28_tmp * t37;
  t83_tmp = t6 * t41;
  b_t83_tmp = t39_tmp * t37;
  c_t83_tmp = t217 * t24_tmp;
  t83 = ((((t231 - t71) - t72) + t83_tmp) + b_t83_tmp) + c_t83_tmp;
  t88_tmp = in2[71] * t55;
  b_t88_tmp = t6 * t57;
  c_t88_tmp = t55_tmp * t37;
  t88 = (((((-t31 + t53_tmp) - t73) - t74) + b_t88_tmp) + t88_tmp) + c_t88_tmp;
  t98 = muDoubleScalarPower(muDoubleScalarAbs((((((((t83 * in2[173] + t88 * in2
    [174]) + t75 * in2[127]) + t77 * in2[129]) + t76 * in2[170]) - t75 * in2[169])
    - t76 * in2[128]) - t77 * in2[171]) - t79 * in2[172]), in1[1] - 1.0);
  t103 = t34_tmp * 2.0;
  t231 = t168 * t23;
  t104 = t231 * t220;
  t105 = in2[71] * t57;
  t106 = t46_tmp * 2.0;
  t107 = (t19 + t21) - 1.0;
  t108 = -t7 + t18_tmp;
  t109 = t10 + t20_tmp;
  t111 = ((t61_tmp + in2[71] * t41) - in2[69] * t39) - t39_tmp * t45;
  t115_tmp = in2[69] * t30;
  b_t115_tmp = t6 * t28;
  c_t115_tmp = t28_tmp * t45;
  t115 = (((((-t33 + t58_tmp) - t103) - t104) + b_t115_tmp) + t115_tmp) +
    c_t115_tmp;
  t120_tmp = t6 * t55;
  b_t120_tmp = t55_tmp * t45;
  c_t120_tmp = t231 * t25_tmp;
  t120 = ((((t194 - t105) - t106) + t120_tmp) + b_t120_tmp) + c_t120_tmp;
  t129 = muDoubleScalarPower(muDoubleScalarAbs((((((((t115 * in2[172] + t120 *
    in2[174]) + t107 * in2[128]) + t108 * in2[127]) + t109 * in2[171]) - t107 *
    in2[170]) - t109 * in2[129]) - t108 * in2[169]) - t111 * in2[173]), in1[1] -
    1.0);
  t134 = in2[69] * t28;
  t135 = t53_tmp * 2.0;
  t136 = t36_tmp * 2.0;
  t5 = t7_tmp * t23;
  t137 = t5 * t24_tmp;
  t138 = (t21 + t22) - 1.0;
  t139 = t8 + t9;
  t140 = -t10 + t20_tmp;
  t142 = ((t61_tmp + in2[69] * t55) - in2[70] * t57) - t55_tmp * t47;
  t146_tmp = t6 * t30;
  b_t146_tmp = t28_tmp * t47;
  c_t146_tmp = t5 * t220;
  t146 = ((((t45_tmp - t134) - t135) + t146_tmp) + b_t146_tmp) + c_t146_tmp;
  t30 = in2[70] * t41;
  t22 = t6 * t39;
  t55 = t39_tmp * t47;
  t151 = (((((-t35 + t46_tmp) - t136) - t137) + t22) + t30) + t55;
  t160 = muDoubleScalarPower(muDoubleScalarAbs((((((((t146 * in2[172] + t151 *
    in2[173]) + t138 * in2[129]) + t140 * in2[128]) + t139 * in2[169]) - t138 *
    in2[171]) - t139 * in2[127]) - t140 * in2[170]) - t142 * in2[174]), in1[1] -
    1.0);
  t39 = in2[28] * 2.0;
  t167 = t16 + in2[27] * in2[69] * t15 * 2.0;
  t168 = in2[71] * 2.0;
  t170 = t168 + in2[28] * in2[69] * t15 * 2.0;
  t57 = in2[29] * in2[69] * t15 * 2.0;
  t28 = t5 * 2.0;
  t24_tmp = t39_tmp * t49 * 2.0;
  t174 = (t48 + t28) + t24_tmp;
  t175 = t14 * 2.0;
  t7_tmp = t4 * t23 * 2.0;
  t21 = t28_tmp * t49 * 2.0;
  t178 = (t175 + t7_tmp) + t21;
  t45_tmp = t231 * 2.0;
  t231 = t55_tmp * t49 * 2.0;
  t183 = (-t39 + t45_tmp) + t231;
  t185 = t17 - t57;
  t189 = muDoubleScalarPower(muDoubleScalarAbs(((((t178 * in2[172] + t174 * in2
    [173]) + t183 * in2[174]) + t185 * in2[132]) - t167 * in2[130]) - t170 *
    in2[131]), in1[1] - 1.0);
  t193 = t16 + in2[28] * in2[70] * t15 * 2.0;
  t194 = in2[27] * in2[70] * t15 * 2.0;
  t195 = in2[69] * 2.0;
  t197 = t195 + in2[29] * in2[70] * t15 * 2.0;
  t10_tmp = t28_tmp * t51 * 2.0;
  t199 = (-t48 + t28) + t10_tmp;
  t19 = t2 * t23 * 2.0;
  t25_tmp = t39_tmp * t51 * 2.0;
  t202 = (t175 + t19) + t25_tmp;
  t41 = t217 * 2.0;
  t5 = t55_tmp * t51 * 2.0;
  t207 = (t59 + t41) + t5;
  t209 = t168 - t194;
  t213 = muDoubleScalarPower(muDoubleScalarAbs(((((t202 * in2[173] + t199 * in2
    [172]) + t207 * in2[174]) + t209 * in2[130]) - t193 * in2[131]) - t197 *
    in2[132]), in1[1] - 1.0);
  t217 = t16 + in2[29] * in2[71] * t15 * 2.0;
  t16 = t17 + in2[27] * in2[71] * t15 * 2.0;
  t220 = in2[28] * in2[71] * t15 * 2.0;
  memset(&out1[0], 0, 24U * sizeof(real_T));
  out1[24] = (t2 * -2.0 - t3 * 2.0) + 1.0;
  out1[25] = t76;
  out1[26] = -t8 + t9;
  memset(&out1[27], 0, 39U * sizeof(real_T));
  out1[66] = t75;
  out1[67] = -t7 - t18_tmp;
  out1[68] = t77;
  out1[69] = t79;
  out1[70] = (((((-t33 - t34_tmp) + t71) + t72) - t83_tmp) - b_t83_tmp) -
    c_t83_tmp;
  out1[71] = (((((t31 - t53_tmp) + t73) + t74) - t88_tmp) - b_t88_tmp) -
    c_t88_tmp;
  memset(&out1[72], 0, 43U * sizeof(real_T));
  out1[115] = t7 - t18_tmp;
  out1[116] = (t3 * -2.0 - t4 * 2.0) + 1.0;
  out1[117] = t109;
  memset(&out1[118], 0, 39U * sizeof(real_T));
  out1[157] = t108;
  out1[158] = t107;
  out1[159] = -t10 - t20_tmp;
  out1[160] = (((((t33 + t103) + t104) - t58_tmp) - t115_tmp) - b_t115_tmp) -
    c_t115_tmp;
  out1[161] = t111;
  out1[162] = (((((-t35 - t36_tmp) + t105) + t106) - t120_tmp) - b_t120_tmp) -
    c_t120_tmp;
  memset(&out1[163], 0, 43U * sizeof(real_T));
  out1[206] = t139;
  out1[207] = t10 - t20_tmp;
  out1[208] = (t2 * -2.0 - t4 * 2.0) + 1.0;
  memset(&out1[209], 0, 39U * sizeof(real_T));
  out1[248] = -t8 - t9;
  out1[249] = t140;
  out1[250] = t138;
  out1[251] = (((((-t31 - t32_tmp) + t134) + t135) - t146_tmp) - b_t146_tmp) -
    c_t146_tmp;
  out1[252] = (((((t35 - t46_tmp) + t136) + t137) - t30) - t22) - t55;
  out1[253] = t142;
  memset(&out1[254], 0, 46U * sizeof(real_T));
  out1[300] = t167;
  out1[301] = t170;
  out1[302] = -t17 + t57;
  memset(&out1[303], 0, 39U * sizeof(real_T));
  out1[342] = (t14 * -2.0 - t7_tmp) - t21;
  out1[343] = (-t48 - t28) - t24_tmp;
  out1[344] = (t39 - t45_tmp) - t231;
  memset(&out1[345], 0, 46U * sizeof(real_T));
  out1[391] = in2[71] * -2.0 + t194;
  out1[392] = t193;
  out1[393] = t197;
  memset(&out1[394], 0, 39U * sizeof(real_T));
  out1[433] = (t48 - t28) - t10_tmp;
  out1[434] = (t14 * -2.0 - t19) - t25_tmp;
  out1[435] = (-t59 - t41) - t5;
  memset(&out1[436], 0, 46U * sizeof(real_T));
  out1[482] = t16;
  out1[483] = in2[69] * -2.0 + t220;
  out1[484] = t217;
  memset(&out1[485], 0, 39U * sizeof(real_T));
  t231 = t28_tmp * t52 * 2.0;
  out1[524] = (in2[28] * -2.0 - t45_tmp) - t231;
  t168 = t39_tmp * t52 * 2.0;
  out1[525] = (t59 - t41) - t168;
  t25_tmp = t3 * t23 * 2.0;
  t5 = t55_tmp * t52 * 2.0;
  out1[526] = (t14 * -2.0 - t25_tmp) - t5;
  memset(&out1[527], 0, 19U * sizeof(real_T));
  t28 = (t39 + t45_tmp) + t231;
  t194 = (t175 + t25_tmp) + t5;
  t19 = (-t59 + t41) + t168;
  t231 = t195 - t220;
  t168 = muDoubleScalarPower(muDoubleScalarAbs(((((t194 * in2[174] + t28 * in2
    [172]) + t19 * in2[173]) + t231 * in2[131]) - t217 * in2[132]) - t16 * in2
    [130]), in1[1] - 1.0);
  t5 = (a_tmp * a_tmp + t64 * t66 * 0.027556) + a * a;
  st.site = &ks_emlrtRSI;
  b_sqrt(&st, &t5);
  out2[0] = in1[0] * ((((in2[71] * t45 - in2[70] * t47) + in2[69] * t61_tmp) +
                       t6 * t37) + t62 * t63 * 0.166) * -0.00026666666666666668;
  out2[1] = in1[0] * ((((a_tmp - in2[71] * t37) + in2[69] * t47) + in2[70] *
                       t61_tmp) + t6 * t45) * -0.00026666666666666668;
  out2[2] = in1[0] * ((((-t5 + in2[70] * t37) - in2[69] * t45) + in2[71] *
                       t61_tmp) + t6 * t47) * -0.0008;
  out2[3] = in1[0] * (((in2[70] * t52 * -2.0 + in2[71] * t51 * 2.0) + in2[69] *
                       t70 * 2.0) + t6 * t49 * 2.0) * -4.2666666666666668E-11;
  out2[4] = in1[0] * (((in2[71] * t49 * -2.0 + in2[69] * t52 * 2.0) + in2[70] *
                       t70 * 2.0) + t6 * t51 * 2.0) * -1.421066666666666E-8;
  out2[5] = in1[0] * (((in2[70] * t49 * 2.0 - in2[69] * t51 * 2.0) + in2[71] *
                       t70 * 2.0) + t6 * t52 * 2.0) * -4.75111111111111E-9;
  t10_tmp = in1[2] * t75 * t98;
  t5 = in1[2] * t76 * t98;
  t25_tmp = in1[2] * t77 * t98;
  out3[0] = (((((((t10_tmp * in2[127] - t5 * in2[128]) + t25_tmp * in2[129]) -
                 t10_tmp * in2[169]) + t5 * in2[170]) - t25_tmp * in2[171]) -
              in1[2] * t79 * t98 * in2[172]) + in1[2] * t83 * t98 * in2[173]) +
    in1[2] * t88 * t98 * in2[174];
  t10_tmp = in1[2] * t107 * t129;
  t5 = in1[2] * t108 * t129;
  t25_tmp = in1[2] * t109 * t129;
  out3[1] = (((((((t10_tmp * in2[128] + t5 * in2[127]) - t25_tmp * in2[129]) -
                 t10_tmp * in2[170]) - t5 * in2[169]) + t25_tmp * in2[171]) -
              in1[2] * t111 * t129 * in2[173]) + in1[2] * t115 * t129 * in2[172])
    + in1[2] * t120 * t129 * in2[174];
  t10_tmp = in1[2] * t138 * t160;
  t5 = in1[2] * t140 * t160;
  out3[2] = (((((((-in1[2] * t139 * t160 * in2[127] + t10_tmp * in2[129]) + t5 *
                  in2[128]) + in1[2] * t139 * t160 * in2[169]) - t10_tmp * in2
                [171]) - t5 * in2[170]) - in1[2] * t142 * t160 * in2[174]) +
             in1[2] * t146 * t160 * in2[172]) + in1[2] * t151 * t160 * in2[173];
  out3[3] = ((((-in1[3] * t167 * t189 * in2[130] - in1[3] * t170 * t189 * in2
                [131]) + in1[3] * t185 * t189 * in2[132]) + in1[3] * t174 * t189
              * in2[173]) + in1[3] * t178 * t189 * in2[172]) + in1[3] * t183 *
    t189 * in2[174];
  out3[4] = ((((-in1[3] * t193 * t213 * in2[131] - in1[3] * t197 * t213 * in2
                [132]) + in1[3] * t209 * t213 * in2[130]) + in1[3] * t199 * t213
              * in2[172]) + in1[3] * t202 * t213 * in2[173]) + in1[3] * t207 *
    t213 * in2[174];
  out3[5] = ((((-in1[3] * t217 * t168 * in2[132] - in1[3] * t16 * t168 * in2[130])
               + in1[3] * t231 * t168 * in2[131]) + in1[3] * t28 * t168 * in2
              [172]) + in1[3] * t194 * t168 * in2[174]) + in1[3] * t19 * t168 *
    in2[173];
  for (i = 0; i < 6; i++) {
    out4[i] = 0.0;
  }
}

/* End of code generation (sprdmpF100.c) */
