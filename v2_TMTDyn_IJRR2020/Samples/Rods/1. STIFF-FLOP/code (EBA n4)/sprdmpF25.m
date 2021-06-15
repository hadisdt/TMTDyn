function [out1,out2,out3,out4,out5,out6,out7,out8] = sprdmpF25(in1,in2,s)
%SPRDMPF25
%    [OUT1,OUT2,OUT3,OUT4,OUT5,OUT6,OUT7,OUT8] = SPRDMPF25(IN1,IN2,S)

%    This function was generated by the Symbolic Math Toolbox version 8.0.
%    30-Jan-2019 18:04:05

E_s_sym = in1(:,2);
gamma_sym = in1(:,21);
l_s_sym = in1(:,5);
lambda_sym = in1(:,34);
mu_x_sym = in1(:,6);
mu_y_sym = in1(:,7);
mu_z_sym = in1(:,8);
mu_xx_sym = in1(:,9);
mu_yy_sym = in1(:,10);
mu_zz_sym = in1(:,11);
mu_pow_sym = in1(:,12);
p1_sym = in1(:,22);
p2_sym = in1(:,23);
p3_sym = in1(:,24);
p4_sym = in1(:,25);
p5_sym = in1(:,26);
p6_sym = in1(:,27);
q1 = in2(:,1);
q2 = in2(:,2);
q3 = in2(:,3);
q4 = in2(:,4);
q5 = in2(:,5);
q6 = in2(:,6);
r_o_sym = in1(:,20);
r_p1_sym = in1(:,19);
r_s1_sym = in1(:,3);
r_s2_sym = in1(:,4);
u1 = in2(:,25);
u2 = in2(:,26);
u3 = in2(:,27);
u4 = in2(:,28);
u5 = in2(:,29);
u6 = in2(:,30);
out1 = reshape([1.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,2.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,2.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,2.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0],[24,6]);
if nargout > 1
    t2 = 1.0./lambda_sym;
    t3 = cos(gamma_sym);
    t4 = 1.0./l_s_sym;
    t5 = r_s1_sym.^2;
    t6 = r_s2_sym.^2;
    t7 = t5-t6;
    t8 = t2.*t7;
    t9 = r_p1_sym.^2;
    t10 = sin(gamma_sym);
    t11 = 1.0./t10.^2;
    t12 = lambda_sym.^2;
    t13 = t3.^2;
    t14 = t12.*t13;
    t15 = t14-1.0;
    t17 = t9.*t11.*t15.*6.0;
    t16 = t8-t17;
    t18 = 1.0./lambda_sym.^2;
    t19 = t5.^2;
    t20 = t6.^2;
    t21 = t19-t20;
    t22 = t18.*t21;
    t23 = t9.^2;
    t24 = 1.0./t10.^4;
    t25 = t15.^2;
    t26 = t23.*t24.*t25.*6.0;
    t27 = t22+t26;
    t28 = t27.*pi.*(1.0./4.0);
    t29 = r_o_sym.^2;
    t30 = mu_pow_sym-1.0;
    t31 = 1.0./sqrt(lambda_sym);
    t32 = sqrt(7.0e1);
    t33 = l_s_sym.^2;
    t34 = t33.*(1.0./1.6e1);
    t35 = sqrt(t34);
    t36 = t28-t2.*t9.*t11.*t15.*t29.*pi.*3.0;
    t37 = t28-t2.*t9.*t11.*t15.*t29.*pi.*3.0;
    out2 = [E_s_sym.*q1.*t2.*t4.*t16.*pi.*(4.0./3.0);E_s_sym.*q2.*t2.*t4.*t16.*pi.*(4.0./3.0);E_s_sym.*t2.*t4.*t16.*pi.*(q3-t35).*4.0;E_s_sym.*q4.*t2.*t4.*t36.*8.0;E_s_sym.*q5.*t2.*t4.*t37.*8.0;E_s_sym.*q6.*t2.*t4.*t27.*pi.*(4.0./3.0)];
