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
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "loadsF1.h"

/* Function Definitions */
void loadsF1(const real_T in1[34], const real_T in2[12], real_T s, real_T out1
             [36], real_T out2[6])
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
  real_T t40;
  real_T t13;
  real_T t14_tmp;
  real_T t14;
  real_T t17;
  real_T t18_tmp;
  real_T t18;
  real_T t29_tmp;
  real_T t29;
  real_T t19_tmp;
  real_T t21;
  real_T t22;
  real_T t23;
  real_T t24_tmp;
  real_T t28;
  real_T t33_tmp;
  real_T t31_tmp;
  real_T t32_tmp;
  real_T t35;
  real_T t36;
  real_T t37;
  (void)s;

  /* LOADSF1 */
  /*     [OUT1,OUT2] = LOADSF1(IN1,IN2,S) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.2. */
  /*     05-Jan-2019 21:11:26 */
  t2 = in2[5] / 2.0;
  t3 = in2[3] / 2.0;
  t4 = in2[4] / 2.0;
  t5 = muDoubleScalarCos(t4);
  t6 = muDoubleScalarCos(t2);
  t7 = muDoubleScalarSin(t3);
  t8 = muDoubleScalarCos(t3);
  t9 = muDoubleScalarSin(t4);
  t10 = muDoubleScalarSin(t2);
  t2 = t5 * t8 * t10;
  t40 = t6 * t7 * t9;
  t13 = t2 + t40;
  t3 = t5 * t6;
  t14_tmp = t3 * t8;
  t14 = t14_tmp / 2.0;
  t3 *= t7;
  t4 = t8 * t9 * t10;
  t17 = t3 + t4;
  t18_tmp = t5 * t7 * t10;
  t18 = t18_tmp / 2.0;
  t29_tmp = t6 * t8 * t9;
  t29 = t29_tmp / 2.0;
  t19_tmp = t18 - t29;
  t21 = t3 / 2.0;
  t22 = t4 / 2.0;
  t23 = t21 + t22;
  t24_tmp = t18_tmp - t29_tmp;
  t2 /= 2.0;
  t3 = t40 / 2.0;
  t28 = t2 + t3;
  t33_tmp = t7 * t9 * t10;
  t31_tmp = t14_tmp - t33_tmp;
  t4 = t33_tmp / 2.0;
  t32_tmp = t14 - t4;
  t35 = t2 - t3;
  t36 = t21 - t22;
  t37 = t18 + t29;
  t3 = t14 + t4;
  t4 = in1[16] * t13;
  t2 = t4 * t32_tmp * 2.0;
  t40 = in1[16] * t28 * t31_tmp * 2.0;
  t5 = t13 * t23 * 2.0;
  t8 = t17 * t28 * 2.0;
  out1[0] = 1.0;
  out1[1] = 0.0;
  out1[2] = 0.0;
  t6 = in1[16] * t17;
  t22 = in1[16] * t24_tmp;
  out1[3] = ((t4 * t23 * -2.0 - t6 * t28 * 2.0) - in1[16] * t19_tmp * t31_tmp *
             2.0) - t22 * t32_tmp * 2.0;
  out1[4] = ((t4 * t37 * -2.0 + t6 * t3 * 2.0) - t22 * t35 * 2.0) + in1[16] *
    t36 * t31_tmp * 2.0;
  out1[5] = ((in1[16] * (t18 - t29) * t24_tmp * 2.0 + in1[16] * t32_tmp *
              t31_tmp * 2.0) - t6 * t23 * 2.0) - t4 * t28 * 2.0;
  out1[6] = 0.0;
  out1[7] = 1.0;
  out1[8] = 0.0;
  t10 = in1[16] * t23;
  t21 = t6 * t19_tmp * 2.0;
  t9 = t10 * t24_tmp * 2.0;
  out1[9] = ((t2 + t40) - t21) - t9;
  t7 = in1[16] * t31_tmp;
  out1[10] = ((t4 * t35 * 2.0 + t6 * t36 * 2.0) - t22 * t37 * 2.0) - t7 * t3 *
    2.0;
  t14 = t6 * t32_tmp * 2.0;
  t22 = t22 * t28 * 2.0;
  t10 = t10 * t31_tmp * 2.0;
  out1[11] = ((t4 * t19_tmp * -2.0 - t22) + t14) + t10;
  out1[12] = 0.0;
  out1[13] = 0.0;
  out1[14] = 1.0;
  out1[15] = ((t14 - t22) - t10) + in1[16] * t13 * (t18 - t29) * 2.0;
  out1[16] = ((t4 * t36 * -2.0 + t6 * t35 * 2.0) - t7 * t37 * 2.0) + in1[16] *
    t3 * t24_tmp * 2.0;
  out1[17] = ((-t2 - t40) - t21) - t9;
  out1[18] = 0.0;
  out1[19] = 0.0;
  out1[20] = 0.0;
  out1[21] = ((t17 * t19_tmp * -2.0 - t13 * t32_tmp * 2.0) - t23 * t24_tmp * 2.0)
    - t28 * t31_tmp * 2.0;
  out1[22] = ((t13 * t35 * -2.0 + t17 * t36 * 2.0) - t24_tmp * t37 * 2.0) + t3 *
    t31_tmp * 2.0;
  out1[23] = ((t24_tmp * t28 * -2.0 - t23 * t31_tmp * 2.0) + t13 * t19_tmp * 2.0)
    + t17 * t32_tmp * 2.0;
  out1[24] = 0.0;
  out1[25] = 0.0;
  out1[26] = 0.0;
  t6 = t19_tmp * t31_tmp * 2.0;
  out1[27] = ((t5 + t8) - t6) - t24_tmp * t32_tmp * 2.0;
  out1[28] = ((t13 * t37 * 2.0 - t17 * t3 * 2.0) - t24_tmp * t35 * 2.0) + t36 *
    t31_tmp * 2.0;
  t22 = t17 * t23 * 2.0 + t32_tmp * t31_tmp * 2.0;
  t10 = t13 * t28 * 2.0;
  t21 = t19_tmp * t24_tmp * 2.0;
  out1[29] = (t22 + t10) + t21;
  out1[30] = 0.0;
  out1[31] = 0.0;
  out1[32] = 0.0;
  out1[33] = (t22 - t10) - t21;
  out1[34] = ((t13 * t3 * 2.0 + t17 * t37 * 2.0) + t36 * t24_tmp * 2.0) + t35 *
    t31_tmp * 2.0;
  out1[35] = ((-t5 + t8) - t6) + t32_tmp * t24_tmp * 2.0;
  t21 = -t18_tmp + t29_tmp;
  t3 = -t14_tmp + t33_tmp;
  t4 = (t21 * in1[30] + t13 * in1[31]) + t17 * in1[32];
  t2 = (t3 * in1[30] + t13 * in1[32]) - t17 * in1[31];
  t5 = t13 * in1[30];
  t8 = t21 * in1[32];
  t6 = t17 * in1[30];
  t40 = (-t8 + t6) + t3 * in1[31];
  t22 = t21 * in1[31];
  t10 = (-t5 + t22) + t3 * in1[32];
  out2[0] = in1[27];
  out2[1] = in1[28];
  out2[2] = in1[29];
  out2[3] = ((t17 * ((t8 - t6) + t31_tmp * in1[31]) - t13 * ((t5 + t31_tmp *
    in1[32]) - t22)) + t21 * t4) + t3 * t2;
  out2[4] = ((t13 * t4 + t17 * t2) + t3 * t40) - t21 * t10;
  out2[5] = ((-t13 * t2 + t17 * t4) + t21 * t40) + t3 * t10;
}

/* End of code generation (loadsF1.c) */
