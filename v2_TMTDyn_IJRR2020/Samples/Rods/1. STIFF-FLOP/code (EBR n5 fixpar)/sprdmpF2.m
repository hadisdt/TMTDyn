function [out1,out2,out3,out4,out5,out6,out7,out8] = sprdmpF2(in1,in2,s)
%SPRDMPF2
%    [OUT1,OUT2,OUT3,OUT4,OUT5,OUT6,OUT7,OUT8] = SPRDMPF2(IN1,IN2,S)

%    This function was generated by the Symbolic Math Toolbox version 8.0.
%    15-Feb-2019 03:04:28

lambda_sym = in1(:,34);
q2 = in2(:,2);
u2 = in2(:,32);
out1 = [0.0;1.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0];
if nargout > 1
    t2 = 1.0./lambda_sym;
    t3 = t2.*1.36e-4;
    t4 = lambda_sym.^2;
    t5 = t4.*1.672238728974578e-7;
    t6 = t3+t5-3.766722387289746e-5;
    out2 = q2.*t2.*t6.*pi.*(-6.833333333333333e6);
end
if nargout > 2
    out3 = u2.*-1.0e2;
end
if nargout > 3
    out4 = 0.0;
end
if nargout > 4
    out5 = q2;
end
if nargout > 5
    out6 = [0.0,t2.*t6.*pi.*6.833333333333333e6,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0];
end
if nargout > 6
    out7 = [0.0,-1.0e2,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0];
end
if nargout > 7
    out8 = 1.0;
end
