function [out1,out2,out3,out4] = massF15(in1,in2,s)
%MASSF15
%    [OUT1,OUT2,OUT3,OUT4] = MASSF15(IN1,IN2,S)

%    This function was generated by the Symbolic Math Toolbox version 8.2.
%    18-Jan-2019 00:42:08

q95 = in2(:,95);
q96 = in2(:,96);
q97 = in2(:,97);
q98 = in2(:,98);
u95 = in2(:,213);
u96 = in2(:,214);
u97 = in2(:,215);
u98 = in2(:,216);
out1 = reshape([2.4e-3,0.0,0.0,0.0,0.0,0.0,0.0,2.4e-3,0.0,0.0,0.0,0.0,0.0,0.0,2.4e-3,0.0,0.0,0.0,0.0,0.0,0.0,4.275999999999999e-8,0.0,0.0,0.0,0.0,0.0,0.0,8.526399999999998e-8,0.0,0.0,0.0,0.0,0.0,0.0,4.275999999999999e-8],[6,6]);
if nargout > 1
    out2 = reshape([0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,0.0,0.0,q96.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q95.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*-2.0-q95.^2.*q96.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^2.*2.0,q97.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q95.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*-2.0-q95.^2.*q97.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^2.*2.0,q98.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q95.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*-2.0-q95.^2.*q98.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^2.*2.0,0.0,0.0,0.0,q95.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q96.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q95.*q96.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^2.*2.0,q98.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q96.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*-2.0-q96.^2.*q98.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^2.*2.0,q97.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q96.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q96.^2.*q97.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^2.*2.0,0.0,0.0,0.0,q98.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q97.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q97.^2.*q98.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^2.*2.0,q95.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q97.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q95.*q97.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^2.*2.0,q96.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q97.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*-2.0-q96.*q97.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^2.*2.0,0.0,0.0,0.0,q97.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q98.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*-2.0-q97.*q98.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^2.*2.0,q96.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q98.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q96.*q98.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^2.*2.0,q95.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q98.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q95.*q98.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^2.*2.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0],[6,106]);
