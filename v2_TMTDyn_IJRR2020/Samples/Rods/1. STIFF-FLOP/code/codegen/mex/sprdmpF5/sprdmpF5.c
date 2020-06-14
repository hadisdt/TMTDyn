/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sprdmpF5.c
 *
 * Code generation for function 'sprdmpF5'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "sprdmpF5.h"

/* Function Definitions */
void sprdmpF5(const real_T in1[34], const real_T in2[24], real_T s, real_T out1
              [12], real_T *out2, real_T *out3, real_T *out4, real_T *out5,
              real_T out6[12], real_T out7[12], real_T *out8)
{
  int32_T i;
  static const int8_T iv0[12] = { 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0 };

  (void)in1;
  (void)s;

  /* SPRDMPF5 */
  /*     [OUT1,OUT2,OUT3,OUT4,OUT5,OUT6,OUT7,OUT8] = SPRDMPF5(IN1,IN2,S) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.2. */
  /*     04-Jan-2019 15:00:36 */
  *out5 = in2[4];
  *out2 = 0.0;
  *out3 = 0.0;
  *out4 = 0.0;
  for (i = 0; i < 12; i++) {
    out1[i] = iv0[i];
    out6[i] = 0.0;
    out7[i] = 0.0;
  }

  *out8 = 1.0;
}

/* End of code generation (sprdmpF5.c) */
