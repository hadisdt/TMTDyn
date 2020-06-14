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
#include "rt_nonfinite.h"
#include "rjtipF.h"

/* Function Definitions */
void rjtipF(const emlrtStack *sp, const real_T in1[34], const real_T in2[60],
            real_T s, real_T r_jtip[36])
{
  real_T t3;
  real_T t11;
  real_T t4;
  real_T t5;
  real_T t9;
  real_T t10;
  real_T t17;
  real_T t12;
  real_T t15;
  real_T t13;
  real_T t14;
  real_T t16;
  real_T t18;
  real_T t19;
  real_T t20;
  real_T t21;
  real_T t22;
  real_T t23;
  real_T t24;
  real_T t54;
  real_T t25;
  real_T t26;
  real_T t27;
  real_T t28;
  real_T t29;
  real_T t30;
  real_T t31;
  real_T t32;
  real_T t53;
  real_T t33;
  real_T t34;
  real_T t35;
  real_T t36;
  real_T t37;
  real_T t55;
  real_T t38;
  real_T t39;
  real_T t40;
  real_T t41;
  real_T t58;
  real_T t42;
  real_T t43;
  real_T t44;
  real_T t45;
  real_T t57;
  real_T t46;
  real_T t47;
  real_T t48;
  real_T t49;
  real_T t56;
  real_T t50;
  real_T t51;
  real_T t52;
  real_T t59;
  real_T t63;
  real_T t66;
  real_T t73;
  real_T t77;
  real_T t78;
  real_T t79;
  real_T t80;
  real_T t81;
  real_T t82;
  real_T t109;
  real_T t110;
  real_T t83;
  real_T t84;
  real_T t115;
  real_T t116;
  real_T t85;
  real_T t86;
  real_T t113;
  real_T t114;
  real_T t87;
  real_T t88;
  real_T t111;
  real_T t112;
  real_T t89;
  real_T t90;
  real_T t91;
  real_T t92;
  real_T t93;
  real_T t94;
  real_T t107;
  real_T t108;
  real_T t95;
  real_T t96;
  real_T t105;
  real_T t106;
  real_T t97;
  real_T t98;
  real_T t99;
  real_T t100;
  real_T t101;
  real_T t102;
  real_T t103;
  real_T t104;
  real_T t117;
  real_T t125;
  real_T t128;
  real_T t131;
  real_T t135;
  real_T t136;
  real_T t137;
  real_T t138;
  real_T t139;
  real_T t140;
  real_T t141;
  real_T t168;
  real_T t169;
  real_T t142;
  real_T t143;
  real_T t174;
  real_T t175;
  real_T t144;
  real_T t145;
  real_T t172;
  real_T t173;
  real_T t146;
  real_T t147;
  real_T t170;
  real_T t171;
  real_T t148;
  real_T t149;
  real_T t150;
  real_T t151;
  real_T t152;
  real_T t153;
  real_T t166;
  real_T t167;
  real_T t154;
  real_T t155;
  real_T t164;
  real_T t165;
  real_T t156;
  real_T t157;
  real_T t158;
  real_T t159;
  real_T t160;
  real_T t161;
  real_T t162;
  real_T t163;
  real_T t183;
  real_T t186;
  real_T t189;
  real_T t193;
  real_T t194;
  real_T t195;
  real_T t196;
  real_T t197;
  real_T t198;
  real_T t201;
  real_T t204;
  real_T b_in2[36];
  int32_T i0;
  int32_T i1;
  (void)sp;
  (void)in1;
  (void)s;

  /* RJTIPF */
  /*     R_JTIP = RJTIPF(IN1,IN2,S) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     15-Feb-2019 04:43:56 */
  t3 = in2[3] * in2[7] * 0.5;
  t11 = in2[4] * in2[6] * 0.5;
  t4 = ((in2[8] + t3) - t11) + 0.01;
  t5 = in2[5] * in2[6] * 0.5;
  t9 = (in2[3] * in2[6] * 0.5 + in2[4] * in2[7] * 0.5) + in2[5] * (in2[8] + 0.01)
    * 0.5;
  t10 = in2[4] * (in2[8] + 0.01) * 0.5;
  t17 = in2[3] * (in2[8] + 0.01) * 0.5;
  t12 = (in2[7] + t5) - t17;
  t15 = in2[5] * in2[7] * 0.5;
  t13 = (in2[6] + t10) - t15;
  t14 = in2[4] * t4 * 0.5;
  t16 = in2[3] * t9 * 0.5;
  t18 = in2[3] * in2[9] * 0.25;
  t19 = in2[4] * in2[10] * 0.25;
  t20 = in2[5] * in2[11] * 0.25;
  t21 = ((t18 + t19) + t20) - 1.0;
  t22 = in2[3] * 0.005;
  t23 = in2[9] * 0.005;
  t24 = in2[4] * in2[11] * 0.0025;
  t54 = in2[5] * in2[10] * 0.0025;
  t25 = ((t22 + t23) + t24) - t54;
  t26 = in2[3] * in2[9] * 0.0025;
  t27 = in2[4] * in2[10] * 0.0025;
  t28 = in2[5] * in2[11] * 0.0025;
  t29 = ((t26 + t27) + t28) - 0.01;
  t30 = in2[3] * 0.5;
  t31 = in2[9] * 0.5;
  t32 = in2[4] * in2[11] * 0.25;
  t53 = in2[5] * in2[10] * 0.25;
  t33 = ((t30 + t31) + t32) - t53;
  t34 = in2[4] * t9 * 0.5;
  t35 = in2[4] * 0.5;
  t36 = in2[10] * 0.5;
  t37 = in2[5] * in2[9] * 0.25;
  t55 = in2[3] * in2[11] * 0.25;
  t38 = ((t35 + t36) + t37) - t55;
  t39 = in2[5] * 0.005;
  t40 = in2[11] * 0.005;
  t41 = in2[3] * in2[10] * 0.0025;
  t58 = in2[4] * in2[9] * 0.0025;
  t42 = ((t39 + t40) + t41) - t58;
  t43 = in2[5] * 0.5;
  t44 = in2[11] * 0.5;
  t45 = in2[3] * in2[10] * 0.25;
  t57 = in2[4] * in2[9] * 0.25;
  t46 = ((t43 + t44) + t45) - t57;
  t47 = in2[4] * 0.005;
  t48 = in2[10] * 0.005;
  t49 = in2[5] * in2[9] * 0.0025;
  t56 = in2[3] * in2[11] * 0.0025;
  t50 = ((t47 + t48) + t49) - t56;
  t51 = in2[5] * t13 * 0.5;
  t52 = in2[5] * t9 * 0.5;
  t59 = in2[3] * t12 * 0.5;
  t63 = (in2[12] * t38 + t21 * (in2[14] + 0.01)) - in2[13] * t33;
  t66 = (in2[13] * t46 + in2[12] * t21) - t38 * (in2[14] + 0.01);
  t9 = (in2[12] * t33 + in2[13] * t38) + t46 * (in2[14] + 0.01);
  t73 = (t33 * (in2[14] + 0.01) + in2[13] * t21) - in2[12] * t46;
  t77 = t46 * t73;
  t78 = t33 * t9;
  t79 = t21 * t66;
  t80 = t33 * t63;
  t81 = t38 * t9;
  t82 = in2[15] * t46 * 0.5;
  t109 = in2[17] * t33 * 0.5;
  t110 = in2[16] * t21 * 0.5;
  t83 = (((((t35 + t36) + t37) - t55) + t82) - t109) - t110;
  t84 = in2[16] * t33 * 0.005;
  t115 = in2[15] * t38 * 0.005;
  t116 = in2[17] * t21 * 0.005;
  t85 = (((((t39 + t40) + t41) - t58) + t84) - t115) - t116;
  t86 = in2[16] * t33 * 0.5;
  t113 = in2[15] * t38 * 0.5;
  t114 = in2[17] * t21 * 0.5;
  t87 = (((((t43 + t44) + t45) - t57) + t86) - t113) - t114;
  t88 = in2[15] * t46 * 0.005;
  t111 = in2[17] * t33 * 0.005;
  t112 = in2[16] * t21 * 0.005;
  t89 = (((((t47 + t48) + t49) - t56) + t88) - t111) - t112;
  t90 = in2[15] * t33 * 0.5;
  t91 = in2[16] * t38 * 0.5;
  t92 = in2[17] * t46 * 0.5;
  t93 = (((((t18 + t19) + t20) + t90) + t91) + t92) - 1.0;
  t94 = in2[17] * t38 * 0.005;
  t107 = in2[16] * t46 * 0.005;
  t108 = in2[15] * t21 * 0.005;
  t95 = (((((t22 + t23) + t24) - t54) + t94) - t107) - t108;
  t96 = in2[17] * t38 * 0.5;
  t105 = in2[16] * t46 * 0.5;
  t106 = in2[15] * t21 * 0.5;
  t97 = (((((t30 + t31) + t32) - t53) + t96) - t105) - t106;
  t98 = in2[15] * t33 * 0.005;
  t99 = in2[16] * t38 * 0.005;
  t100 = in2[17] * t46 * 0.005;
  t101 = (((((t26 + t27) + t28) + t98) + t99) + t100) - 0.01;
  t102 = t21 * t73;
  t103 = t38 * t66;
  t104 = t46 * t9;
  t117 = t21 * t63;
  t9 = (t87 * (in2[20] + 0.01) + in2[18] * t97) + in2[19] * t83;
  t125 = (t97 * (in2[20] + 0.01) + in2[19] * t93) - in2[18] * t87;
  t128 = (t93 * (in2[20] + 0.01) + in2[18] * t83) - in2[19] * t97;
  t131 = (in2[18] * t93 + in2[19] * t87) - t83 * (in2[20] + 0.01);
  t135 = t97 * t9;
  t136 = t87 * t125;
  t137 = t93 * t131;
  t138 = t83 * t9;
  t139 = t93 * t125;
  t140 = t97 * t128;
  t141 = in2[21] * t87 * 0.5;
  t168 = in2[22] * t93 * 0.5;
  t169 = in2[23] * t97 * 0.5;
  t142 = ((((((((t35 + t36) + t37) - t55) + t82) - t109) - t110) + t141) - t168)
    - t169;
  t143 = in2[22] * t97 * 0.005;
  t174 = in2[21] * t83 * 0.005;
  t175 = in2[23] * t93 * 0.005;
  t144 = ((((((((t39 + t40) + t41) - t58) + t84) - t115) - t116) + t143) - t174)
    - t175;
  t145 = in2[22] * t97 * 0.5;
  t172 = in2[21] * t83 * 0.5;
  t173 = in2[23] * t93 * 0.5;
  t146 = ((((((((t43 + t44) + t45) - t57) + t86) - t113) - t114) + t145) - t172)
    - t173;
  t147 = in2[21] * t87 * 0.005;
  t170 = in2[22] * t93 * 0.005;
  t171 = in2[23] * t97 * 0.005;
  t148 = ((((((((t47 + t48) + t49) - t56) + t88) - t111) - t112) + t147) - t170)
    - t171;
  t149 = in2[21] * t97 * 0.5;
  t150 = in2[22] * t83 * 0.5;
  t151 = in2[23] * t87 * 0.5;
  t152 = ((((((((t18 + t19) + t20) + t90) + t91) + t92) + t149) + t150) + t151)
    - 1.0;
  t153 = in2[23] * t83 * 0.005;
  t166 = in2[21] * t93 * 0.005;
  t167 = in2[22] * t87 * 0.005;
  t154 = ((((((((t22 + t23) + t24) - t54) + t94) - t107) - t108) + t153) - t166)
    - t167;
  t155 = in2[23] * t83 * 0.5;
  t164 = in2[21] * t93 * 0.5;
  t165 = in2[22] * t87 * 0.5;
  t156 = ((((((((t30 + t31) + t32) - t53) + t96) - t105) - t106) + t155) - t164)
    - t165;
  t157 = in2[21] * t97 * 0.005;
  t158 = in2[22] * t83 * 0.005;
  t159 = in2[23] * t87 * 0.005;
  t160 = ((((((((t26 + t27) + t28) + t98) + t99) + t100) + t157) + t158) + t159)
    - 0.01;
  t161 = t87 * t9;
  t162 = t93 * t128;
  t163 = t83 * t131;
  t9 = (t146 * (in2[26] + 0.01) + in2[24] * t156) + in2[25] * t142;
  t183 = (t156 * (in2[26] + 0.01) + in2[25] * t152) - in2[24] * t146;
  t186 = (t152 * (in2[26] + 0.01) + in2[24] * t142) - in2[25] * t156;
  t189 = (in2[24] * t152 + in2[25] * t146) - t142 * (in2[26] + 0.01);
  t193 = t156 * t9;
  t194 = t146 * t183;
  t195 = t152 * t189;
  t196 = t142 * t9;
  t197 = t152 * t183;
  t198 = t156 * t186;
  t201 = (((((((((((-t35 - t36) - t37) + t55) - t82) + t109) + t110) - t141) +
             t168) + t169) + in2[28] * t152 * 0.5) + in2[29] * t156 * 0.5) -
    in2[27] * t146 * 0.5;
  t204 = (((((((((((-t39 - t40) - t41) + t58) - t84) + t115) + t116) - t143) +
             t174) + t175) + in2[27] * t142 * 0.005) + in2[29] * t152 * 0.005) -
    in2[28] * t156 * 0.005;
  t43 = (((((((((((-t43 - t44) - t45) + t57) - t86) + t113) + t114) - t145) +
            t172) + t173) + in2[27] * t142 * 0.5) + in2[29] * t152 * 0.5) - in2
    [28] * t156 * 0.5;
  t114 = (((((((((((-t47 - t48) - t49) + t56) - t88) + t111) + t112) - t147) +
             t170) + t171) + in2[28] * t152 * 0.005) + in2[29] * t156 * 0.005) -
    in2[27] * t146 * 0.005;
  t113 = (((((((((((t18 + t19) + t20) + t90) + t91) + t92) + t149) + t150) +
             t151) + in2[27] * t156 * 0.5) + in2[28] * t142 * 0.5) + in2[29] *
          t146 * 0.5) - 1.0;
  t86 = (((((((((((-t22 - t23) - t24) + t54) - t94) + t107) + t108) - t153) +
            t166) + t167) + in2[27] * t152 * 0.005) + in2[28] * t146 * 0.005) -
    in2[29] * t142 * 0.005;
  t58 = (((((((((((-t30 - t31) - t32) + t53) - t96) + t105) + t106) - t155) +
            t164) + t165) + in2[27] * t152 * 0.5) + in2[28] * t146 * 0.5) - in2
    [29] * t142 * 0.5;
  t41 = (((((((((((t26 + t27) + t28) + t98) + t99) + t100) + t157) + t158) +
            t159) + in2[27] * t156 * 0.005) + in2[28] * t142 * 0.005) + in2[29] *
         t146 * 0.005) - 0.01;
  t9 *= t146;
  t141 = t152 * t186;
  t168 = t142 * t189;
  t169 = t83 * t128;
  t82 = t142 * t186;
  t109 = t38 * t63;
  t110 = in2[5] * t12 * 0.5;
  t143 = (((((((((((((((((in2[0] + in2[6]) + t10) + t14) - t15) + t16) + t77) +
                    t78) + t79) + t135) + t136) + t137) + t193) + t194) + t195)
            - t169) - t82) - t109) - t110;
  t174 = t87 * t131;
  t175 = in2[3] * t4 * 0.5;
  t35 = t146 * t189;
  t36 = t46 * t66;
  t37 = (((((((((((((((((in2[1] + in2[7]) + t5) - t17) + t34) + t51) + t80) +
                   t81) + t102) + t138) + t139) + t140) + t196) + t197) + t198)
           - t174) - t175) - t35) - t36;
  t55 = t97 * t125;
  t84 = t156 * t183;
  t115 = t33 * t73;
  t116 = in2[4] * t13 * 0.5;
  t145 = ((((((((((((((((((in2[2] + in2[8]) + t3) - t11) + t52) + t59) + t103) +
                     t104) + t117) + t161) + t162) + t163) + t9) + t141) + t168)
             - t55) - t84) - t115) - t116) + 0.02;
  t172 = (((((((((((in2[4] * in2[9] * 0.003625 + in2[15] * t38 * 0.00725) + in2
                   [27] * t142 * 0.00725) + in2[29] * t152 * 0.00725) + in2[21] *
                 t83 * 0.00725) + in2[23] * t93 * 0.00725) + in2[17] * t21 *
               0.00725) - in2[5] * 0.00725) - in2[11] * 0.00725) - in2[3] * in2
            [10] * 0.003625) - in2[16] * t33 * 0.00725) - in2[28] * t156 *
          0.00725) - in2[22] * t97 * 0.00725;
  t173 = (((((((((((in2[3] * in2[11] * 0.003625 + in2[17] * t33 * 0.00725) +
                   in2[28] * t152 * 0.00725) + in2[29] * t156 * 0.00725) + in2
                 [22] * t93 * 0.00725) + in2[23] * t97 * 0.00725) + in2[16] *
               t21 * 0.00725) - in2[4] * 0.00725) - in2[10] * 0.00725) - in2[5] *
            in2[9] * 0.003625) - in2[15] * t46 * 0.00725) - in2[27] * t146 *
          0.00725) - in2[21] * t87 * 0.00725;
  t39 = (((((((((((in2[5] * in2[10] * 0.003625 + in2[16] * t46 * 0.00725) + in2
                  [27] * t152 * 0.00725) + in2[28] * t146 * 0.00725) + in2[21] *
                t93 * 0.00725) + in2[22] * t87 * 0.00725) + in2[15] * t21 *
              0.00725) - in2[3] * 0.00725) - in2[9] * 0.00725) - in2[4] * in2[11]
           * 0.003625) - in2[17] * t38 * 0.00725) - in2[29] * t142 * 0.00725) -
    in2[23] * t83 * 0.00725;
  t40 = (((((((((((in2[3] * in2[9] * 0.003625 + in2[4] * in2[10] * 0.003625) +
                  in2[5] * in2[11] * 0.003625) + in2[15] * t33 * 0.00725) + in2
                [16] * t38 * 0.00725) + in2[17] * t46 * 0.00725) + in2[27] *
              t156 * 0.00725) + in2[28] * t142 * 0.00725) + in2[29] * t146 *
            0.00725) + in2[21] * t97 * 0.00725) + in2[22] * t83 * 0.00725) +
         in2[23] * t87 * 0.00725) - 0.0145;
  b_in2[0] = in2[0];
  b_in2[1] = (((((in2[0] + in2[6]) + t10) + t14) + t16) - in2[5] * in2[7] * 0.5)
    - in2[5] * t12 * 0.5;
  b_in2[2] = (((((((((in2[0] + in2[6]) + t10) + t14) - t15) + t16) + t77) + t78)
               + t79) - in2[5] * t12 * 0.5) - t38 * t63;
  b_in2[3] = (((((((((((((in2[0] + in2[6]) + t10) + t14) - t15) + t16) + t77) +
                    t78) + t79) + t135) + t136) + t137) - in2[5] * t12 * 0.5) -
              t38 * t63) - t83 * t128;
  b_in2[4] = t143;
  b_in2[5] = t143;
  b_in2[6] = in2[1];
  b_in2[7] = (((((in2[1] + in2[7]) + t5) + t34) + t51) - in2[3] * (in2[8] + 0.01)
              * 0.5) - in2[3] * t4 * 0.5;
  b_in2[8] = (((((((((in2[1] + in2[7]) + t5) - t17) + t34) + t51) + t80) + t81)
               + t102) - in2[3] * t4 * 0.5) - t46 * t66;
  b_in2[9] = (((((((((((((in2[1] + in2[7]) + t5) - t17) + t34) + t51) + t80) +
                    t81) + t102) + t138) + t139) + t140) - in2[3] * t4 * 0.5) -
              t46 * t66) - t87 * t131;
  b_in2[10] = t37;
  b_in2[11] = t37;
  b_in2[12] = in2[2] + 0.01;
  b_in2[13] = ((((((in2[2] + in2[8]) + t3) - t11) + t52) + t59) - in2[4] * t13 *
               0.5) + 0.02;
  b_in2[14] = ((((((((((in2[2] + in2[8]) + t3) - t11) + t52) + t59) + t103) +
                  t104) + t117) - in2[4] * t13 * 0.5) - t33 * t73) + 0.02;
  b_in2[15] = ((((((((((((((in2[2] + in2[8]) + t3) - t11) + t52) + t59) + t103)
                      + t104) + t117) + t161) + t162) + t163) - in2[4] * t13 *
                 0.5) - t33 * t73) - t97 * t125) + 0.02;
  b_in2[16] = t145;
  b_in2[17] = t145;
  b_in2[18] = (in2[0] + in2[4] * 0.01) + in2[3] * in2[5] * 0.005;
  b_in2[19] = (((((((((in2[0] + in2[6]) + t10) + t14) - t15) + t16) - in2[5] *
                  t12 * 0.5) - t29 * t38) - t21 * t50) + t25 * t46) + t33 * t42;
  b_in2[20] = (((((((((((((in2[0] + in2[6]) + t10) + t14) - t15) + t16) + t77) +
                     t78) + t79) - in2[5] * t12 * 0.5) - t38 * t63) + t85 * t97)
                + t87 * t95) - t89 * t93) - t83 * t101;
  b_in2[21] = (((((((((((((((((in2[0] + in2[6]) + t10) + t14) - t15) + t16) +
    t77) + t78) + t79) + t135) + t136) + t137) - in2[5] * t12 * 0.5) - t38 * t63)
                  - t83 * t128) + t144 * t156) + t146 * t154) - t148 * t152) -
    t142 * t160;
  b_in2[22] = (((((((((((((((((((((in2[0] + in2[6]) + t10) + t14) - t15) + t16)
    + t77) + t78) + t79) + t135) + t136) + t137) + t193) + t194) + t195) - in2[5]
                     * t12 * 0.5) - t38 * t63) - t83 * t128) - t142 * t186) +
                 t204 * t58) + t43 * t86) + t114 * t113) + t201 * t41;
  b_in2[23] = (((((((((((((((((((((in2[0] + in2[6]) + t10) + t14) - t15) + t16)
    + t77) + t78) + t79) + t135) + t136) + t137) + t193) + t194) + t195) - t169)
                    - t82) - t109) - t110) + t58 * t172) + t113 * t173) + t43 *
               t39) + t201 * t40;
  b_in2[24] = (in2[1] - in2[3] * 0.01) + in2[4] * in2[5] * 0.005;
  b_in2[25] = (((((((((in2[1] + in2[7]) + t5) - t17) + t34) + t51) - in2[3] * t4
                  * 0.5) + t21 * t25) + t29 * t33) + t38 * t42) + t46 * t50;
  b_in2[26] = (((((((((((((in2[1] + in2[7]) + t5) - t17) + t34) + t51) + t80) +
                     t81) + t102) - in2[3] * t4 * 0.5) - t46 * t66) + t83 * t85)
                + t87 * t89) + t93 * t95) + t97 * t101;
  b_in2[27] = (((((((((((((((((in2[1] + in2[7]) + t5) - t17) + t34) + t51) + t80)
    + t81) + t102) + t138) + t139) + t140) - in2[3] * t4 * 0.5) - t46 * t66) -
                  t87 * t131) + t142 * t144) + t146 * t148) + t152 * t154) +
    t156 * t160;
  b_in2[28] = (((((((((((((((((((((in2[1] + in2[7]) + t5) - t17) + t34) + t51) +
    t80) + t81) + t102) + t138) + t139) + t140) + t196) + t197) + t198) - in2[3]
                     * t4 * 0.5) - t46 * t66) - t87 * t131) - t146 * t189) +
                 t201 * t204) + t43 * t114) - t113 * t86) - t58 * t41;
  b_in2[29] = (((((((((((((((((((((in2[1] + in2[7]) + t5) - t17) + t34) + t51) +
    t80) + t81) + t102) + t138) + t139) + t140) + t196) + t197) + t198) - t174)
                    - t175) - t35) - t36) + t201 * t172) + t43 * t173) - t113 *
               t39) - t58 * t40;
  b_in2[30] = (((in2[2] - in2[3] * in2[3] * 0.0025) - in2[4] * in2[4] * 0.0025)
               + in2[5] * in2[5] * 0.0025) + 0.02;
  b_in2[31] = ((((((((((in2[2] + in2[8]) + t3) - t11) + t52) + t59) - in2[4] *
                   t13 * 0.5) + t21 * t29) - t25 * t33) - t38 * t50) + t42 * t46)
    + 0.02;
  b_in2[32] = ((((((((((((((in2[2] + in2[8]) + t3) - t11) + t52) + t59) + t103)
                      + t104) + t117) - in2[4] * t13 * 0.5) - t33 * t73) - t83 *
                  t89) + t85 * t87) - t95 * t97) + t93 * t101) + 0.02;
  b_in2[33] = ((((((((((((((((((in2[2] + in2[8]) + t3) - t11) + t52) + t59) +
    t103) + t104) + t117) + t161) + t162) + t163) - in2[4] * t13 * 0.5) - t33 *
                    t73) - t97 * t125) - t142 * t148) + t144 * t146) - t154 *
                t156) + t152 * t160) + 0.02;
  b_in2[34] = ((((((((((((((((((((((in2[2] + in2[8]) + t3) - t11) + t52) + t59)
    + t103) + t104) + t117) + t161) + t162) + t163) + t9) + t141) + t168) - in2
                      [4] * t13 * 0.5) - t33 * t73) - t97 * t125) - t156 * t183)
                  - t201 * t114) + t204 * t43) - t86 * t58) + t113 * t41) + 0.02;
  b_in2[35] = ((((((((((((((((((((((in2[2] + in2[8]) + t3) - t11) + t52) + t59)
    + t103) + t104) + t117) + t161) + t162) + t163) + t9) + t141) + t168) - t55)
                     - t84) - t115) - t116) + t43 * t172) - t201 * t173) - t58 *
                t39) + t113 * t40) + 0.02;
  for (i0 = 0; i0 < 6; i0++) {
    for (i1 = 0; i1 < 6; i1++) {
      r_jtip[i1 + 6 * i0] = b_in2[i1 + 6 * i0];
    }
  }
}

/* End of code generation (rjtipF.c) */