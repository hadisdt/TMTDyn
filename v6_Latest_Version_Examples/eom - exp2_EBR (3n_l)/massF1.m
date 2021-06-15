function [out1,out2,out3,out4] = massF1(in1,in2,s,ds,t_sym)
%MASSF1
%    [OUT1,OUT2,OUT3,OUT4] = MASSF1(IN1,IN2,S,DS,T_SYM)

%    This function was generated by the Symbolic Math Toolbox version 8.6.
%    14-Jun-2021 23:13:49

g_x_ = in1(:,13);
g_y_ = in1(:,14);
g_z_ = in1(:,15);
gamma_ = in1(:,21);
l_s_ = in1(:,5);
lambda_ = in1(:,34);
q4 = in2(4,:);
q5 = in2(5,:);
q6 = in2(6,:);
r_p1_ = in1(:,19);
r_s1_ = in1(:,3);
r_s2_ = in1(:,4);
sigma_s_ = in1(:,1);
u4 = in2(22,:);
u5 = in2(23,:);
u6 = in2(24,:);
t2 = cos(gamma_);
t3 = sin(gamma_);
t4 = l_s_.^2;
t5 = lambda_.^2;
t6 = r_p1_.^2;
t7 = r_s1_.^2;
t8 = r_s2_.^2;
t10 = 1.0./lambda_;
t15 = l_s_./6.0;
t16 = q4./2.0;
t17 = q5./2.0;
t18 = q6./2.0;
t19 = u4./2.0;
t20 = u5./2.0;
t21 = u6./2.0;
t24 = (l_s_.*q4)./1.2e+1;
t25 = (l_s_.*q5)./1.2e+1;
t26 = (l_s_.*q6)./1.2e+1;
t27 = (l_s_.*u4)./1.2e+1;
t28 = (l_s_.*u5)./1.2e+1;
t29 = (l_s_.*u6)./1.2e+1;
t9 = t2.^2;
t11 = t6.*6.0;
t12 = t7.*3.0;
t13 = t8.*3.0;
t14 = 1.0./t3.^2;
t22 = -t7;
t23 = -t8;
t33 = (t4.*t5)./1.08e+2;
t30 = t5.*t9;
t32 = t12+t13;
t34 = t7+t11+t23;
t31 = t30-1.0;
t35 = (t10.*t32)./1.2e+1;
t37 = (l_s_.*sigma_s_.*t34.*pi)./3.0;
t36 = t11.*t14.*t31;
t38 = -t37;
t40 = t33+t35;
t39 = t8+t22+t36;
t41 = (l_s_.*sigma_s_.*t39.*t40.*pi)./3.0;
out1 = reshape([t38,0.0,0.0,0.0,0.0,0.0,0.0,t38,0.0,0.0,0.0,0.0,0.0,0.0,t38,0.0,0.0,0.0,0.0,0.0,0.0,t41,0.0,0.0,0.0,0.0,0.0,0.0,t41,0.0,0.0,0.0,0.0,0.0,0.0,(l_s_.*sigma_s_.*t10.*t39.*pi.*(t7./2.0+t8./2.0))./3.0],[6,6]);
if nargout > 1
    out2 = reshape([1.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,t26,-t15,-t24,1.0,-t18,t17,t15,t26,-t25,t18,1.0,-t16,t24,t25,t26,-t17,t16,1.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0],[6,18]);
end
if nargout > 2
    out3 = reshape([0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,t29,0.0,-t27,0.0,t21,-t20,0.0,t29,-t28,-t21,0.0,t19,t27,t28,t29,t20,-t19,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0],[6,18]);
end
if nargout > 3
    out4 = [g_x_;g_y_;g_z_;0.0;0.0;0.0];
end
