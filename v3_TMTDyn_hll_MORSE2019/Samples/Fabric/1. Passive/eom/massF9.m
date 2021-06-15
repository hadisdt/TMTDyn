function [out1,out2,out3,out4] = massF9(in1,in2,s)
%MASSF9
%    [OUT1,OUT2,OUT3,OUT4] = MASSF9(IN1,IN2,S)

%    This function was generated by the Symbolic Math Toolbox version 8.2.
%    06-Jul-2019 05:28:28

q53 = in2(:,53);
q54 = in2(:,54);
q55 = in2(:,55);
q56 = in2(:,56);
u53 = in2(:,165);
u54 = in2(:,166);
u55 = in2(:,167);
u56 = in2(:,168);
out1 = reshape([2.4e-3,0.0,0.0,0.0,0.0,0.0,0.0,2.4e-3,0.0,0.0,0.0,0.0,0.0,0.0,2.4e-3,0.0,0.0,0.0,0.0,0.0,0.0,4.275999999999999e-8,0.0,0.0,0.0,0.0,0.0,0.0,8.526399999999998e-8,0.0,0.0,0.0,0.0,0.0,0.0,4.275999999999999e-8],[6,6]);
if nargout > 1
    t2 = q53.^2;
    t3 = q54.^2;
    t4 = q55.^2;
    t5 = q56.^2;
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
    out2 = reshape([0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,0.0,0.0,q54.*t2.*t9.*-2.0-q54.*t7.*t10.*2.0,q55.*t2.*t9.*-2.0-q55.*t7.*t10.*2.0,q56.*t2.*t9.*-2.0-q56.*t7.*t10.*2.0,0.0,0.0,0.0,q53.*t3.*t9.*2.0+q53.*t7.*t11.*2.0,q56.*t3.*t9.*-2.0-q56.*t7.*t11.*2.0,q55.*t3.*t9.*2.0+q55.*t7.*t11.*2.0,0.0,0.0,0.0,q56.*t4.*t9.*2.0+q56.*t7.*t12.*2.0,q53.*t4.*t9.*2.0+q53.*t7.*t12.*2.0,q54.*t4.*t9.*-2.0-q54.*t7.*t12.*2.0,0.0,0.0,0.0,q55.*t5.*t9.*-2.0-q55.*t7.*t13.*2.0,q54.*t5.*t9.*2.0+q54.*t7.*t13.*2.0,q53.*t5.*t9.*2.0+q53.*t7.*t13.*2.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0],[6,106]);
