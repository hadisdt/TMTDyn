/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * loadsF1.c
 *
 * Code generation for function 'loadsF1'
 *
 */

/* Include files */
#include "loadsF1.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Function Definitions */
void loadsF1(const real_T in1[34], const real_T in2[24], real_T out1[72], real_T
             out2[6])
{
  real_T t10;
  real_T t100;
  real_T t101;
  real_T t102;
  real_T t103;
  real_T t105;
  real_T t11;
  real_T t12;
  real_T t13;
  real_T t14;
  real_T t148;
  real_T t149;
  real_T t15;
  real_T t16;
  real_T t164;
  real_T t165;
  real_T t166;
  real_T t167;
  real_T t17;
  real_T t184;
  real_T t191;
  real_T t193;
  real_T t195;
  real_T t197;
  real_T t199;
  real_T t200;
  real_T t203;
  real_T t204;
  real_T t208;
  real_T t21;
  real_T t210;
  real_T t212;
  real_T t214;
  real_T t217;
  real_T t218;
  real_T t22;
  real_T t221;
  real_T t222;
  real_T t223;
  real_T t225;
  real_T t227;
  real_T t229;
  real_T t23;
  real_T t231;
  real_T t232;
  real_T t235;
  real_T t236;
  real_T t24;
  real_T t25;
  real_T t255;
  real_T t256;
  real_T t259;
  real_T t26;
  real_T t260;
  real_T t27;
  real_T t279;
  real_T t28;
  real_T t280;
  real_T t281;
  real_T t282;
  real_T t283;
  real_T t284;
  real_T t285;
  real_T t286;
  real_T t287;
  real_T t288;
  real_T t289;
  real_T t29;
  real_T t290;
  real_T t291;
  real_T t292;
  real_T t294;
  real_T t295;
  real_T t297;
  real_T t298;
  real_T t3;
  real_T t300;
  real_T t301;
  real_T t302;
  real_T t303;
  real_T t304;
  real_T t305;
  real_T t306;
  real_T t307;
  real_T t321;
  real_T t328;
  real_T t329;
  real_T t330;
  real_T t331;
  real_T t333;
  real_T t337;
  real_T t340;
  real_T t341;
  real_T t343;
  real_T t346;
  real_T t347;
  real_T t348;
  real_T t4;
  real_T t45;
  real_T t46;
  real_T t47;
  real_T t5;
  real_T t51;
  real_T t52;
  real_T t53;
  real_T t55;
  real_T t56;
  real_T t57;
  real_T t6;
  real_T t66;
  real_T t67;
  real_T t68;
  real_T t69;
  real_T t7;
  real_T t74;
  real_T t75;
  real_T t76;
  real_T t77;
  real_T t78;
  real_T t79;
  real_T t8;
  real_T t85;
  real_T t86;
  real_T t9;
  real_T t90;
  real_T t91;
  real_T t92;
  real_T t93;
  real_T t95;
  real_T t97;
  real_T t99;

  /* LOADSF1 */
  /*     [OUT1,OUT2,OUT3] = LOADSF1(IN1,IN2,S,DS,T_SYM) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.6. */
  /*     26-Feb-2021 18:56:21 */
  t3 = in2[3] / 2.0;
  t4 = in2[4] / 2.0;
  t5 = in2[5] / 2.0;
  t6 = in2[9] / 2.0;
  t7 = in2[10] / 2.0;
  t8 = in2[11] / 2.0;
  t9 = muDoubleScalarCos(t3);
  t10 = muDoubleScalarCos(t4);
  t11 = muDoubleScalarCos(t5);
  t12 = muDoubleScalarCos(t6);
  t13 = muDoubleScalarCos(t7);
  t14 = muDoubleScalarCos(t8);
  t15 = muDoubleScalarSin(t3);
  t16 = muDoubleScalarSin(t4);
  t17 = muDoubleScalarSin(t5);
  t6 = muDoubleScalarSin(t6);
  t4 = muDoubleScalarSin(t7);
  t3 = muDoubleScalarSin(t8);
  t21 = in2[8] + in1[4] / 2.0;
  t5 = t9 * t10;
  t22 = t5 * t17;
  t23 = t9 * t11 * t16;
  t24 = t10 * t11 * t15;
  t7 = t12 * t13;
  t25 = t7 * t3;
  t26 = t12 * t14 * t4;
  t27 = t13 * t14 * t6;
  t28 = t9 * t16 * t17;
  t29 = t10 * t15 * t17;
  t8 = t11 * t15 * t16;
  t12 = t12 * t4 * t3;
  t13 = t13 * t6 * t3;
  t9 = t14 * t6 * t4;
  t10 = t15 * t16 * t17;
  t6 = t6 * t4 * t3;
  t3 = t5 * t11;
  t4 = t7 * t14;
  t5 = t22 / 2.0;
  t17 = t23 / 2.0;
  t15 = t24 / 2.0;
  t45 = t25 / 2.0;
  t46 = t26 / 2.0;
  t47 = t27 / 2.0;
  t11 = t28 / 2.0;
  t16 = t29 / 2.0;
  t7 = t8 / 2.0;
  t51 = t12 / 2.0;
  t52 = t13 / 2.0;
  t53 = t9 / 2.0;
  t14 = t10 / 2.0;
  t55 = t6 / 2.0;
  t56 = t3 / 2.0;
  t57 = t4 / 2.0;
  t66 = t22 + t8;
  t67 = t24 + t28;
  t68 = t25 + t9;
  t69 = t27 + t12;
  t74 = t23 + -t29;
  t75 = t10 + -t3;
  t76 = t26 + -t13;
  t77 = t6 + -t4;
  t78 = t66 * t66;
  t79 = t67 * t67;
  t90 = t5 + t7;
  t91 = t17 + t16;
  t92 = t15 + t11;
  t93 = t14 + t56;
  t3 = t45 + t53;
  t95 = t46 + t52;
  t4 = t47 + t51;
  t97 = t55 + t57;
  t26 = t66 * t68;
  t22 = t66 * t69;
  t28 = t67 * t68;
  t148 = t67 * t69;
  t149 = t66 * t67 * 2.0;
  t85 = t74 * t74;
  t86 = t75 * t75;
  t99 = t5 + -t7;
  t100 = t17 + -t16;
  t101 = t15 + -t11;
  t102 = t14 + -t56;
  t103 = t45 + -t53;
  t6 = t46 + -t52;
  t105 = t47 + -t51;
  t5 = t55 + -t57;
  t15 = in2[6] * t90;
  t24 = in2[6] * t92;
  t7 = in2[7] * t90;
  t13 = in2[7] * t92;
  t16 = t21 * t90;
  t8 = t21 * t92;
  t27 = t66 * t76;
  t46 = t66 * t77;
  t52 = t67 * t76;
  t23 = t67 * t77;
  t56 = t68 * t74;
  t47 = t69 * t74;
  t51 = t68 * t75;
  t45 = t69 * t75;
  t164 = t66 * t74 * 2.0;
  t165 = t66 * t75 * 2.0;
  t166 = t67 * t74 * 2.0;
  t167 = t67 * t75 * 2.0;
  t25 = t74 * t76;
  t9 = t74 * t77;
  t10 = t75 * t76;
  t29 = t75 * t77;
  t184 = t74 * t75 * 2.0;
  t191 = t66 * t3;
  t193 = t66 * t4;
  t195 = t67 * t3;
  t197 = t67 * t4;
  t199 = t68 * t90;
  t200 = t69 * t90;
  t203 = t68 * t92;
  t204 = t69 * t92;
  t223 = t74 * t3;
  t225 = t74 * t4;
  t227 = t75 * t3;
  t229 = t75 * t4;
  t231 = t76 * t90;
  t232 = t77 * t90;
  t235 = t76 * t92;
  t236 = t77 * t92;
  t3 = in2[6] * t100;
  t4 = in2[6] * t102;
  t12 = in2[7] * t100;
  t11 = in2[7] * t102;
  t14 = t21 * t100;
  t17 = t21 * t102;
  t208 = t66 * t6;
  t210 = t66 * t5;
  t212 = t67 * t6;
  t214 = t67 * t5;
  t217 = t68 * t100;
  t218 = t69 * t100;
  t221 = t68 * t102;
  t222 = t69 * t102;
  t53 = t74 * t6;
  t55 = t74 * t5;
  t6 *= t75;
  t5 *= t75;
  t255 = t76 * t100;
  t256 = t77 * t100;
  t259 = t76 * t102;
  t260 = t77 * t102;
  t279 = (in2[7] * t66 + in2[6] * t74) + t21 * t67;
  t280 = (in2[7] * t67 + in2[6] * t75) + -(t21 * t66);
  t282 = (-(in2[6] * t67) + in2[7] * t75) + t21 * t74;
  t307 = ((t28 + -t22) + t9) + t10;
  t281 = (in2[6] * t66 + -(in2[7] * t74)) + t21 * t75;
  t283 = (t7 + t3) + t8;
  t284 = (t15 + t12) + t17;
  t285 = (in2[6] * t93 + in2[7] * t101) + t21 * t99;
  t286 = (t3 + -t7) + t8;
  t287 = (in2[6] * t101 + -(in2[7] * t93)) + t21 * t91;
  t288 = (t13 + t4) + -t16;
  t294 = (t11 + -t24) + t14;
  t295 = t100 * t279;
  t297 = t100 * t280;
  t298 = t102 * t280;
  t301 = t90 * t282;
  t303 = t92 * t282;
  t304 = ((t26 + t148) + t25) + -t29;
  t305 = ((t27 + t23) + t45) + -t56;
  t306 = ((t46 + t47) + t51) + -t52;
  t321 = ((t28 * 2.0 + -(t22 * 2.0)) + t9 * 2.0) + t10 * 2.0;
  t328 = ((t191 + -t197) + t53) + t5;
  t329 = ((t208 + t214) + t229) + -t223;
  t330 = ((t66 * t95 + -(t67 * t97)) + t74 * t103) + t75 * t105;
  t331 = ((t66 * t105 + t67 * t103) + t74 * t97) + -(t75 * t95);
  t333 = ((t210 + t212) + t225) + -t227;
  t337 = ((t69 * t99 + t68 * t101) + t76 * t93) + -(t77 * t91);
  t340 = ((t217 + t222) + t231) + -t236;
  t341 = ((t218 + t221) + t232) + -t235;
  t343 = ((t69 * t91 + -(t68 * t93)) + t77 * t99) + t76 * t101;
  t346 = ((t195 + -t193) + t55) + t6;
  t347 = ((t204 + -t199) + t255) + t260;
  t348 = ((t203 + -t200) + t256) + t259;
  t289 = (in2[7] * t91 + -(in2[6] * t99)) + t21 * t93;
  t290 = (t13 + -t4) + t16;
  t291 = (t15 + -t12) + t17;
  t292 = (in2[6] * t91 + in2[7] * t99) + -(t21 * t101);
  t57 = (t24 + t11) + -t14;
  t21 = -(t102 * t279);
  t300 = t90 * t281;
  t302 = t92 * t281;
  t26 = ((t26 * 2.0 + t148 * 2.0) + t25 * 2.0) + -(t29 * 2.0);
  t23 = ((t27 * 2.0 + t23 * 2.0) + t45 * 2.0) + -(t56 * 2.0);
  t27 = ((t46 * 2.0 + t47 * 2.0) + t51 * 2.0) + -(t52 * 2.0);
  t29 = ((t191 + t197) + t53) + -t5;
  t25 = ((t193 + t195) + t6) + -t55;
  t22 = ((t210 + t225) + t227) + -t212;
  t28 = ((t66 * t97 + t67 * t95) + t75 * t103) + -(t74 * t105);
  t24 = ((t68 * t99 + t76 * t91) + t77 * t93) + -(t69 * t101);
  t14 = ((t199 + t204) + t255) + -t260;
  t11 = ((t200 + t203) + t256) + -t259;
  t15 = ((t68 * t91 + t69 * t93) + t77 * t101) + -(t76 * t99);
  t16 = ((t67 * t105 + t74 * t95) + t75 * t97) + -(t66 * t103);
  t13 = ((t214 + t223) + t229) + -t208;
  t17 = ((t222 + t231) + t236) + -t217;
  t3 = ((t221 + t232) + t235) + -t218;
  out1[0] = 1.0;
  out1[1] = 0.0;
  out1[2] = 0.0;
  t4 = in1[16] * t305;
  t5 = in1[16] * t306;
  t6 = in1[16] * t304;
  t7 = in1[16] * t307;
  t8 = in1[4] * t305;
  t9 = in1[4] * t306;
  t10 = in1[4] * t304;
  t12 = in1[4] * t307;
  out1[3] = ((((((((((((((-t66 * t283 + t67 * t288) - t74 * t291) - t75 * t294)
                       - t90 * t279) + t92 * t280) - t100 * t281) - t102 * t282)
                   + t7 * t14 * 2.0) - t4 * t341 * 2.0) + t6 * t348 * 2.0) - t5 *
                t17 * 2.0) + t12 * t14) - t8 * t341) + t10 * t348) - t9 * t17;
  out1[4] = ((((((((((((((-t66 * t287 + t67 * t289) + t74 * t285) + t75 * t292)
                       + t91 * t280) + t93 * t279) + t99 * t282) - t101 * t281)
                   + t4 * t24 * 2.0) + t5 * t337 * 2.0) + t6 * t15 * 2.0) + t7 *
                t343 * 2.0) + t8 * t24) + t9 * t337) + t10 * t15) + t12 * t343;
  out1[5] = ((((((((((((((-t67 * t286 - t66 * t290) + t75 * t284) - t74 * t57) +
                       t90 * t280) - t92 * t279) + t100 * t282) + t102 * t281) +
                   t4 * t340 * 2.0) + t7 * t11 * 2.0) - t6 * t347 * 2.0) - t5 *
                t3 * 2.0) + t8 * t340) + t12 * t11) - t10 * t347) - t9 * t3;
  out1[6] = ((t85 + t86) + -t78) + -t79;
  out1[7] = t164 + t167;
  out1[8] = -t165 + t166;
  out1[9] = ((((((t7 * t328 * -2.0 + t6 * t25 * 2.0) + t4 * t333 * 2.0) - t5 *
                t13 * 2.0) - t12 * t328) + t10 * t25) + t8 * t333) - t9 * t13;
  out1[10] = ((((((t6 * t330 * 2.0 + t5 * t331 * 2.0) + t7 * t28 * 2.0) + t4 *
                 t16 * 2.0) + t10 * t330) + t9 * t331) + t12 * t28) + t8 * t16;
  out1[11] = ((((((t6 * t29 * 2.0 - t4 * t329 * 2.0) - t5 * t22 * 2.0) + t7 *
                 t346 * 2.0) + t10 * t29) - t8 * t329) - t9 * t22) + t12 * t346;
  out1[12] = 0.0;
  out1[13] = 1.0;
  out1[14] = 0.0;
  out1[15] = ((((((((((((((t295 + t298) - t300) + t303) - t66 * t291) + t74 *
                       t283) + t67 * t294) + t75 * t288) + t5 * t14 * 2.0) + t6 *
                   t341 * 2.0) + t4 * t348 * 2.0) + t7 * t17 * 2.0) + t9 * t14)
               + t10 * t341) + t8 * t348) + t12 * t17;
  out1[16] = ((((((((((((((t66 * t285 - t67 * t292) + t74 * t287) + t75 * t289)
                        + t91 * t282) + t93 * t281) - t99 * t280) + t101 * t279)
                    - t6 * t24 * 2.0) - t7 * t337 * 2.0) + t4 * t15 * 2.0) + t5 *
                 t343 * 2.0) - t10 * t24) - t12 * t337) + t8 * t15) + t9 * t343;
  out1[17] = ((((((((((((((-t297 + t21) + t301) - t302) - t67 * t284) - t66 *
                       t57) - t75 * t286) + t74 * t290) - t6 * t340 * 2.0) + t5 *
                   t11 * 2.0) - t4 * t347 * 2.0) + t7 * t3 * 2.0) - t10 * t340)
               + t9 * t11) - t8 * t347) + t12 * t3;
  out1[18] = t164 - t167;
  out1[19] = ((t78 + t86) + -t79) + -t85;
  out1[20] = t149 + t184;
  out1[21] = ((((((t5 * t328 * -2.0 - t6 * t333 * 2.0) + t4 * t25 * 2.0) + t7 *
                 t13 * 2.0) - t9 * t328) - t10 * t333) + t8 * t25) + t12 * t13;
  out1[22] = ((((((t4 * t330 * 2.0 - t7 * t331 * 2.0) + t5 * t28 * 2.0) - t6 *
                 t16 * 2.0) + t8 * t330) - t12 * t331) + t9 * t28) - t10 * t16;
  out1[23] = ((((((t4 * t29 * 2.0 + t6 * t329 * 2.0) + t7 * t22 * 2.0) + t5 *
                 t346 * 2.0) + t8 * t29) + t10 * t329) + t12 * t22) + t9 * t346;
  out1[24] = 0.0;
  out1[25] = 0.0;
  out1[26] = 1.0;
  out1[27] = ((((((((((((((t297 + t21) + t301) + t302) - t67 * t291) + t75 *
                       t283) - t66 * t294) - t74 * t288) + t4 * t14 * 2.0) + t7 *
                   t341 * 2.0) - t6 * t17 * 2.0) - t5 * t348 * 2.0) + t8 * t14)
               + t12 * t341) - t10 * t17) - t9 * t348;
  out1[28] = ((((((((((((((t67 * t285 + t66 * t292) + t75 * t287) - t74 * t289)
                        + t91 * t281) - t93 * t282) + t99 * t279) + t101 * t280)
                    + t6 * t337 * 2.0) - t7 * t24 * 2.0) + t4 * t343 * 2.0) - t5
                 * t15 * 2.0) + t10 * t337) - t12 * t24) + t8 * t343) - t9 * t15;
  out1[29] = ((((((((((((((t295 - t298) + t300) + t303) + t66 * t284) - t67 *
                       t57) + t74 * t286) + t75 * t290) + t4 * t11 * 2.0) - t7 *
                   t340 * 2.0) + t5 * t347 * 2.0) - t6 * t3 * 2.0) + t8 * t11) -
               t12 * t340) + t9 * t347) - t10 * t3;
  out1[30] = t165 + t166;
  out1[31] = t149 - t184;
  out1[32] = ((t79 + t86) + -t78) + -t85;
  out1[33] = ((((((t4 * t328 * -2.0 - t5 * t25 * 2.0) - t7 * t333 * 2.0) - t6 *
                 t13 * 2.0) - t8 * t328) - t9 * t25) - t12 * t333) - t10 * t13;
  out1[34] = ((((((t6 * t331 * 2.0 - t5 * t330 * 2.0) + t4 * t28 * 2.0) - t7 *
                 t16 * 2.0) + t10 * t331) - t9 * t330) + t8 * t28) - t12 * t16;
  out1[35] = ((((((t5 * t29 * -2.0 + t7 * t329 * 2.0) - t6 * t22 * 2.0) + t4 *
                 t346 * 2.0) - t9 * t29) + t12 * t329) - t10 * t22) + t8 * t346;
  out1[36] = 0.0;
  out1[37] = 0.0;
  out1[38] = 0.0;
  out1[39] = ((-t26 * t341 - t27 * t14) + t321 * t17) + t23 * t348;
  out1[40] = ((t26 * t24 - t321 * t337) + t23 * t15) - t27 * t343;
  out1[41] = ((t26 * t340 - t27 * t11) - t23 * t347) + t321 * t3;
  out1[42] = 0.0;
  out1[43] = 0.0;
  out1[44] = 0.0;
  out1[45] = ((t27 * t328 + t26 * t333) + t23 * t25) + t321 * t13;
  out1[46] = ((-t321 * t331 + t23 * t330) - t27 * t28) + t26 * t16;
  out1[47] = ((-t26 * t329 + t23 * t29) + t321 * t22) - t27 * t346;
  out1[48] = 0.0;
  out1[49] = 0.0;
  out1[50] = 0.0;
  out1[51] = ((t321 * t14 + t23 * t341) + t26 * t348) + t27 * t17;
  out1[52] = ((-t23 * t24 - t27 * t337) + t26 * t15) + t321 * t343;
  out1[53] = ((t321 * t11 - t23 * t340) - t26 * t347) + t27 * t3;
  out1[54] = 0.0;
  out1[55] = 0.0;
  out1[56] = 0.0;
  out1[57] = ((-t321 * t328 + t26 * t25) - t23 * t333) + t27 * t13;
  out1[58] = ((t26 * t330 - t27 * t331) + t321 * t28) - t23 * t16;
  out1[59] = ((t26 * t29 + t23 * t329) + t27 * t22) + t321 * t346;
  out1[60] = 0.0;
  out1[61] = 0.0;
  out1[62] = 0.0;
  out1[63] = ((t26 * t14 - t27 * t341) - t321 * t348) + t23 * t17;
  out1[64] = ((-t23 * t337 + t27 * t24) + t26 * t343) - t321 * t15;
  out1[65] = ((t26 * t11 + t27 * t340) + t321 * t347) + t23 * t3;
  out1[66] = 0.0;
  out1[67] = 0.0;
  out1[68] = 0.0;
  out1[69] = ((-t26 * t328 - t321 * t25) + t27 * t333) + t23 * t13;
  out1[70] = ((-t321 * t330 - t23 * t331) + t26 * t28) + t27 * t16;
  out1[71] = ((-t321 * t29 - t27 * t329) + t23 * t22) + t26 * t346;
  t3 = (t307 * in1[30] + t306 * in1[31]) + t305 * in1[32];
  t4 = (t306 * in1[30] + t304 * in1[32]) + -(t307 * in1[31]);
  t5 = (t304 * in1[30] + t305 * in1[31]) + -(t306 * in1[32]);
  t6 = (t304 * in1[31] + t307 * in1[32]) + -(t305 * in1[30]);
  out2[0] = in1[27];
  out2[1] = in1[28];
  out2[2] = in1[29];
  out2[3] = ((t304 * t5 + t307 * t3) + t305 * t6) - t306 * t4;
  out2[4] = ((-t305 * t5 + t306 * t3) + t304 * t6) + t307 * t4;
  out2[5] = ((t305 * t3 + t304 * t4) + t306 * t5) - t307 * t6;
}

/* End of code generation (loadsF1.c) */
