function [out1,out2,out3,out4] = massF13(in1,in2,s)
%MASSF13
%    [OUT1,OUT2,OUT3,OUT4] = MASSF13(IN1,IN2,S)

%    This function was generated by the Symbolic Math Toolbox version 8.2.
%    06-Jul-2019 05:28:39

q81 = in2(:,81);
q82 = in2(:,82);
q83 = in2(:,83);
q84 = in2(:,84);
u81 = in2(:,193);
u82 = in2(:,194);
u83 = in2(:,195);
u84 = in2(:,196);
out1 = reshape([2.4e-3,0.0,0.0,0.0,0.0,0.0,0.0,2.4e-3,0.0,0.0,0.0,0.0,0.0,0.0,2.4e-3,0.0,0.0,0.0,0.0,0.0,0.0,4.275999999999999e-8,0.0,0.0,0.0,0.0,0.0,0.0,8.526399999999998e-8,0.0,0.0,0.0,0.0,0.0,0.0,4.275999999999999e-8],[6,6]);
if nargout > 1
    t2 = q81.^2;
    t3 = q82.^2;
    t4 = q83.^2;
    t5 = q84.^2;
    t6 = t2+t3+t4+t5;
    t7 = 1.0./sqrt(t6);
    t8 = 1.0./t6.^(3.0./2.0);
    t9 = 1.0./t6.^2;
    t14 = t2.*t8;
    t10 = t7-t14;
    t15 = t3.*t8;
    t11 = t7-t15;
    t16 = t4.*t8;
    t12 = t7-t16;
    t17 = t5.*t8;
    t13 = t7-t17;
    out2 = reshape([0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,0.0,0.0,q82.*t2.*t9.*-2.0-q82.*t7.*t10.*2.0,q83.*t2.*t9.*-2.0-q83.*t7.*t10.*2.0,q84.*t2.*t9.*-2.0-q84.*t7.*t10.*2.0,0.0,0.0,0.0,q81.*t3.*t9.*2.0+q81.*t7.*t11.*2.0,q84.*t3.*t9.*-2.0-q84.*t7.*t11.*2.0,q83.*t3.*t9.*2.0+q83.*t7.*t11.*2.0,0.0,0.0,0.0,q84.*t4.*t9.*2.0+q84.*t7.*t12.*2.0,q81.*t4.*t9.*2.0+q81.*t7.*t12.*2.0,q82.*t4.*t9.*-2.0-q82.*t7.*t12.*2.0,0.0,0.0,0.0,q83.*t5.*t9.*-2.0-q83.*t7.*t13.*2.0,q82.*t5.*t9.*2.0+q82.*t7.*t13.*2.0,q81.*t5.*t9.*2.0+q81.*t7.*t13.*2.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0],[6,106]);
