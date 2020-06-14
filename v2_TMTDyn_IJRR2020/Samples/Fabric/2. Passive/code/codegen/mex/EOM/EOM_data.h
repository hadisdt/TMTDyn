/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * EOM_data.h
 *
 * Code generation for function 'EOM_data'
 *
 */

#ifndef EOM_DATA_H
#define EOM_DATA_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "EOM_types.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern const volatile char_T *emlrtBreakCheckR2012bFlagVar;
extern real_T t_report;
extern uint32_T t_report_dirty;
extern emlrtContext emlrtContextGlobal;
extern emlrtRSInfo rg_emlrtRSI;
extern emlrtRSInfo sg_emlrtRSI;
extern emlrtRSInfo tg_emlrtRSI;
extern emlrtRSInfo ug_emlrtRSI;
extern emlrtRSInfo vg_emlrtRSI;
extern emlrtRSInfo wg_emlrtRSI;
extern emlrtRSInfo xg_emlrtRSI;
extern emlrtRSInfo gh_emlrtRSI;
extern emlrtRSInfo qk_emlrtRSI;
extern emlrtRSInfo rk_emlrtRSI;
extern emlrtRSInfo sk_emlrtRSI;
extern emlrtRSInfo uk_emlrtRSI;
extern emlrtRSInfo vk_emlrtRSI;
extern emlrtRSInfo wk_emlrtRSI;
extern emlrtRSInfo bl_emlrtRSI;
extern emlrtRSInfo cl_emlrtRSI;
extern emlrtRSInfo dl_emlrtRSI;
extern emlrtRSInfo el_emlrtRSI;
extern emlrtRSInfo fl_emlrtRSI;
extern emlrtRSInfo gl_emlrtRSI;
extern emlrtRSInfo hl_emlrtRSI;
extern emlrtRSInfo il_emlrtRSI;
extern emlrtRSInfo jl_emlrtRSI;
extern emlrtRSInfo kl_emlrtRSI;
extern emlrtRSInfo ll_emlrtRSI;
extern emlrtRSInfo nl_emlrtRSI;
extern emlrtRSInfo ol_emlrtRSI;
extern emlrtRSInfo pl_emlrtRSI;
extern emlrtRSInfo rl_emlrtRSI;
extern emlrtRSInfo sl_emlrtRSI;
extern emlrtRSInfo tl_emlrtRSI;
extern emlrtRSInfo xl_emlrtRSI;
extern emlrtRSInfo yl_emlrtRSI;
extern emlrtRSInfo am_emlrtRSI;
extern emlrtRSInfo bm_emlrtRSI;
extern emlrtRSInfo cm_emlrtRSI;
extern emlrtRSInfo dm_emlrtRSI;
extern emlrtRSInfo em_emlrtRSI;
extern emlrtRSInfo fm_emlrtRSI;
extern emlrtRSInfo gm_emlrtRSI;
extern emlrtRSInfo hm_emlrtRSI;
extern emlrtRSInfo im_emlrtRSI;
extern emlrtRSInfo km_emlrtRSI;
extern emlrtRSInfo lm_emlrtRSI;
extern emlrtRSInfo mm_emlrtRSI;
extern emlrtRSInfo pm_emlrtRSI;
extern emlrtRSInfo qm_emlrtRSI;
extern emlrtRSInfo rm_emlrtRSI;
extern emlrtRSInfo um_emlrtRSI;
extern emlrtRSInfo vm_emlrtRSI;
extern emlrtRSInfo wm_emlrtRSI;
extern emlrtRSInfo xm_emlrtRSI;
extern emlrtRSInfo ym_emlrtRSI;
extern emlrtRSInfo an_emlrtRSI;
extern emlrtRSInfo bn_emlrtRSI;
extern emlrtRSInfo cn_emlrtRSI;
extern emlrtRSInfo dn_emlrtRSI;
extern emlrtRSInfo en_emlrtRSI;
extern emlrtRSInfo fn_emlrtRSI;
extern emlrtRSInfo hn_emlrtRSI;
extern emlrtRSInfo in_emlrtRSI;
extern emlrtRSInfo jn_emlrtRSI;
extern emlrtRSInfo ln_emlrtRSI;
extern emlrtRSInfo mn_emlrtRSI;
extern emlrtRSInfo nn_emlrtRSI;
extern emlrtRSInfo rn_emlrtRSI;
extern emlrtRSInfo sn_emlrtRSI;
extern emlrtRSInfo tn_emlrtRSI;
extern emlrtRSInfo un_emlrtRSI;
extern emlrtRSInfo vn_emlrtRSI;
extern emlrtRSInfo wn_emlrtRSI;
extern emlrtRSInfo xn_emlrtRSI;
extern emlrtRSInfo yn_emlrtRSI;
extern emlrtRSInfo ao_emlrtRSI;
extern emlrtRSInfo bo_emlrtRSI;
extern emlrtRSInfo co_emlrtRSI;
extern emlrtRSInfo eo_emlrtRSI;
extern emlrtRSInfo fo_emlrtRSI;
extern emlrtRSInfo go_emlrtRSI;
extern emlrtRSInfo jo_emlrtRSI;
extern emlrtRSInfo ko_emlrtRSI;
extern emlrtRSInfo lo_emlrtRSI;
extern emlrtRSInfo oo_emlrtRSI;
extern emlrtRSInfo po_emlrtRSI;
extern emlrtRSInfo qo_emlrtRSI;
extern emlrtRSInfo ro_emlrtRSI;
extern emlrtRSInfo so_emlrtRSI;
extern emlrtRSInfo to_emlrtRSI;
extern emlrtRSInfo uo_emlrtRSI;
extern emlrtRSInfo vo_emlrtRSI;
extern emlrtRSInfo wo_emlrtRSI;
extern emlrtRSInfo xo_emlrtRSI;
extern emlrtRSInfo yo_emlrtRSI;
extern emlrtRSInfo bp_emlrtRSI;
extern emlrtRSInfo cp_emlrtRSI;
extern emlrtRSInfo dp_emlrtRSI;
extern emlrtRSInfo fp_emlrtRSI;
extern emlrtRSInfo gp_emlrtRSI;
extern emlrtRSInfo hp_emlrtRSI;
extern emlrtRSInfo lp_emlrtRSI;
extern emlrtRSInfo mp_emlrtRSI;
extern emlrtRSInfo np_emlrtRSI;
extern emlrtRSInfo op_emlrtRSI;
extern emlrtRSInfo pp_emlrtRSI;
extern emlrtRSInfo qp_emlrtRSI;
extern emlrtRSInfo rp_emlrtRSI;
extern emlrtRSInfo sp_emlrtRSI;
extern emlrtRSInfo tp_emlrtRSI;
extern emlrtRSInfo up_emlrtRSI;
extern emlrtRSInfo vp_emlrtRSI;
extern emlrtRSInfo xp_emlrtRSI;
extern emlrtRSInfo yp_emlrtRSI;
extern emlrtRSInfo aq_emlrtRSI;
extern emlrtRSInfo dq_emlrtRSI;
extern emlrtRSInfo eq_emlrtRSI;
extern emlrtRSInfo fq_emlrtRSI;
extern emlrtRSInfo iq_emlrtRSI;
extern emlrtRSInfo jq_emlrtRSI;
extern emlrtRSInfo kq_emlrtRSI;
extern emlrtRSInfo lq_emlrtRSI;
extern emlrtRSInfo mq_emlrtRSI;
extern emlrtRSInfo nq_emlrtRSI;
extern emlrtRSInfo oq_emlrtRSI;
extern emlrtRSInfo pq_emlrtRSI;
extern emlrtRSInfo qq_emlrtRSI;
extern emlrtRSInfo rq_emlrtRSI;
extern emlrtRSInfo tq_emlrtRSI;
extern emlrtRSInfo uq_emlrtRSI;
extern emlrtRSInfo vq_emlrtRSI;
extern emlrtRSInfo yq_emlrtRSI;
extern emlrtRSInfo ar_emlrtRSI;
extern emlrtRSInfo br_emlrtRSI;
extern emlrtRSInfo er_emlrtRSI;
extern emlrtRSInfo fr_emlrtRSI;
extern emlrtRSInfo gr_emlrtRSI;
extern emlrtRSInfo hr_emlrtRSI;
extern emlrtRSInfo ir_emlrtRSI;
extern emlrtRSInfo jr_emlrtRSI;
extern emlrtRSInfo kr_emlrtRSI;
extern emlrtRSInfo lr_emlrtRSI;
extern emlrtRSInfo mr_emlrtRSI;
extern emlrtRSInfo nr_emlrtRSI;
extern emlrtRSInfo pr_emlrtRSI;
extern emlrtRSInfo qr_emlrtRSI;
extern emlrtRSInfo rr_emlrtRSI;
extern emlrtRSInfo tr_emlrtRSI;
extern emlrtRSInfo ur_emlrtRSI;
extern emlrtRSInfo vr_emlrtRSI;
extern emlrtRSInfo as_emlrtRSI;
extern emlrtRSInfo bs_emlrtRSI;
extern emlrtRSInfo cs_emlrtRSI;
extern emlrtRSInfo ds_emlrtRSI;
extern emlrtRSInfo es_emlrtRSI;
extern emlrtRSInfo fs_emlrtRSI;
extern emlrtRSInfo gs_emlrtRSI;
extern emlrtRSInfo hs_emlrtRSI;
extern emlrtRSInfo is_emlrtRSI;
extern emlrtRSInfo js_emlrtRSI;
extern emlrtRSInfo ls_emlrtRSI;
extern emlrtRSInfo ms_emlrtRSI;
extern emlrtRSInfo ns_emlrtRSI;
extern emlrtRSInfo qs_emlrtRSI;
extern emlrtRSInfo rs_emlrtRSI;
extern emlrtRSInfo ss_emlrtRSI;
extern emlrtRSInfo vs_emlrtRSI;
extern emlrtRSInfo ws_emlrtRSI;
extern emlrtRSInfo xs_emlrtRSI;
extern emlrtRSInfo ys_emlrtRSI;
extern emlrtRSInfo at_emlrtRSI;
extern emlrtRSInfo bt_emlrtRSI;
extern emlrtRSInfo ct_emlrtRSI;
extern emlrtRSInfo dt_emlrtRSI;
extern emlrtRSInfo et_emlrtRSI;
extern emlrtRSInfo ft_emlrtRSI;
extern emlrtRSInfo ht_emlrtRSI;
extern emlrtRSInfo it_emlrtRSI;
extern emlrtRSInfo jt_emlrtRSI;
extern emlrtRSInfo mt_emlrtRSI;
extern emlrtRSInfo nt_emlrtRSI;
extern emlrtRSInfo ot_emlrtRSI;
extern emlrtRSInfo rt_emlrtRSI;
extern emlrtRSInfo st_emlrtRSI;
extern emlrtRSInfo tt_emlrtRSI;
extern emlrtRSInfo ut_emlrtRSI;
extern emlrtRSInfo vt_emlrtRSI;
extern emlrtRSInfo wt_emlrtRSI;
extern emlrtRSInfo xt_emlrtRSI;
extern emlrtRSInfo yt_emlrtRSI;
extern emlrtRSInfo au_emlrtRSI;
extern emlrtRSInfo bu_emlrtRSI;
extern emlrtRSInfo cu_emlrtRSI;
extern emlrtRSInfo eu_emlrtRSI;
extern emlrtRSInfo fu_emlrtRSI;
extern emlrtRSInfo gu_emlrtRSI;
extern emlrtRSInfo ju_emlrtRSI;
extern emlrtRSInfo ku_emlrtRSI;
extern emlrtRSInfo lu_emlrtRSI;
extern emlrtRSInfo ou_emlrtRSI;
extern emlrtRSInfo pu_emlrtRSI;
extern emlrtRSInfo qu_emlrtRSI;
extern emlrtRSInfo ru_emlrtRSI;
extern emlrtRSInfo su_emlrtRSI;
extern emlrtRSInfo tu_emlrtRSI;
extern emlrtRSInfo uu_emlrtRSI;
extern emlrtRSInfo vu_emlrtRSI;
extern emlrtRSInfo wu_emlrtRSI;
extern emlrtRSInfo xu_emlrtRSI;
extern emlrtRSInfo yu_emlrtRSI;
extern emlrtRSInfo bv_emlrtRSI;
extern emlrtRSInfo cv_emlrtRSI;
extern emlrtRSInfo dv_emlrtRSI;
extern emlrtRSInfo gv_emlrtRSI;
extern emlrtRSInfo hv_emlrtRSI;
extern emlrtRSInfo iv_emlrtRSI;
extern emlrtRSInfo lv_emlrtRSI;
extern emlrtRSInfo mv_emlrtRSI;
extern emlrtRSInfo nv_emlrtRSI;
extern emlrtRSInfo ov_emlrtRSI;
extern emlrtRSInfo pv_emlrtRSI;
extern emlrtRSInfo qv_emlrtRSI;
extern emlrtRSInfo rv_emlrtRSI;
extern emlrtRSInfo sv_emlrtRSI;
extern emlrtRSInfo tv_emlrtRSI;
extern emlrtRSInfo uv_emlrtRSI;
extern emlrtRSInfo vv_emlrtRSI;
extern emlrtRSInfo xv_emlrtRSI;
extern emlrtRSInfo yv_emlrtRSI;
extern emlrtRSInfo aw_emlrtRSI;
extern emlrtRSInfo cw_emlrtRSI;
extern emlrtRSInfo dw_emlrtRSI;
extern emlrtRSInfo ew_emlrtRSI;
extern emlrtRSInfo iw_emlrtRSI;
extern emlrtRSInfo jw_emlrtRSI;
extern emlrtRSInfo kw_emlrtRSI;
extern emlrtRSInfo lw_emlrtRSI;
extern emlrtRSInfo mw_emlrtRSI;
extern emlrtRSInfo nw_emlrtRSI;
extern emlrtRSInfo ow_emlrtRSI;
extern emlrtRSInfo pw_emlrtRSI;
extern emlrtRSInfo qw_emlrtRSI;
extern emlrtRSInfo rw_emlrtRSI;
extern emlrtRSInfo sw_emlrtRSI;
extern emlrtRSInfo uw_emlrtRSI;
extern emlrtRSInfo vw_emlrtRSI;
extern emlrtRSInfo ww_emlrtRSI;
extern emlrtRSInfo ax_emlrtRSI;
extern emlrtRSInfo bx_emlrtRSI;
extern emlrtRSInfo cx_emlrtRSI;
extern emlrtRSInfo fx_emlrtRSI;
extern emlrtRSInfo gx_emlrtRSI;
extern emlrtRSInfo hx_emlrtRSI;
extern emlrtRSInfo ix_emlrtRSI;
extern emlrtRSInfo jx_emlrtRSI;
extern emlrtRSInfo kx_emlrtRSI;
extern emlrtRSInfo lx_emlrtRSI;
extern emlrtRSInfo mx_emlrtRSI;
extern emlrtRSInfo nx_emlrtRSI;
extern emlrtRSInfo ox_emlrtRSI;
extern emlrtRSInfo qx_emlrtRSI;
extern emlrtRSInfo rx_emlrtRSI;
extern emlrtRSInfo sx_emlrtRSI;
extern emlrtRSInfo vx_emlrtRSI;
extern emlrtRSInfo wx_emlrtRSI;
extern emlrtRSInfo xx_emlrtRSI;
extern emlrtRSInfo by_emlrtRSI;
extern emlrtRSInfo cy_emlrtRSI;
extern emlrtRSInfo dy_emlrtRSI;
extern emlrtRSInfo ey_emlrtRSI;
extern emlrtRSInfo fy_emlrtRSI;
extern emlrtRSInfo gy_emlrtRSI;
extern emlrtRSInfo hy_emlrtRSI;
extern emlrtRSInfo iy_emlrtRSI;
extern emlrtRSInfo jy_emlrtRSI;
extern emlrtRSInfo ky_emlrtRSI;
extern emlrtRSInfo my_emlrtRSI;
extern emlrtRSInfo ny_emlrtRSI;
extern emlrtRSInfo oy_emlrtRSI;
extern emlrtRSInfo ry_emlrtRSI;
extern emlrtRSInfo sy_emlrtRSI;
extern emlrtRSInfo ty_emlrtRSI;
extern emlrtRSInfo wy_emlrtRSI;
extern emlrtRSInfo xy_emlrtRSI;
extern emlrtRSInfo yy_emlrtRSI;
extern emlrtRSInfo aab_emlrtRSI;
extern emlrtRSInfo bab_emlrtRSI;
extern emlrtRSInfo cab_emlrtRSI;
extern emlrtRSInfo dab_emlrtRSI;
extern emlrtRSInfo eab_emlrtRSI;
extern emlrtRSInfo fab_emlrtRSI;
extern emlrtRSInfo gab_emlrtRSI;
extern emlrtRSInfo iab_emlrtRSI;
extern emlrtRSInfo jab_emlrtRSI;
extern emlrtRSInfo kab_emlrtRSI;
extern emlrtRSInfo nab_emlrtRSI;
extern emlrtRSInfo oab_emlrtRSI;
extern emlrtRSInfo pab_emlrtRSI;
extern emlrtRSInfo sab_emlrtRSI;
extern emlrtRSInfo tab_emlrtRSI;
extern emlrtRSInfo uab_emlrtRSI;
extern emlrtRSInfo vab_emlrtRSI;
extern emlrtRSInfo wab_emlrtRSI;
extern emlrtRSInfo xab_emlrtRSI;
extern emlrtRSInfo yab_emlrtRSI;
extern emlrtRSInfo abb_emlrtRSI;
extern emlrtRSInfo bbb_emlrtRSI;
extern emlrtRSInfo cbb_emlrtRSI;
extern emlrtRSInfo ebb_emlrtRSI;
extern emlrtRSInfo fbb_emlrtRSI;
extern emlrtRSInfo gbb_emlrtRSI;
extern emlrtRSInfo jbb_emlrtRSI;
extern emlrtRSInfo kbb_emlrtRSI;
extern emlrtRSInfo lbb_emlrtRSI;
extern emlrtRSInfo obb_emlrtRSI;
extern emlrtRSInfo pbb_emlrtRSI;
extern emlrtRSInfo qbb_emlrtRSI;
extern emlrtRSInfo rbb_emlrtRSI;
extern emlrtRSInfo sbb_emlrtRSI;
extern emlrtRSInfo tbb_emlrtRSI;
extern emlrtRSInfo ubb_emlrtRSI;
extern emlrtRSInfo vbb_emlrtRSI;
extern emlrtRSInfo wbb_emlrtRSI;
extern emlrtRSInfo xbb_emlrtRSI;
extern emlrtRSInfo acb_emlrtRSI;
extern emlrtRSInfo bcb_emlrtRSI;
extern emlrtRSInfo ccb_emlrtRSI;
extern emlrtRSInfo fcb_emlrtRSI;
extern emlrtRSInfo gcb_emlrtRSI;
extern emlrtRSInfo hcb_emlrtRSI;
extern emlrtRSInfo kcb_emlrtRSI;
extern emlrtRSInfo lcb_emlrtRSI;
extern emlrtRSInfo mcb_emlrtRSI;
extern emlrtRSInfo ncb_emlrtRSI;
extern emlrtRSInfo ocb_emlrtRSI;
extern emlrtRSInfo pcb_emlrtRSI;
extern emlrtRSInfo qcb_emlrtRSI;
extern emlrtRSInfo rcb_emlrtRSI;
extern emlrtRSInfo scb_emlrtRSI;
extern emlrtRSInfo tcb_emlrtRSI;
extern emlrtRSInfo ucb_emlrtRSI;
extern emlrtRSInfo wcb_emlrtRSI;
extern emlrtRSInfo xcb_emlrtRSI;
extern emlrtRSInfo ycb_emlrtRSI;
extern emlrtRSInfo adb_emlrtRSI;
extern emlrtRSInfo bdb_emlrtRSI;
extern emlrtRSInfo edb_emlrtRSI;
extern emlrtRSInfo fdb_emlrtRSI;
extern emlrtRSInfo gdb_emlrtRSI;
extern emlrtRSInfo jdb_emlrtRSI;
extern emlrtRSInfo kdb_emlrtRSI;
extern emlrtRSInfo ldb_emlrtRSI;
extern emlrtRSInfo odb_emlrtRSI;
extern emlrtRSInfo pdb_emlrtRSI;
extern emlrtRSInfo qdb_emlrtRSI;
extern emlrtRSInfo rdb_emlrtRSI;
extern emlrtRSInfo sdb_emlrtRSI;
extern emlrtRSInfo tdb_emlrtRSI;
extern emlrtRSInfo udb_emlrtRSI;
extern emlrtRSInfo vdb_emlrtRSI;
extern emlrtRSInfo wdb_emlrtRSI;
extern emlrtRSInfo ydb_emlrtRSI;
extern emlrtRSInfo aeb_emlrtRSI;
extern emlrtRSInfo beb_emlrtRSI;
extern emlrtRSInfo eeb_emlrtRSI;
extern emlrtRSInfo feb_emlrtRSI;
extern emlrtRSInfo geb_emlrtRSI;
extern emlrtRSInfo jeb_emlrtRSI;
extern emlrtRSInfo keb_emlrtRSI;
extern emlrtRSInfo leb_emlrtRSI;
extern emlrtRSInfo meb_emlrtRSI;
extern emlrtRSInfo neb_emlrtRSI;
extern emlrtRSInfo oeb_emlrtRSI;
extern emlrtRSInfo peb_emlrtRSI;
extern emlrtRSInfo qeb_emlrtRSI;
extern emlrtRSInfo reb_emlrtRSI;
extern emlrtRSInfo teb_emlrtRSI;
extern emlrtRSInfo ueb_emlrtRSI;
extern emlrtRSInfo veb_emlrtRSI;
extern emlrtRSInfo web_emlrtRSI;
extern emlrtRSInfo xeb_emlrtRSI;
extern emlrtRSInfo bfb_emlrtRSI;
extern emlrtRSInfo cfb_emlrtRSI;
extern emlrtRSInfo dfb_emlrtRSI;
extern emlrtRSInfo efb_emlrtRSI;
extern emlrtRSInfo ffb_emlrtRSI;
extern emlrtRSInfo nfb_emlrtRSI;
extern emlrtRSInfo ofb_emlrtRSI;
extern emlrtRSInfo pfb_emlrtRSI;
extern emlrtRSInfo qfb_emlrtRSI;
extern emlrtRSInfo rfb_emlrtRSI;
extern emlrtRSInfo egb_emlrtRSI;
extern emlrtRSInfo fgb_emlrtRSI;
extern emlrtRSInfo ggb_emlrtRSI;
extern emlrtRSInfo ogb_emlrtRSI;
extern emlrtRSInfo pgb_emlrtRSI;
extern emlrtRSInfo tgb_emlrtRSI;
extern emlrtRSInfo ugb_emlrtRSI;
extern const real_T dv0[6];

#endif

/* End of code generation (EOM_data.h) */
