function fj_vd_mat = fj_vd_matF(in1,in2,s)
%FJ_VD_MATF
%    FJ_VD_MAT = FJ_VD_MATF(IN1,IN2,S)

%    This function was generated by the Symbolic Math Toolbox version 8.0.
%    16-Jan-2019 13:23:09

mu_x_sym = in1(:,6);
mu_y_sym = in1(:,7);
mu_z_sym = in1(:,8);
mu_xx_sym = in1(:,9);
mu_yy_sym = in1(:,10);
mu_zz_sym = in1(:,11);
mu_pow_sym = in1(:,12);
u1 = in2(:,13);
u2 = in2(:,14);
u3 = in2(:,15);
u4 = in2(:,16);
u5 = in2(:,17);
u6 = in2(:,18);
u7 = in2(:,19);
u8 = in2(:,20);
u9 = in2(:,21);
u10 = in2(:,22);
u11 = in2(:,23);
u12 = in2(:,24);
t2 = mu_pow_sym-1.0;
fj_vd_mat = reshape([-mu_x_sym.*u1.^t2,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,-mu_y_sym.*u2.^t2,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,-mu_z_sym.*u3.^t2,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,-mu_zz_sym.*u4.^t2,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,-mu_xx_sym.*u5.^t2,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,-mu_yy_sym.*u6.^t2,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,-mu_x_sym.*u7.^t2,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,-mu_y_sym.*u8.^t2,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,-mu_z_sym.*u9.^t2,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,-mu_zz_sym.*u10.^t2,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,-mu_xx_sym.*u11.^t2,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,-mu_yy_sym.*u12.^t2],[12,12]);