end
if nargout > 2
    t18 = 1.0./t6.^3;
    t19 = 1.0./t6.^(5.0./2.0);
    t20 = q81.*t8;
    t21 = t2.*t3.*t18.*8.0;
    t22 = q82.*t8;
    t23 = q83.*t8;
    t24 = t4.*t5.*t18.*8.0;
    t25 = q84.*t8;
    t26 = q81.*t8.*3.0;
    t56 = q81.*t2.*t19.*3.0;
    t27 = t26-t56;
    t61 = q81.*t4.*t19.*3.0;
    t28 = t20-t61;
    t58 = q81.*t3.*t19.*3.0;
    t29 = t20-t58;
    t30 = q81.*q84.*t3.*t18.*8.0;
    t31 = q81.*q84.*t8.*t11.*2.0;
    t57 = q81.*t5.*t19.*3.0;
    t32 = t20-t57;
    t33 = q82.*t8.*3.0;
    t64 = q82.*t3.*t19.*3.0;
    t34 = t33-t64;
    t69 = q82.*t5.*t19.*3.0;
    t35 = t22-t69;
    t66 = q82.*t2.*t19.*3.0;
    t36 = t22-t66;
    t37 = q82.*q83.*t2.*t18.*8.0;
    t38 = q82.*q83.*t8.*t10.*2.0;
    t65 = q82.*t4.*t19.*3.0;
    t39 = t22-t65;
    t40 = q83.*t8.*3.0;
    t72 = q83.*t4.*t19.*3.0;
    t41 = t40-t72;
    t42 = t2.*t4.*t18.*8.0;
    t75 = q83.*t2.*t19.*3.0;
    t43 = t23-t75;
    t74 = q83.*t3.*t19.*3.0;
    t44 = t23-t74;
    t78 = q83.*t5.*t19.*3.0;
    t45 = t23-t78;
    t46 = q82.*q83.*t5.*t18.*8.0;
    t47 = q82.*q83.*t8.*t13.*2.0;
    t48 = q84.*t8.*3.0;
    t81 = q84.*t5.*t19.*3.0;
    t49 = t48-t81;
    t50 = t3.*t5.*t18.*8.0;
    t84 = q84.*t3.*t19.*3.0;
    t51 = t25-t84;
    t83 = q84.*t2.*t19.*3.0;
    t52 = t25-t83;
    t87 = q84.*t4.*t19.*3.0;
    t53 = t25-t87;
    t54 = q81.*q84.*t4.*t18.*8.0;
    t55 = q81.*q84.*t8.*t12.*2.0;
    t59 = q81.*q83.*t3.*t18.*8.0;
    t60 = q81.*q83.*t8.*t11.*2.0;
    t62 = q81.*q82.*t4.*t18.*8.0;
    t63 = q81.*q82.*t8.*t12.*2.0;
    t67 = q82.*q84.*t2.*t18.*8.0;
    t68 = q82.*q84.*t8.*t10.*2.0;
    t70 = q81.*q82.*t5.*t18.*8.0;
    t71 = q81.*q82.*t8.*t13.*2.0;
    t73 = t3.*t4.*t18.*8.0;
    t76 = q83.*q84.*t2.*t18.*8.0;
    t77 = q83.*q84.*t8.*t10.*2.0;
    t79 = q81.*q83.*t5.*t18.*8.0;
    t80 = q81.*q83.*t8.*t13.*2.0;
    t82 = t2.*t5.*t18.*8.0;
    t85 = q83.*q84.*t3.*t18.*8.0;
    t86 = q83.*q84.*t8.*t11.*2.0;
    t88 = q82.*q84.*t4.*t18.*8.0;
    t89 = q82.*q84.*t8.*t12.*2.0;
    out3 = reshape([0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,-u82.*(t21-t3.*t9.*2.0-t7.*t11.*2.0+q81.*t7.*t29.*2.0+t2.*t8.*t11.*2.0)-u83.*(t54+t55+q84.*t7.*t28.*2.0)+u84.*(t79+t80+q83.*t7.*t32.*2.0)+u81.*(q81.*q82.*t9.*-4.0+q82.*t7.*t27.*2.0+q81.*q82.*t8.*t10.*2.0+q81.*q82.*t2.*t18.*8.0),-u83.*(t42-t4.*t9.*2.0-t7.*t12.*2.0+q81.*t7.*t28.*2.0+t2.*t8.*t12.*2.0)+u82.*(t30+t31+q84.*t7.*t29.*2.0)-u84.*(t70+t71+q82.*t7.*t32.*2.0)+u81.*(q81.*q83.*t9.*-4.0+q83.*t7.*t27.*2.0+q81.*q83.*t8.*t10.*2.0+q81.*q83.*t2.*t18.*8.0),-u84.*(t82-t5.*t9.*2.0-t7.*t13.*2.0+q81.*t7.*t32.*2.0+t2.*t8.*t13.*2.0)-u82.*(t59+t60+q83.*t7.*t29.*2.0)+u83.*(t62+t63+q82.*t7.*t28.*2.0)+u81.*(q81.*q84.*t9.*-4.0+q84.*t7.*t27.*2.0+q81.*q84.*t8.*t10.*2.0+q81.*q84.*t2.*t18.*8.0),0.0,0.0,0.0,u81.*(t21-t2.*t9.*2.0-t7.*t10.*2.0+q82.*t7.*t36.*2.0+t3.*t8.*t10.*2.0)+u84.*(t46+t47+q83.*t7.*t35.*2.0)-u83.*(t88+t89+q84.*t7.*t39.*2.0)-u82.*(q81.*q82.*t9.*-4.0+q81.*t7.*t34.*2.0+q81.*q82.*t8.*t11.*2.0+q81.*q82.*t3.*t18.*8.0),-u84.*(t50-t5.*t9.*2.0-t7.*t13.*2.0+q82.*t7.*t35.*2.0+t3.*t8.*t13.*2.0)+u81.*(t37+t38+q83.*t7.*t36.*2.0)-u83.*(t62+t63+q81.*t7.*t39.*2.0)+u82.*(q82.*q84.*t9.*-4.0+q84.*t7.*t34.*2.0+q82.*q84.*t8.*t11.*2.0+q82.*q84.*t3.*t18.*8.0),u83.*(t73-t4.*t9.*2.0-t7.*t12.*2.0+q82.*t7.*t39.*2.0+t3.*t8.*t12.*2.0)+u81.*(t67+t68+q84.*t7.*t36.*2.0)-u84.*(t70+t71+q81.*t7.*t35.*2.0)-u82.*(q82.*q83.*t9.*-4.0+q83.*t7.*t34.*2.0+q82.*q83.*t8.*t11.*2.0+q82.*q83.*t3.*t18.*8.0),0.0,0.0,0.0,u84.*(t24-t5.*t9.*2.0-t7.*t13.*2.0+q83.*t7.*t45.*2.0+t4.*t8.*t13.*2.0)+u81.*(t37+t38+q82.*t7.*t43.*2.0)-u82.*(t59+t60+q81.*t7.*t44.*2.0)-u83.*(q83.*q84.*t9.*-4.0+q84.*t7.*t41.*2.0+q83.*q84.*t8.*t12.*2.0+q83.*q84.*t4.*t18.*8.0),u81.*(t42-t2.*t9.*2.0-t7.*t10.*2.0+q83.*t7.*t43.*2.0+t4.*t8.*t10.*2.0)-u84.*(t46+t47+q82.*t7.*t45.*2.0)+u82.*(t85+t86+q84.*t7.*t44.*2.0)-u83.*(q81.*q83.*t9.*-4.0+q81.*t7.*t41.*2.0+q81.*q83.*t8.*t12.*2.0+q81.*q83.*t4.*t18.*8.0),-u82.*(t73-t3.*t9.*2.0-t7.*t11.*2.0+q83.*t7.*t44.*2.0+t4.*t8.*t11.*2.0)+u81.*(t76+t77+q84.*t7.*t43.*2.0)-u84.*(t79+t80+q81.*t7.*t45.*2.0)+u83.*(q82.*q83.*t9.*-4.0+q82.*t7.*t41.*2.0+q82.*q83.*t8.*t12.*2.0+q82.*q83.*t4.*t18.*8.0),0.0,0.0,0.0,-u83.*(t24-t4.*t9.*2.0-t7.*t12.*2.0+q84.*t7.*t53.*2.0+t5.*t8.*t12.*2.0)-u82.*(t30+t31+q81.*t7.*t51.*2.0)+u81.*(t67+t68+q82.*t7.*t52.*2.0)+u84.*(q83.*q84.*t9.*-4.0+q83.*t7.*t49.*2.0+q83.*q84.*t8.*t13.*2.0+q83.*q84.*t5.*t18.*8.0),u82.*(t50-t3.*t9.*2.0-t7.*t11.*2.0+q84.*t7.*t51.*2.0+t5.*t8.*t11.*2.0)-u83.*(t54+t55+q81.*t7.*t53.*2.0)+u81.*(t76+t77+q83.*t7.*t52.*2.0)-u84.*(q82.*q84.*t9.*-4.0+q82.*t7.*t49.*2.0+q82.*q84.*t8.*t13.*2.0+q82.*q84.*t5.*t18.*8.0),u81.*(t82-t2.*t9.*2.0-t7.*t10.*2.0+q84.*t7.*t52.*2.0+t5.*t8.*t10.*2.0)-u82.*(t85+t86+q83.*t7.*t51.*2.0)+u83.*(t88+t89+q82.*t7.*t53.*2.0)-u84.*(q81.*q84.*t9.*-4.0+q81.*t7.*t49.*2.0+q81.*q84.*t8.*t13.*2.0+q81.*q84.*t5.*t18.*8.0),0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0],[6,106]);
end
if nargout > 3
    out4 = [0.0;0.0;-9.81e2./1.0e2;0.0;0.0;0.0];
end