end
if nargout > 2
    t38 = abs(u1);
    t39 = t38.^t30;
    t40 = abs(u2);
    t41 = t40.^t30;
    t42 = abs(u3);
    t43 = t42.^t30;
    t44 = abs(u4);
    t45 = t44.*2.0;
    t46 = t45.^t30;
    t47 = abs(u5);
    t48 = t47.*2.0;
    t49 = t48.^t30;
    t50 = abs(u6);
    t51 = t50.*2.0;
    t52 = t51.^t30;
    out3 = [-mu_x_sym.*t39.*u1;-mu_y_sym.*t41.*u2;-mu_z_sym.*t43.*u3;mu_xx_sym.*t46.*u4.*-2.0;mu_yy_sym.*t49.*u5.*-2.0;mu_zz_sym.*t52.*u6.*-2.0];
end
if nargout > 3
    out4 = [0.0;0.0;-t9.*t11.*t15.*pi.*(p1_sym+p2_sym+p3_sym+p4_sym+p5_sym+p6_sym);p1_sym.*r_o_sym.*t9.*t11.*t15.*t31.*pi.*(-2.71e2./2.89e2)-p2_sym.*r_o_sym.*t9.*t11.*t15.*t31.*pi.*(2.71e2./2.89e2)+p3_sym.*r_o_sym.*t9.*t11.*t15.*t31.*pi.*1.67999098695029e-1+p4_sym.*r_o_sym.*t9.*t11.*t15.*t31.*pi.*7.697171642807495e-1+p5_sym.*r_o_sym.*t9.*t11.*t15.*t31.*pi.*7.697171642807493e-1+p6_sym.*r_o_sym.*t9.*t11.*t15.*t31.*pi.*1.679990986950289e-1;p3_sym.*r_o_sym.*t9.*t11.*t15.*t31.*pi.*9.857871488499218e-1+p4_sym.*r_o_sym.*t9.*t11.*t15.*t31.*pi.*6.383850617077452e-1-p5_sym.*r_o_sym.*t9.*t11.*t15.*t31.*pi.*6.383850617077454e-1-p6_sym.*r_o_sym.*t9.*t11.*t15.*t31.*pi.*9.857871488499218e-1-p1_sym.*r_o_sym.*t9.*t11.*t15.*t31.*t32.*pi.*(1.2e1./2.89e2)+p2_sym.*r_o_sym.*t9.*t11.*t15.*t31.*t32.*pi.*(1.2e1./2.89e2);0.0];
end
if nargout > 4
    out5 = -t35+sqrt(q1.^2+q2.^2+q3.^2);
end
if nargout > 5
    out6 = reshape([E_s_sym.*t2.*t4.*t16.*pi.*(-4.0./3.0),0.0,0.0,0.0,0.0,0.0,0.0,E_s_sym.*t2.*t4.*t16.*pi.*(-4.0./3.0),0.0,0.0,0.0,0.0,0.0,0.0,E_s_sym.*t2.*t4.*t16.*pi.*-4.0,0.0,0.0,0.0,0.0,0.0,0.0,E_s_sym.*t2.*t4.*t36.*-8.0,0.0,0.0,0.0,0.0,0.0,0.0,E_s_sym.*t2.*t4.*t37.*-8.0,0.0,0.0,0.0,0.0,0.0,0.0,E_s_sym.*t2.*t4.*t27.*pi.*(-4.0./3.0),0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0],[6,24]);
end
if nargout > 6
    out7 = reshape([-mu_x_sym.*t39,0.0,0.0,0.0,0.0,0.0,0.0,-mu_y_sym.*t41,0.0,0.0,0.0,0.0,0.0,0.0,-mu_z_sym.*t43,0.0,0.0,0.0,0.0,0.0,0.0,mu_xx_sym.*t46.*-2.0,0.0,0.0,0.0,0.0,0.0,0.0,mu_yy_sym.*t49.*-2.0,0.0,0.0,0.0,0.0,0.0,0.0,mu_zz_sym.*t52.*-2.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0],[6,24]);
end
if nargout > 7
    out8 = 1.0;
end
