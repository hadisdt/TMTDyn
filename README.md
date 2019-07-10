TMTDyn is a Matlab based package to automate the derivation of TMT Equation of Motion (EOM) for hybrid rigid-continuum body dynamic systems with constraints and contacts, their linear modal analysis, and nonlinear controller design.

We have recently developed a Matlab software package, called "AutoTMTDyn" to derive TMT EOM of rigid-body mechanisms ([Sadati et al. 2015](https://www.researchgate.net/publication/290003554_An_Automatic_Algorithm_to_Derive_Linear_Vector_Form_of_Lagrangian_Equation_of_Motion_with_Collision_and_Constraint)). "AutoTMTDyn" (Available at https://github.com/hadisdt/AutoTMTDyn) was originally developed for deriving the TMT EOM of rigid-body systems and used for analyzing free-fall righting maneuvers of a robot cat ([sadati et al. 2017](https://www.researchgate.net/publication/318347109_Singularity-Free_Planning_for_a_Robot_Cat_Free-Fall_with_Control_Delay_Role_of_Limbs_and_Tail)), lumped system modeling of continuum appendage ([sadati et al. 2017](https://www.researchgate.net/publication/316735950_Mechanics_of_Continuum_Manipulators_A_Comparative_Study_of_Five_Methods_with_Experiments)), and dynamic analysis of a spider web structure ([sadati et al. 2018](https://www.researchgate.net/publication/325720681_Toward_Computing_with_Spider_Webs_Computational_Setup_Realization)).

Here, we introduce a new version, now called "TMTDyn", which is equipped with:
- new High-Level-Language text-based interface,
- CAD-file import module,
- automatic formation of the system EOM for different modeling and control tasks,
- implementing Matlab C-mex functionality for improved performance,
- modules for static and linear modal analysis of a hybrid system.

In the Samples section, we employed the TMT method to derive EOM of continuum bodies based on discretized and reduced order solutions:
- a continuum appendage with braided pneumatic actuation chambers,
- a fabric sleeve worn on a rigid-link arm.

As a result, a unified software package is provided for deriving EOM, control design, and numerical simulation of hybrid rigid-continuum body systems.

Please see the Wiki page at https://github.com/hadisdt/TMTDyn/wiki for the package documentation.

Please cite our relevant papers if you decided to use this package or methods presented in it:
- [S.M.H. Sadat, A. Shiva, S. E. Naghibi, et al., “Reduced Order vs. Discretized Lumped System Models with Absolute and Relative States for Continuum Manipulators,” presented at the Robotics: Science and Systems (RSS), Freiburg, Germany, 2019.](https://www.researchgate.net/publication/332980482_Reduced_Order_vs_Discretized_Lumped_System_Models_with_Absolute_and_Relative_States_for_Continuum_Manipulators)
- [S.M.H. Sadati, S. Naghibi, and M. Naraghi, “An Automatic Algorithm to Derive Linear Vector Form of Lagrangian Equation of Motion with Collision and Constraint,” Procedia Computer Science, vol. 76, pp. 217–222, 2015.](https://www.researchgate.net/publication/290003554_An_Automatic_Algorithm_to_Derive_Linear_Vector_Form_of_Lagrangian_Equation_of_Motion_with_Collision_and_Constraint)
- [S.M.H. Sadati, S. E. Naghibi, A. Shiva, et al., “AutoTMTDyn: A Matlab Software Package to Drive TMT Lagrange Dynamics of Series Rigid- and Continuum-link Mechanisms,” IROS 2018 Workshop on Soft Robotic Modeling and Control: Bringing Together Articulated Soft Robots and Soft-Bodied Robots, 2018.](https://www.researchgate.net/publication/328172210_AutoTMTDyn_A_Matlab_Software_Package_to_Drive_TMT_Lagrange_Dynamics_of_Series_Rigid-_and_Continuum-link_Mechanisms)
