function [out1,out2,out3,out4] = massF1(in1,in2,s,ds,t_sym)
%MASSF1
%    [OUT1,OUT2,OUT3,OUT4] = MASSF1(IN1,IN2,S,DS,T_SYM)

%    This function was generated by the Symbolic Math Toolbox version 8.6.
%    15-Jun-2021 01:39:21

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
t6 = q4.*2.0;
t7 = q5.*2.0;
t8 = q6.*2.0;
t9 = q4.^2;
t10 = q5.^2;
t11 = q6.^2;
t12 = r_p1_.^2;
t13 = r_s1_.^2;
t14 = r_s2_.^2;
t16 = 1.0./lambda_;
t15 = t2.^2;
t17 = t12.*6.0;
t18 = t13.*3.0;
t19 = t14.*3.0;
t20 = 1.0./t3.^2;
t21 = -t9;
t22 = -t10;
t23 = -t11;
t24 = -t13;
t25 = -t14;
t29 = (t4.*t5)./1.08e+2;
t26 = t5.*t15;
t28 = t18+t19;
t30 = t13+t17+t25;
t32 = t21+t22+t23+1.0;
t27 = t26-1.0;
t31 = (t16.*t28)./1.2e+1;
t34 = (l_s_.*sigma_s_.*t30.*pi)./3.0;
t36 = sqrt(t32);
t33 = t17.*t20.*t27;
t35 = -t34;
t37 = 1.0./t36;
t39 = t36.*2.0;
t55 = t29+t31;
t38 = t37.^3;
t40 = t6.*t37;
t41 = t7.*t37;
t42 = t8.*t37;
t47 = t14+t24+t33;
t43 = q5.*t40;
t44 = q6.*t40;
t45 = q6.*t41;
t46 = q5.*q6.*t6.*t38;
t48 = t6.*t10.*t38;
t49 = q4.*q5.*t6.*t38;
t50 = t6.*t11.*t38;
t51 = q4.*q6.*t6.*t38;
t52 = t7.*t11.*t38;
t53 = q5.*q6.*t7.*t38;
t63 = (l_s_.*sigma_s_.*t47.*t55.*pi)./3.0;
out1 = reshape([t35,0.0,0.0,0.0,0.0,0.0,0.0,t35,0.0,0.0,0.0,0.0,0.0,0.0,t35,0.0,0.0,0.0,0.0,0.0,0.0,t63,0.0,0.0,0.0,0.0,0.0,0.0,t63,0.0,0.0,0.0,0.0,0.0,0.0,(l_s_.*sigma_s_.*t16.*t47.*pi.*(t13./2.0+t14./2.0))./3.0],[6,6]);
if nargout > 1
    out2 = reshape([1.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,0.0,0.0,t39+q4.*t40,-t8+t43,t7+t44,0.0,0.0,0.0,t8+t43,t39+q5.*t41,-t6+t45,0.0,0.0,0.0,-t7+t44,t6+t45,t39+q6.*t42,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0],[6,18]);
end
if nargout > 2
    t54 = t46+2.0;
    t56 = t46-2.0;
    t57 = t40+t48;
    t58 = t40+t50;
    t59 = t41+t49;
    t60 = t41+t52;
    t61 = t42+t51;
    t62 = t42+t53;
    out3 = reshape([0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,t59.*u5+t61.*u6+u4.*(t40+t6.*t9.*t38),t54.*u6+t59.*u4-u5.*(t40-q4.*t10.*t38.*2.0),t56.*u5+t61.*u4-u6.*(t40-q4.*t11.*t38.*2.0),0.0,0.0,0.0,t56.*u6+t57.*u5-u4.*(t41-q5.*t9.*t38.*2.0),t57.*u4+t62.*u6+u5.*(t41+t7.*t10.*t38),t54.*u4+t62.*u5-u6.*(t41-q5.*t11.*t38.*2.0),0.0,0.0,0.0,t54.*u5+t58.*u6-u4.*(t42-q6.*t9.*t38.*2.0),t56.*u4+t60.*u6-u5.*(t42-q6.*t10.*t38.*2.0),t58.*u4+t60.*u5+u6.*(t42+t8.*t11.*t38),0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0],[6,18]);
end
if nargout > 3
    out4 = [g_x_;g_y_;g_z_;0.0;0.0;0.0];
end
