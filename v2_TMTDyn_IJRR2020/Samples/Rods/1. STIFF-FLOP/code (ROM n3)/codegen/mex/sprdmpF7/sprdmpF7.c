/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sprdmpF7.c
 *
 * Code generation for function 'sprdmpF7'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "sprdmpF7.h"

/* Function Definitions */
void sprdmpF7(const real_T in1[34], const real_T in2[36], real_T s, real_T out1
              [18], real_T *out2, real_T *out3, real_T *out4, real_T *out5,
              real_T out6[18], real_T out7[18], real_T *out8)
{
  int32_T i;
  static const int8_T iv0[18] = { 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0 };

  (void)in1;
  (void)s;

  /* SPRDMPF7 */
  /*     [OUT1,OUT2,OUT3,OUT4,OUT5,OUT6,OUT7,OUT8] = SPRDMPF7(IN1,IN2,S) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.2. */
  /*     04-Jan-2019 16:03:16 */
  *out5 = in2[6];
  *out2 = 0.0;
  *out3 = 0.0;
  *out4 = 0.0;
  for (i = 0; i < 18; i++) {
    out1[i] = iv0[i];
    out6[i] = 0.0;
    out7[i] = 0.0;
  }

  *out8 = 1.0;
}

/* End of code generation (sprdmpF7.c) */
