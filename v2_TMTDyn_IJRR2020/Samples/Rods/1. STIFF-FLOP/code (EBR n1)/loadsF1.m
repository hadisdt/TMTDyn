function [out1,out2] = loadsF1(in1,in2,s)
%LOADSF1
%    [OUT1,OUT2] = LOADSF1(IN1,IN2,S)

%    This function was generated by the Symbolic Math Toolbox version 8.0.
%    30-Jan-2019 17:24:25

f_tx_sym = in1(:,28);
f_ty_sym = in1(:,29);
f_tz_sym = in1(:,30);
l_f_sym = in1(:,17);
q4 = in2(:,4);
q5 = in2(:,5);
q6 = in2(:,6);
tau_tx_sym = in1(:,31);
tau_ty_sym = in1(:,32);
tau_tz_sym = in1(:,33);
t2 = l_f_sym.*q6.*(1.0./2.0);
t3 = q5.*(1.0./2.0);
out1 = reshape([1.0,0.0,0.0,t2,l_f_sym,l_f_sym.*q4.*(1.0./2.0),0.0,1.0,0.0,-l_f_sym,t2,l_f_sym.*q5.*(1.0./2.0),0.0,0.0,1.0,l_f_sym.*q4.*(-1.0./2.0),l_f_sym.*q5.*(-1.0./2.0),t2,0.0,0.0,0.0,1.0,q6.*(1.0./2.0),-t3,0.0,0.0,0.0,q6.*(-1.0./2.0),1.0,q4.*(1.0./2.0),0.0,0.0,0.0,t3,q4.*(-1.0./2.0),1.0],[6,6]);
if nargout > 1
    t4 = q5.*tau_tx_sym.*(1.0./2.0);
    t14 = q4.*tau_ty_sym.*(1.0./2.0);
    t5 = t4-t14+tau_tz_sym;
    t6 = q6.*tau_ty_sym.*(1.0./2.0);
    t7 = q4.*tau_tz_sym.*(1.0./2.0);
    t8 = q4.*tau_tx_sym.*(1.0./2.0);
    t9 = q5.*tau_ty_sym.*(1.0./2.0);
    t10 = q6.*tau_tz_sym.*(1.0./2.0);
    t11 = t8+t9+t10;
    t12 = t7+tau_ty_sym-q6.*tau_tx_sym.*(1.0./2.0);
    t13 = t6+tau_tx_sym-q5.*tau_tz_sym.*(1.0./2.0);
    out2 = [f_tx_sym;f_ty_sym;f_tz_sym;t6+tau_tx_sym-q5.*t5.*(1.0./2.0)+q4.*t11.*(1.0./2.0)+q6.*t12.*(1.0./2.0)-q5.*tau_tz_sym.*(1.0./2.0);t7+tau_ty_sym+q4.*t5.*(1.0./2.0)+q5.*t11.*(1.0./2.0)-q6.*t13.*(1.0./2.0)-q6.*tau_tx_sym.*(1.0./2.0);t4-t14+tau_tz_sym-q4.*t12.*(1.0./2.0)+q6.*t11.*(1.0./2.0)+q5.*t13.*(1.0./2.0)];
end
