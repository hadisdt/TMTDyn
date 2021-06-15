function [out1,out2,out3,out4] = massF3(in1,in2,s,ds,t_sym)
%MASSF3
%    [OUT1,OUT2,OUT3,OUT4] = MASSF3(IN1,IN2,S,DS,T_SYM)

%    This function was generated by the Symbolic Math Toolbox version 8.6.
%    15-Jun-2021 01:39:21

g_x_ = in1(:,13);
g_y_ = in1(:,14);
g_z_ = in1(:,15);
gamma_ = in1(:,21);
l_s_ = in1(:,5);
lambda_ = in1(:,34);
q16 = in2(16,:);
q17 = in2(17,:);
q18 = in2(18,:);
r_p1_ = in1(:,19);
r_s1_ = in1(:,3);
r_s2_ = in1(:,4);
sigma_s_ = in1(:,1);
u16 = in2(34,:);
u17 = in2(35,:);
u18 = in2(36,:);
t2 = cos(gamma_);
t3 = sin(gamma_);
t4 = l_s_.^2;
t5 = lambda_.^2;
t6 = q16.*2.0;
t7 = q17.*2.0;
t8 = q18.*2.0;
t9 = q16.^2;
t10 = q17.^2;
t11 = q18.^2;
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
t43 = q17.*t40;
t44 = q18.*t40;
t45 = q18.*t41;
t46 = q17.*q18.*t6.*t38;
t48 = t6.*t10.*t38;
t49 = q16.*q17.*t6.*t38;
t50 = t6.*t11.*t38;
t51 = q16.*q18.*t6.*t38;
t52 = t7.*t11.*t38;
t53 = q17.*q18.*t7.*t38;
t63 = (l_s_.*sigma_s_.*t47.*t55.*pi)./3.0;
out1 = reshape([t35,0.0,0.0,0.0,0.0,0.0,0.0,t35,0.0,0.0,0.0,0.0,0.0,0.0,t35,0.0,0.0,0.0,0.0,0.0,0.0,t63,0.0,0.0,0.0,0.0,0.0,0.0,t63,0.0,0.0,0.0,0.0,0.0,0.0,(l_s_.*sigma_s_.*t16.*t47.*pi.*(t13./2.0+t14./2.0))./3.0],[6,6]);
if nargout > 1
    out2 = reshape([0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,0.0,0.0,t39+q16.*t40,-t8+t43,t7+t44,0.0,0.0,0.0,t8+t43,t39+q17.*t41,-t6+t45,0.0,0.0,0.0,-t7+t44,t6+t45,t39+q18.*t42],[6,18]);
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
    out3 = reshape([0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,t59.*u17+t61.*u18+u16.*(t40+t6.*t9.*t38),t54.*u18+t59.*u16-u17.*(t40-q16.*t10.*t38.*2.0),t56.*u17+t61.*u16-u18.*(t40-q16.*t11.*t38.*2.0),0.0,0.0,0.0,t56.*u18+t57.*u17-u16.*(t41-q17.*t9.*t38.*2.0),t57.*u16+t62.*u18+u17.*(t41+t7.*t10.*t38),t54.*u16+t62.*u17-u18.*(t41-q17.*t11.*t38.*2.0),0.0,0.0,0.0,t54.*u17+t58.*u18-u16.*(t42-q18.*t9.*t38.*2.0),t56.*u16+t60.*u18-u17.*(t42-q18.*t10.*t38.*2.0),t58.*u16+t60.*u17+u18.*(t42+t8.*t11.*t38)],[6,18]);
end
if nargout > 3
    out4 = [g_x_;g_y_;g_z_;0.0;0.0;0.0];
end
