function [out1,out2] = loadsF1(in1,in2,s)
%LOADSF1
%    [OUT1,OUT2] = LOADSF1(IN1,IN2,S)

%    This function was generated by the Symbolic Math Toolbox version 8.0.
%    30-Jan-2019 18:00:05

f_tx_sym = in1(:,28);
f_ty_sym = in1(:,29);
f_tz_sym = in1(:,30);
l_f_sym = in1(:,17);
q10 = in2(:,10);
q11 = in2(:,11);
q12 = in2(:,12);
tau_tx_sym = in1(:,31);
tau_ty_sym = in1(:,32);
tau_tz_sym = in1(:,33);
t2 = q10.^2;
t3 = q11.^2;
t4 = q12.^2;
t5 = -t2-t3-t4+1.0;
t6 = 1.0./sqrt(t5);
t7 = sqrt(t5);
t8 = l_f_sym.*q12.*2.0;
t9 = q10.*q11.*t6.*2.0;
t10 = t7.*2.0;
t11 = q11.*2.0;
t12 = q10.*q12.*t6.*2.0;
t13 = q11.*q12.*t6.*2.0;
out1 = reshape([0.0,0.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,t8-l_f_sym.*q10.*q11.*t6.*2.0,l_f_sym.*t7.*2.0-l_f_sym.*t3.*t6.*2.0,l_f_sym.*q10.*2.0-l_f_sym.*q11.*q12.*t6.*2.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,0.0,l_f_sym.*t7.*-2.0+l_f_sym.*t2.*t6.*2.0,t8+l_f_sym.*q10.*q11.*t6.*2.0,l_f_sym.*q11.*2.0+l_f_sym.*q10.*q12.*t6.*2.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,l_f_sym.*q10.*-4.0,l_f_sym.*q11.*-4.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,t10+t2.*t6.*2.0,q12.*2.0+t9,-t11+t12,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,q12.*-2.0+t9,t10+t3.*t6.*2.0,q10.*2.0+t13,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,t11+t12,q10.*-2.0+t13,t10+t4.*t6.*2.0],[12,6]);
if nargout > 1
    t14 = t7.*tau_ty_sym;
    t15 = q10.*tau_tz_sym;
    t28 = q12.*tau_tx_sym;
    t16 = t14+t15-t28;
    t17 = t7.*tau_tz_sym;
    t18 = q11.*tau_tx_sym;
    t27 = q10.*tau_ty_sym;
    t19 = t17+t18-t27;
    t20 = t7.*tau_tx_sym;
    t21 = q12.*tau_ty_sym;
    t29 = q11.*tau_tz_sym;
    t22 = t20+t21-t29;
    t23 = q10.*tau_tx_sym;
    t24 = q11.*tau_ty_sym;
    t25 = q12.*tau_tz_sym;
    t26 = t23+t24+t25;
    out2 = [f_tx_sym;f_ty_sym;f_tz_sym;q12.*t16-q11.*t19+q10.*t26+t7.*t22;q10.*t19-q12.*t22+q11.*t26+t7.*t16;-q10.*t16+q11.*t22+q12.*t26+t7.*t19];
end