end
if nargout > 2
    t18 = 1.0./t6.^3;
    t19 = 1.0./t6.^(5.0./2.0);
    t20 = q53.*t8;
    t21 = t2.*t3.*t18.*8.0;
    t22 = q54.*t8;
    t23 = q55.*t8;
    t24 = t4.*t5.*t18.*8.0;
    t25 = q56.*t8;
    t26 = q53.*t8.*3.0;
    t56 = q53.*t2.*t19.*3.0;
    t27 = t26-t56;
    t61 = q53.*t4.*t19.*3.0;
    t28 = t20-t61;
    t58 = q53.*t3.*t19.*3.0;
    t29 = t20-t58;
    t30 = q53.*q56.*t3.*t18.*8.0;
    t31 = q53.*q56.*t8.*t11.*2.0;
    t57 = q53.*t5.*t19.*3.0;
    t32 = t20-t57;
    t33 = q54.*t8.*3.0;
    t64 = q54.*t3.*t19.*3.0;
    t34 = t33-t64;
    t69 = q54.*t5.*t19.*3.0;
    t35 = t22-t69;
    t66 = q54.*t2.*t19.*3.0;
    t36 = t22-t66;
    t37 = q54.*q55.*t2.*t18.*8.0;
    t38 = q54.*q55.*t8.*t10.*2.0;
    t65 = q54.*t4.*t19.*3.0;
    t39 = t22-t65;
    t40 = q55.*t8.*3.0;
    t72 = q55.*t4.*t19.*3.0;
    t41 = t40-t72;
    t42 = t2.*t4.*t18.*8.0;
    t75 = q55.*t2.*t19.*3.0;
    t43 = t23-t75;
    t74 = q55.*t3.*t19.*3.0;
    t44 = t23-t74;
    t78 = q55.*t5.*t19.*3.0;
    t45 = t23-t78;
    t46 = q54.*q55.*t5.*t18.*8.0;
    t47 = q54.*q55.*t8.*t13.*2.0;
    t48 = q56.*t8.*3.0;
    t81 = q56.*t5.*t19.*3.0;
    t49 = t48-t81;
    t50 = t3.*t5.*t18.*8.0;
    t84 = q56.*t3.*t19.*3.0;
    t51 = t25-t84;
    t83 = q56.*t2.*t19.*3.0;
    t52 = t25-t83;
    t87 = q56.*t4.*t19.*3.0;
    t53 = t25-t87;
    t54 = q53.*q56.*t4.*t18.*8.0;
    t55 = q53.*q56.*t8.*t12.*2.0;
    t59 = q53.*q55.*t3.*t18.*8.0;
    t60 = q53.*q55.*t8.*t11.*2.0;
    t62 = q53.*q54.*t4.*t18.*8.0;
    t63 = q53.*q54.*t8.*t12.*2.0;
    t67 = q54.*q56.*t2.*t18.*8.0;
    t68 = q54.*q56.*t8.*t10.*2.0;
    t70 = q53.*q54.*t5.*t18.*8.0;
    t71 = q53.*q54.*t8.*t13.*2.0;
    t73 = t3.*t4.*t18.*8.0;
    t76 = q55.*q56.*t2.*t18.*8.0;
    t77 = q55.*q56.*t8.*t10.*2.0;
    t79 = q53.*q55.*t5.*t18.*8.0;
    t80 = q53.*q55.*t8.*t13.*2.0;
    t82 = t2.*t5.*t18.*8.0;
    t85 = q55.*q56.*t3.*t18.*8.0;
    t86 = q55.*q56.*t8.*t11.*2.0;
    t88 = q54.*q56.*t4.*t18.*8.0;
    t89 = q54.*q56.*t8.*t12.*2.0;
    out3 = reshape([0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,-u54.*(t21-t3.*t9.*2.0-t7.*t11.*2.0+q53.*t7.*t29.*2.0+t2.*t8.*t11.*2.0)-u55.*(t54+t55+q56.*t7.*t28.*2.0)+u56.*(t79+t80+q55.*t7.*t32.*2.0)+u53.*(q53.*q54.*t9.*-4.0+q54.*t7.*t27.*2.0+q53.*q54.*t8.*t10.*2.0+q53.*q54.*t2.*t18.*8.0),-u55.*(t42-t4.*t9.*2.0-t7.*t12.*2.0+q53.*t7.*t28.*2.0+t2.*t8.*t12.*2.0)+u54.*(t30+t31+q56.*t7.*t29.*2.0)-u56.*(t70+t71+q54.*t7.*t32.*2.0)+u53.*(q53.*q55.*t9.*-4.0+q55.*t7.*t27.*2.0+q53.*q55.*t8.*t10.*2.0+q53.*q55.*t2.*t18.*8.0),-u56.*(t82-t5.*t9.*2.0-t7.*t13.*2.0+q53.*t7.*t32.*2.0+t2.*t8.*t13.*2.0)-u54.*(t59+t60+q55.*t7.*t29.*2.0)+u55.*(t62+t63+q54.*t7.*t28.*2.0)+u53.*(q53.*q56.*t9.*-4.0+q56.*t7.*t27.*2.0+q53.*q56.*t8.*t10.*2.0+q53.*q56.*t2.*t18.*8.0),0.0,0.0,0.0,u53.*(t21-t2.*t9.*2.0-t7.*t10.*2.0+q54.*t7.*t36.*2.0+t3.*t8.*t10.*2.0)+u56.*(t46+t47+q55.*t7.*t35.*2.0)-u55.*(t88+t89+q56.*t7.*t39.*2.0)-u54.*(q53.*q54.*t9.*-4.0+q53.*t7.*t34.*2.0+q53.*q54.*t8.*t11.*2.0+q53.*q54.*t3.*t18.*8.0),-u56.*(t50-t5.*t9.*2.0-t7.*t13.*2.0+q54.*t7.*t35.*2.0+t3.*t8.*t13.*2.0)+u53.*(t37+t38+q55.*t7.*t36.*2.0)-u55.*(t62+t63+q53.*t7.*t39.*2.0)+u54.*(q54.*q56.*t9.*-4.0+q56.*t7.*t34.*2.0+q54.*q56.*t8.*t11.*2.0+q54.*q56.*t3.*t18.*8.0),u55.*(t73-t4.*t9.*2.0-t7.*t12.*2.0+q54.*t7.*t39.*2.0+t3.*t8.*t12.*2.0)+u53.*(t67+t68+q56.*t7.*t36.*2.0)-u56.*(t70+t71+q53.*t7.*t35.*2.0)-u54.*(q54.*q55.*t9.*-4.0+q55.*t7.*t34.*2.0+q54.*q55.*t8.*t11.*2.0+q54.*q55.*t3.*t18.*8.0),0.0,0.0,0.0,u56.*(t24-t5.*t9.*2.0-t7.*t13.*2.0+q55.*t7.*t45.*2.0+t4.*t8.*t13.*2.0)+u53.*(t37+t38+q54.*t7.*t43.*2.0)-u54.*(t59+t60+q53.*t7.*t44.*2.0)-u55.*(q55.*q56.*t9.*-4.0+q56.*t7.*t41.*2.0+q55.*q56.*t8.*t12.*2.0+q55.*q56.*t4.*t18.*8.0),u53.*(t42-t2.*t9.*2.0-t7.*t10.*2.0+q55.*t7.*t43.*2.0+t4.*t8.*t10.*2.0)-u56.*(t46+t47+q54.*t7.*t45.*2.0)+u54.*(t85+t86+q56.*t7.*t44.*2.0)-u55.*(q53.*q55.*t9.*-4.0+q53.*t7.*t41.*2.0+q53.*q55.*t8.*t12.*2.0+q53.*q55.*t4.*t18.*8.0),-u54.*(t73-t3.*t9.*2.0-t7.*t11.*2.0+q55.*t7.*t44.*2.0+t4.*t8.*t11.*2.0)+u53.*(t76+t77+q56.*t7.*t43.*2.0)-u56.*(t79+t80+q53.*t7.*t45.*2.0)+u55.*(q54.*q55.*t9.*-4.0+q54.*t7.*t41.*2.0+q54.*q55.*t8.*t12.*2.0+q54.*q55.*t4.*t18.*8.0),0.0,0.0,0.0,-u55.*(t24-t4.*t9.*2.0-t7.*t12.*2.0+q56.*t7.*t53.*2.0+t5.*t8.*t12.*2.0)-u54.*(t30+t31+q53.*t7.*t51.*2.0)+u53.*(t67+t68+q54.*t7.*t52.*2.0)+u56.*(q55.*q56.*t9.*-4.0+q55.*t7.*t49.*2.0+q55.*q56.*t8.*t13.*2.0+q55.*q56.*t5.*t18.*8.0),u54.*(t50-t3.*t9.*2.0-t7.*t11.*2.0+q56.*t7.*t51.*2.0+t5.*t8.*t11.*2.0)-u55.*(t54+t55+q53.*t7.*t53.*2.0)+u53.*(t76+t77+q55.*t7.*t52.*2.0)-u56.*(q54.*q56.*t9.*-4.0+q54.*t7.*t49.*2.0+q54.*q56.*t8.*t13.*2.0+q54.*q56.*t5.*t18.*8.0),u53.*(t82-t2.*t9.*2.0-t7.*t10.*2.0+q56.*t7.*t52.*2.0+t5.*t8.*t10.*2.0)-u54.*(t85+t86+q55.*t7.*t51.*2.0)+u55.*(t88+t89+q54.*t7.*t53.*2.0)-u56.*(q53.*q56.*t9.*-4.0+q53.*t7.*t49.*2.0+q53.*q56.*t8.*t13.*2.0+q53.*q56.*t5.*t18.*8.0),0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0],[6,106]);
end
if nargout > 3
    out4 = [0.0;0.0;-9.81e2./1.0e2;0.0;0.0;0.0];
end
