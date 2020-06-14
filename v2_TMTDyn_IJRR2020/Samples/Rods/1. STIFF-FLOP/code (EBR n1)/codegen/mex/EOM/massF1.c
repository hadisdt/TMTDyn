/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * massF1.c
 *
 * Code generation for function 'massF1'
 *
 */

/* Include files */
#include <string.h>
#include "rt_nonfinite.h"
#include "EOM.h"
#include "massF1.h"

/* Function Definitions */
void massF1(const real_T in1[34], const real_T in2[12], real_T out1[36], real_T
            out2[36], real_T out3[36], real_T out4[6])
{
  real_T t4;
  real_T t5;
  real_T t7;
  real_T t16;
  real_T out1_tmp;
  real_T out1_tmp_tmp;

  /* MASSF1 */
  /*     [OUT1,OUT2,OUT3,OUT4] = MASSF1(IN1,IN2,S) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.2. */
  /*     05-Jan-2019 22:48:47 */
  t4 = in1[2] * in1[2];
  t5 = in1[3] * in1[3];
  t7 = 1.0 / in1[33];
  t16 = t4 - t5;
  out1_tmp = -in1[0] * ((in1[18] * in1[18] * 6.0 + t4) - t5) *
    3.1415926535897931;
  out1[0] = out1_tmp;
  out1[1] = 0.0;
  out1[2] = 0.0;
  out1[3] = 0.0;
  out1[4] = 0.0;
  out1[5] = 0.0;
  out1[6] = 0.0;
  out1[7] = out1_tmp;
  out1[8] = 0.0;
  out1[9] = 0.0;
  out1[10] = 0.0;
  out1[11] = 0.0;
  out1[12] = 0.0;
  out1[13] = 0.0;
  out1[14] = out1_tmp;
  out1[15] = 0.0;
  out1[16] = 0.0;
  out1[17] = 0.0;
  out1[18] = 0.0;
  out1[19] = 0.0;
  out1[20] = 0.0;
  out1_tmp_tmp = -in1[4] * in1[0];
  out1_tmp = out1_tmp_tmp * (t7 * (t4 * 3.0 + t5 * 3.0) / 12.0 + in1[4] * in1[4]
    * (in1[33] * in1[33]) / 12.0) * t16 * 3.1415926535897931;
  out1[21] = out1_tmp;
  out1[22] = 0.0;
  out1[23] = 0.0;
  out1[24] = 0.0;
  out1[25] = 0.0;
  out1[26] = 0.0;
  out1[27] = 0.0;
  out1[28] = out1_tmp;
  out1[29] = 0.0;
  out1[30] = 0.0;
  out1[31] = 0.0;
  out1[32] = 0.0;
  out1[33] = 0.0;
  out1[34] = 0.0;
  out1[35] = out1_tmp_tmp * t7 * t16 * 3.1415926535897931 * (t4 / 2.0 + t5 / 2.0);
  t4 = in2[5] / 2.0;
  t5 = in2[3] / 2.0;
  out2[0] = 1.0;
  out2[1] = 0.0;
  out2[2] = 0.0;
  out2[3] = 0.0;
  out2[4] = 0.0;
  out2[5] = 0.0;
  out2[6] = 0.0;
  out2[7] = 1.0;
  out2[8] = 0.0;
  out2[9] = 0.0;
  out2[10] = 0.0;
  out2[11] = 0.0;
  out2[12] = 0.0;
  out2[13] = 0.0;
  out2[14] = 1.0;
  out2[15] = 0.0;
  out2[16] = 0.0;
  out2[17] = 0.0;
  out2[18] = 0.0;
  out2[19] = 0.0;
  out2[20] = 0.0;
  out2[21] = 1.0;
  out2[22] = -t4;
  out2[23] = in2[4] / 2.0;
  out2[24] = 0.0;
  out2[25] = 0.0;
  out2[26] = 0.0;
  out2[27] = t4;
  out2[28] = 1.0;
  out2[29] = -t5;
  out2[30] = 0.0;
  out2[31] = 0.0;
  out2[32] = 0.0;
  out2[33] = in2[4] * -0.5;
  out2[34] = t5;
  out2[35] = 1.0;
  t4 = in2[10] / 2.0;
  memset(&out3[0], 0, 22U * sizeof(real_T));
  out3[22] = in2[11] / 2.0;
  out3[23] = -t4;
  out3[24] = 0.0;
  out3[25] = 0.0;
  out3[26] = 0.0;
  out3[27] = in2[11] * -0.5;
  out3[28] = 0.0;
  out3[29] = in2[9] / 2.0;
  out3[30] = 0.0;
  out3[31] = 0.0;
  out3[32] = 0.0;
  out3[33] = t4;
  out3[34] = in2[9] * -0.5;
  out3[35] = 0.0;
  out4[0] = in1[12];
  out4[1] = in1[13];
  out4[2] = in1[14];
  out4[3] = 0.0;
  out4[4] = 0.0;
  out4[5] = 0.0;
}

/* End of code generation (massF1.c) */
