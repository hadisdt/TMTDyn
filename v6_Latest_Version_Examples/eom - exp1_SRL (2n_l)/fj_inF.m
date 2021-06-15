function out1 = fj_inF(in1,in2,s,ds,t_sym)
%FJ_INF
%    OUT1 = FJ_INF(IN1,IN2,S,DS,T_SYM)

%    This function was generated by the Symbolic Math Toolbox version 8.6.
%    15-Jun-2021 01:21:26

gamma_ = in1(:,21);
lambda_ = in1(:,34);
p1_ = in1(:,22);
p2_ = in1(:,23);
p3_ = in1(:,24);
p4_ = in1(:,25);
p5_ = in1(:,26);
p6_ = in1(:,27);
r_o_ = in1(:,20);
r_p1_ = in1(:,19);
t2 = cos(gamma_);
t3 = sin(gamma_);
t4 = lambda_.^2;
t5 = r_p1_.^2;
t8 = 1.0./sqrt(lambda_);
t9 = sqrt(7.0e+1);
t10 = p1_+p2_+p3_+p4_+p5_+p6_;
t6 = t2.^2;
t7 = 1.0./t3.^2;
t11 = t4.*t6;
t12 = t11-1.0;
t13 = t5.*t7.*t10.*t12.*pi;
t15 = p1_.*r_o_.*t5.*t7.*t8.*t12.*pi.*(2.71e+2./2.89e+2);
t16 = p2_.*r_o_.*t5.*t7.*t8.*t12.*pi.*(2.71e+2./2.89e+2);
t19 = p1_.*r_o_.*t5.*t7.*t8.*t9.*t12.*pi.*(1.2e+1./2.89e+2);
t20 = p2_.*r_o_.*t5.*t7.*t8.*t9.*t12.*pi.*(1.2e+1./2.89e+2);
t22 = p5_.*r_o_.*t5.*t7.*t8.*t12.*pi.*7.697171642807493e-1;
t23 = p4_.*r_o_.*t5.*t7.*t8.*t12.*pi.*7.697171642807495e-1;
t24 = p3_.*r_o_.*t5.*t7.*t8.*t12.*pi.*9.857871488499218e-1;
t25 = p6_.*r_o_.*t5.*t7.*t8.*t12.*pi.*9.857871488499218e-1;
t26 = p4_.*r_o_.*t5.*t7.*t8.*t12.*pi.*6.383850617077452e-1;
t27 = p5_.*r_o_.*t5.*t7.*t8.*t12.*pi.*6.383850617077454e-1;
t28 = p6_.*r_o_.*t5.*t7.*t8.*t12.*pi.*1.679990986950289e-1;
t29 = p3_.*r_o_.*t5.*t7.*t8.*t12.*pi.*1.67999098695029e-1;
t14 = -t13;
t17 = -t15;
t18 = -t16;
t21 = -t19;
t30 = -t25;
t31 = -t27;
t32 = t17+t18+t22+t23+t28+t29;
t33 = t20+t21+t24+t26+t30+t31;
out1 = [0.0;0.0;t14;0.0;t32;t33;0.0;0.0;t14;0.0;t32;t33;0.0;0.0;t14;0.0;t32;t33];
