function [out1,out2,out3,out4,out5,out6,out7,out8] = sprdmpF12(in1,in2,s)
%SPRDMPF12
%    [OUT1,OUT2,OUT3,OUT4,OUT5,OUT6,OUT7,OUT8] = SPRDMPF12(IN1,IN2,S)

%    This function was generated by the Symbolic Math Toolbox version 8.0.
%    21-Feb-2019 08:54:04

lambda_sym = in1(:,34);
p1_sym = in1(:,22);
p3_sym = in1(:,24);
p5_sym = in1(:,26);
q12 = in2(:,12);
u12 = in2(:,30);
out1 = [0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;1.0;0.0;0.0;0.0;0.0;0.0;0.0];
if nargout > 1
    t4 = lambda_sym.^2;
    t8 = t4.*4.439506172839557e-3;
    t2 = t8-1.0;
    t3 = 1.0./lambda_sym;
    t5 = t4.*2.787064548290963e-8;
    t6 = t5-6.277870645482909e-6;
    t7 = 1.0./sqrt(lambda_sym);
    t9 = t2.^2;
    t10 = t9.*2.36469959048496e-10;
    t11 = 1.0./lambda_sym.^2;
    t12 = t10-t11.*2.4004e-8;
    t13 = t12.*pi.*3.075e6;
    t14 = t13-t3.*t6.*pi.*2.666025e3;
    out2 = q12.*t3.*t14;
end
if nargout > 2
    out3 = u12.*abs(u12).*(-1.0e-5);
end
if nargout > 3
    out4 = p1_sym.*t6.*t7.*pi.*1.301042606982605e-18+p3_sym.*t6.*t7.*pi.*1.380546378974017e-2-p5_sym.*t6.*t7.*pi.*1.380546378974017e-2;
end
if nargout > 4
    out5 = q12;
end
if nargout > 5
    out6 = [0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,-t3.*t14,0.0,0.0,0.0,0.0,0.0,0.0];
end
if nargout > 6
    out7 = [0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,u12.*(-1.0e-5),0.0,0.0,0.0,0.0,0.0,0.0];
end
if nargout > 7
    out8 = 1.0;
end