end
if nargout > 2
    out3 = reshape([0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,-u95.*(q96.*(q95.^3.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(5.0./2.0).*3.0-q95.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*3.0).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q95.*q96.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^2.*4.0-q95.^3.*q96.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^3.*8.0-q95.*q96.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q95.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*2.0)-u96.*(q96.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^2.*-2.0-(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q96.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q95.^2.*q96.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^3.*8.0+q95.*(q95.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)-q95.*q96.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(5.0./2.0).*3.0).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q95.^2.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q96.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*2.0)-u97.*(q98.*(q95.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)-q95.*q97.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(5.0./2.0).*3.0).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q95.*q97.^2.*q98.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^3.*8.0+q95.*q98.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q97.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*2.0)+u98.*(q97.*(q95.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)-q95.*q98.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(5.0./2.0).*3.0).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q95.*q97.*q98.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^3.*8.0+q95.*q97.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q98.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*2.0),-u95.*(q97.*(q95.^3.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(5.0./2.0).*3.0-q95.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*3.0).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q95.*q97.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^2.*4.0-q95.^3.*q97.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^3.*8.0-q95.*q97.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q95.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*2.0)-u97.*(q97.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^2.*-2.0-(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q97.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q95.^2.*q97.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^3.*8.0+q95.*(q95.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)-q95.*q97.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(5.0./2.0).*3.0).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q95.^2.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q97.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*2.0)+u96.*(q98.*(q95.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)-q95.*q96.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(5.0./2.0).*3.0).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q95.*q96.^2.*q98.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^3.*8.0+q95.*q98.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q96.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*2.0)-u98.*(q96.*(q95.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)-q95.*q98.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(5.0./2.0).*3.0).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q95.*q96.*q98.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^3.*8.0+q95.*q96.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q98.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*2.0),-u95.*(q98.*(q95.^3.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(5.0./2.0).*3.0-q95.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*3.0).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q95.*q98.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^2.*4.0-q95.^3.*q98.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^3.*8.0-q95.*q98.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q95.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*2.0)-u98.*(q98.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^2.*-2.0-(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q98.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q95.^2.*q98.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^3.*8.0+q95.*(q95.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)-q95.*q98.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(5.0./2.0).*3.0).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q95.^2.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q98.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*2.0)-u96.*(q97.*(q95.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)-q95.*q96.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(5.0./2.0).*3.0).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q95.*q96.^2.*q97.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^3.*8.0+q95.*q97.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q96.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*2.0)+u97.*(q96.*(q95.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)-q95.*q97.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(5.0./2.0).*3.0).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q95.*q96.*q97.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^3.*8.0+q95.*q96.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q97.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*2.0),0.0,0.0,0.0,u96.*(q95.*(q96.^3.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(5.0./2.0).*3.0-q96.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*3.0).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q95.*q96.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^2.*4.0-q95.*q96.^3.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^3.*8.0-q95.*q96.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q96.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*2.0)+u95.*(q95.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^2.*-2.0-(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q95.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q95.^2.*q96.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^3.*8.0+q96.*(q96.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)-q95.^2.*q96.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(5.0./2.0).*3.0).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q96.^2.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q95.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*2.0)-u97.*(q98.*(q96.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)-q96.*q97.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(5.0./2.0).*3.0).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q96.*q97.^2.*q98.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^3.*8.0+q96.*q98.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q97.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*2.0)+u98.*(q97.*(q96.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)-q96.*q98.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(5.0./2.0).*3.0).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q96.*q97.*q98.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^3.*8.0+q96.*q97.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q98.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*2.0),-u96.*(q98.*(q96.^3.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(5.0./2.0).*3.0-q96.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*3.0).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q96.*q98.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^2.*4.0-q96.^3.*q98.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^3.*8.0-q96.*q98.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q96.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*2.0)-u98.*(q98.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^2.*-2.0-(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q98.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q96.^2.*q98.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^3.*8.0+q96.*(q96.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)-q96.*q98.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(5.0./2.0).*3.0).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q96.^2.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q98.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*2.0)+u95.*(q97.*(q96.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)-q95.^2.*q96.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(5.0./2.0).*3.0).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q95.^2.*q96.*q97.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^3.*8.0+q96.*q97.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q95.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*2.0)-u97.*(q95.*(q96.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)-q96.*q97.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(5.0./2.0).*3.0).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q95.*q96.*q97.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^3.*8.0+q95.*q96.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q97.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*2.0),u96.*(q97.*(q96.^3.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(5.0./2.0).*3.0-q96.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*3.0).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q96.*q97.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^2.*4.0-q96.^3.*q97.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^3.*8.0-q96.*q97.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q96.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*2.0)+u97.*(q97.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^2.*-2.0-(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q97.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q96.^2.*q97.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^3.*8.0+q96.*(q96.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)-q96.*q97.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(5.0./2.0).*3.0).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q96.^2.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q97.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*2.0)+u95.*(q98.*(q96.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)-q95.^2.*q96.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(5.0./2.0).*3.0).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q95.^2.*q96.*q98.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^3.*8.0+q96.*q98.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q95.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*2.0)-u98.*(q95.*(q96.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)-q96.*q98.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(5.0./2.0).*3.0).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q95.*q96.*q98.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^3.*8.0+q95.*q96.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q98.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*2.0),0.0,0.0,0.0,u97.*(q98.*(q97.^3.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(5.0./2.0).*3.0-q97.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*3.0).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q97.*q98.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^2.*4.0-q97.^3.*q98.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^3.*8.0-q97.*q98.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q97.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*2.0)+u98.*(q98.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^2.*-2.0-(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q98.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q97.^2.*q98.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^3.*8.0+q97.*(q97.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)-q97.*q98.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(5.0./2.0).*3.0).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q97.^2.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q98.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*2.0)+u95.*(q96.*(q97.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)-q95.^2.*q97.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(5.0./2.0).*3.0).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q95.^2.*q96.*q97.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^3.*8.0+q96.*q97.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q95.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*2.0)-u96.*(q95.*(q97.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)-q96.^2.*q97.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(5.0./2.0).*3.0).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q95.*q96.^2.*q97.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^3.*8.0+q95.*q97.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q96.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*2.0),u97.*(q95.*(q97.^3.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(5.0./2.0).*3.0-q97.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*3.0).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q95.*q97.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^2.*4.0-q95.*q97.^3.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^3.*8.0-q95.*q97.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q97.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*2.0)+u95.*(q95.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^2.*-2.0-(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q95.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q95.^2.*q97.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^3.*8.0+q97.*(q97.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)-q95.^2.*q97.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(5.0./2.0).*3.0).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q97.^2.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q95.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*2.0)+u96.*(q98.*(q97.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)-q96.^2.*q97.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(5.0./2.0).*3.0).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q96.^2.*q97.*q98.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^3.*8.0+q97.*q98.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q96.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*2.0)-u98.*(q96.*(q97.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)-q97.*q98.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(5.0./2.0).*3.0).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q96.*q97.*q98.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^3.*8.0+q96.*q97.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q98.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*2.0),-u97.*(q96.*(q97.^3.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(5.0./2.0).*3.0-q97.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*3.0).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q96.*q97.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^2.*4.0-q96.*q97.^3.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^3.*8.0-q96.*q97.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q97.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*2.0)-u96.*(q96.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^2.*-2.0-(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q96.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q96.^2.*q97.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^3.*8.0+q97.*(q97.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)-q96.^2.*q97.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(5.0./2.0).*3.0).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q97.^2.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q96.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*2.0)+u95.*(q98.*(q97.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)-q95.^2.*q97.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(5.0./2.0).*3.0).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q95.^2.*q97.*q98.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^3.*8.0+q97.*q98.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q95.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*2.0)-u98.*(q95.*(q97.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)-q97.*q98.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(5.0./2.0).*3.0).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q95.*q97.*q98.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^3.*8.0+q95.*q97.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q98.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*2.0),0.0,0.0,0.0,-u98.*(q97.*(q98.^3.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(5.0./2.0).*3.0-q98.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*3.0).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q97.*q98.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^2.*4.0-q97.*q98.^3.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^3.*8.0-q97.*q98.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q98.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*2.0)-u97.*(q97.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^2.*-2.0-(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q97.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q97.^2.*q98.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^3.*8.0+q98.*(q98.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)-q97.^2.*q98.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(5.0./2.0).*3.0).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q98.^2.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q97.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*2.0)+u95.*(q96.*(q98.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)-q95.^2.*q98.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(5.0./2.0).*3.0).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q95.^2.*q96.*q98.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^3.*8.0+q96.*q98.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q95.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*2.0)-u96.*(q95.*(q98.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)-q96.^2.*q98.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(5.0./2.0).*3.0).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q95.*q96.^2.*q98.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^3.*8.0+q95.*q98.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q96.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*2.0),u98.*(q96.*(q98.^3.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(5.0./2.0).*3.0-q98.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*3.0).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q96.*q98.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^2.*4.0-q96.*q98.^3.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^3.*8.0-q96.*q98.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q98.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*2.0)+u96.*(q96.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^2.*-2.0-(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q96.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q96.^2.*q98.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^3.*8.0+q98.*(q98.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)-q96.^2.*q98.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(5.0./2.0).*3.0).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q98.^2.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q96.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*2.0)+u95.*(q97.*(q98.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)-q95.^2.*q98.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(5.0./2.0).*3.0).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q95.^2.*q97.*q98.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^3.*8.0+q97.*q98.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q95.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*2.0)-u97.*(q95.*(q98.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)-q97.^2.*q98.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(5.0./2.0).*3.0).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q95.*q97.^2.*q98.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^3.*8.0+q95.*q98.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q97.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*2.0),u98.*(q95.*(q98.^3.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(5.0./2.0).*3.0-q98.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*3.0).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q95.*q98.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^2.*4.0-q95.*q98.^3.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^3.*8.0-q95.*q98.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q98.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*2.0)+u95.*(q95.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^2.*-2.0-(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q95.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q95.^2.*q98.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^3.*8.0+q98.*(q98.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)-q95.^2.*q98.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(5.0./2.0).*3.0).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q98.^2.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q95.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*2.0)-u96.*(q97.*(q98.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)-q96.^2.*q98.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(5.0./2.0).*3.0).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q96.^2.*q97.*q98.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^3.*8.0+q97.*q98.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q96.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*2.0)+u97.*(q96.*(q98.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)-q97.^2.*q98.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(5.0./2.0).*3.0).*1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2).*2.0+q96.*q97.^2.*q98.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^3.*8.0+q96.*q98.*(1.0./sqrt(q95.^2+q96.^2+q97.^2+q98.^2)-q97.^2.*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0)).*1.0./(q95.^2+q96.^2+q97.^2+q98.^2).^(3.0./2.0).*2.0),0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0],[6,106]);
end
if nargout > 3
    out4 = [0.0;0.0;-9.81e2./1.0e2;0.0;0.0;0.0];
end