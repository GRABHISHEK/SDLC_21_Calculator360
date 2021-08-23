# TEST PLAN

## Table no: High Level Test Plan

| **Test ID** | **Description**                   | **Exp I/P** | **Exp O/P** | **Actual O/P** |    
|-------------|-----------------------------------|------------|-------------|----------------|
|  H_01       | Math Operations | Choice | SUCCESS | SUCCESS |
|  H_02       | Electrical Unit Conversions Operations | Choice| SUCCESS | SUCCESS |
|  H_03       | Physics Related Conversion Operations | Choice | SUCCESS | SUCCESS |
|  H_04       | Medical Operations | Choice| SUCCESS | SUCCESS |
|  H_05       | Financial Operations | Choice| SUCCESS | SUCCESS |
|  H_06       | Time Operations | Choice| SUCCESS | SUCCESS |
|  H_07       | Electronics Operations | Choice| SUCCESS | SUCCESS |

## Table no: Low Level Test Plan

| **Test ID** | **HL_ID** | **Description**   | **Exp Input** | **Exp Output** | **Actual Output** |**Type Of Test**  |    
|-------------|-----------|---------------------------|------------|-------------|----------------|------------------|
|  L_01       | H_01 | Performing Addition | (20,10) | 30 | 30 | Requirement based |
|  L_02       | H_01 | Performing Addition | (2*3+5,8/2-1) | 14 | 14 | Scenario based |
|  L_03       | H_01 | Performing Addition | (9223372036854775807,-2) | 9223372036854775805 | 9223372036854775805 | Boundary based |
|  L_04       | H_01 | Performing Subtraction | (20,10) | 10 | 10 | Requirement based |
|  L_05       | H_01 | Performing Subtraction | (20/2+1, 10*1) | 1 | 1 | Scenario based |
|  L_06       | H_01 | Performing Subtraction | (9223372036854775807,2) |  9223372036854775805 | 9223372036854775805 | Boundary based |
|  L_07       | H_01 | Performing Multiplication | (10,20) | 200 | 200 | Requirement based |
|  L_08       | H_01 | Performing Multiplication | (2+6/2 ,0) | 0 | 0 |  Scenario based |
|  L_09       | H_01 | Performing Multiplication | (999999,123456) | 123455876544 | 123455876544 | Boundary based |
|  L_10       | H_01 | Performing Division | (20,10) | 2 | 2 | Requirement based |
|  L_11       | H_01 | Performing Division | (20,0) | ERROR_DIVISION_BY_ZERO 0 | ERROR_DIVISION_BY_ZERO 0| Scenario based |
|  L_12       | H_01 | Performing Division | (9223372036854775806,2) | 4611686018427387903 | 4611686018427387903 | Boundary based |
|  L_13       | H_01 | Performing Sine | 90 | 1 | 1 | Requirement based |
|  L_14       | H_01 | Performing Cosine | 0 | 1 | 1 | Requirement based |
|  L_15       | H_01 | Performing Tangent | 45 | 1 | 0.999999 | Requirement based |
|  L_16       | H_01 | Performing Tangent | 90 | UNDEFINED | UNDEFINED | Boundary based |
|  L_17       | H_01 | Performing Cotangent | 45 | 1 | 1.000001 | Requirement based |
|  L_18       | H_01 | Performing Cotangent | 90 | 0 | 0 | Requirement based |
|  L_19       | H_01 | Performing Secant | 0 | 1 | 1 | Requirement based |
|  L_20       | H_01 | Performing Secant | 90 | UNDEFINED | UNDEFINED | Boundary based |
|  L_21       | H_01 | Performing Cosecant | 90 | 1 | 1 | Requirement based |
|  L_22       | H_01 | Performing Cosecant | 180 | UNDEFINED | UNDEFINED | Boundary based |
|  L_23       | H_06 | Performing Cosine transform | [4x4] | [4x4] | [4x4] | matrix based |
|  L_24       | H_06 | Performing sine transform | [4x4] | [4x4] | [4x4]  | matrix based |
|  L_25       | H_06 | Performing Hadmard transform | [4x4] | [4x4] | [4x4] | matrix based |
|  L_26       | H_06 | Performing Discrete Fourier transform | [4x4] | [4x4] | [3x3] | matrix based |
|  L_27       | H_06 | Performing Run length encoding compression | [4x4] | [4x4] | [4x4] | matrix based |
|  L_28       | H_02 |  Star to Delta( Positive) | {10, 20, 30}     | {110, 55, 36}      | {110, 55, 36}    | Scenario based |
|  L_29       | H_02 |  Star to Delta( Negative) | {10, 20, 30}    |  NOT EQUAL    |  {110, 55, 36}   | Scenario based |
|  L_30       | H_02 |  Star to Delta( Null) |  NULL   |   NULL_ERROR   | NULL_ERROR    | Scenario based |
|  L_28       | H_02 |  Delta to Star( Positive) |   {10, 20, 30}  | {10, 5, 3}     | {10, 5, 3}    | Scenario based |
|  L_29       | H_02 |  Delta to Star( Negative) | {10, 20, 30}    |  NOT EQUAL    | {10, 5, 3}    | Scenario based |
|  L_30       | H_02 |  Delta to Star( Null) | NULL    | NULL_ERROR     | NULL_ERROR    | Scenario based |
|  L_31       | H_02 |  KW to Amps(1p)( Positive) |  0.33,0.8,110   | 3.750     |  3.750   | Scenario based |
|  L_32       | H_02 |  KW to Amps(1p)( Negative) | 0.33,0.8,110     |  NOT EQUAL    |   3.750    | Scenario based |
|  L_33       | H_02 |  KW to Amps(1p)( Null) |  NULL    | NULL_ERROR     | NULL_ERROR    | Scenario based |
|  L_34       | H_02 |  KW to Amps(3p)( Positive) | 0.33,0.8,110      |  2.165    |  2.165   | Scenario based |
|  L_35       | H_02 |  KW to Amps(3p)( Negative) | 0.33,0.8,110      |   NOT EQUAL   |  2.165   | Scenario based |
|  L_36       | H_02 |  KW to Amps(3p)( Null) | NULL    | NULL_ERROR     |  NULL_ERROR   | Scenario based |
|  L_37       | H_02 |  Battery life( Positive) | 2000,260    | 7.7     |  7.7   | Scenario based |
|  L_38       | H_02 |  Battery life( Negative) | 2000,260    |  NOT EQUAL    | 7.7    | Scenario based |
|  L_39       | H_02 |  Battery life( Null) |   NULL  |  NULL_ERROR    | NULL_ERROR    | Scenario based |
|  L_40       | H_02 |  Ohm's law calculate voltage(Positive) | (2.4,3.2)    |  7.68   |   7.68  | Requirement based |
|  L_41       | H_02 |  Ohm's law calculate voltage(Negative) | (-2,-2)    |  -1   |   -1  | Requirement based |
|  L_42       | H_02 |  Ohm's law calculate current(Positive) | (5.6,2.4)    |  2.33   |   2.33 | Requirement based |
|  L_43       | H_02 |  Ohm's law calculate current(Negative) | (-2.5,-7.2)    |  -1   |   -1  | Requirement based |
|  L_44       | H_02 |  Ohm's law calculate resistance(Positive) | (6.5,2.1)    |  3.10   |   3.10  | Requirement based |
|  L_45       | H_02 |  Ohm's law calculate resistance(Negative) | (-4.2,-2)    |  -1   |   -1  | Requirement based |
|  L_46       | H_02 |  Performing Voltage divider (Positive) |  (3.1,1.5,0.86)  |   1.13  |   1.13  | Requirement based |
|  L_47       | H_02 |  Performing Voltage divider (Negative) |   (-2,-3,-4)  |  -1   |  -1   | Requirement based |
|  L_48       | H_02 |  Power factor calculation (Positive) |  (2,50,230)  |   (0.17,11.50,11.32)  |   (0.17,11.50,11.32)  | Requirement based |
|  L_49       | H_02 |  Power factor calculation (Negative) |  (-3,-52,230)  |  -1   |   -1  | Requirement based |
|  L_50       | H_02 |  Electricity Bill calculation (Positive) |  125.6  |  448.12   |  448.12   | Scenario based |
|  L_51       | H_02 |  Electricity Bill calculation (Null) |  NULL  |  0   |  0   | Scenario based |
| L_52        | H_01 |  Performing Mod | (4,2) | 0 | 0 | Requirement Based |
| L_53        | H_01 |  performing mod | (570,7) | 3 | 3 | Scenario based |
| L_54        | H_01 | Perfoeming mod | (97543854,254) | 234 | 234 | Boundary Based |
| L_55        | H_01 |  Performing power | (4,2) | 16 | 16 | Requirement Based |
| L_56        | H_01 |  performing power | (570,3) | 185193000 | 185193000 | Scenario based |
| L_57        | H_01 | Performing power | (1784,3) | 5677858304 | 5677858304 | Boundary Based |
| L_58        | H_01  | Performing factorial | (5) | 120 | 120 | Requirement Based |
| L_59        | H_01 | Performing Factorial | (20) | 2432902008176640000 | 2432902008176640000 | Scenario Based |
| L-60        | H_01 | Performing Factorial | (-60) | FAILURE | FAILURE | Boundary Scenario |
| L_61        | H_01 | Performing Permutation | (6,5) | 720 | 720 | Requirement Based |
| L_62        | H_01 | Performing Permutation | (120,6) | 2629976731200 | 2629976731200 | Scenario Based |
| L_63        | H_01 | Performing permutation | (5,6) | FAILURE | FAILURE | Boundary Based |
| L_64        | H_01 | Performing combination | (6,5) | 6 | 6 | Requirement Based |
| L_65        | H_01 | Performing combination | (120,6) | 3652745460 | 3652745460 | Scenario Based |
| L_66        | H_01 | Performing combination | (5,6) | FAILURE | FAILURE | Boundary Based |
| L_67        | H_01 | Performing sum of natural number | (90) | 4095 | 4095 | Requirement Based |
| L_68        | H_01 | Performing sum of natural numbers | (740) | 274170 | 274170 | Scenario Based |
| L_69        | H_01 | Performing sum of natural numbers | (-60) | FAILURE | FAILURE | Boundary Based |
| L_70        | H_03 | Finding displacement | (2, 3, 4) | 32 | 32 | Scenario Based |
| L_71        | H_03 | Finding displacement | (2.5, 3.5, 4.5) | 46.687500 | 46.687500 | Scenario Based |
| L_72        | H_03 | Finding displacement | (5, 2, -4) | Error | Error | Scenario Based |
| L_73        | H_03 | Average velocity | (3, 4) | 3.5 | 3.5 | Requirement Based |
| L_74        | H_03 | Average velocity | (-10, 6) | 2 | 2 | Requirement Based |
| L_75        | H_03 | Momentum | (20, 5) | 100 | 100 | Requirement Based |
| L_76        | H_03 | Force | (15, 4) | 60 | 60 | Requirement Based |
| L_77        | H_03 | Force | (-50, 14) | Error | Error | Requirement Based |
| L_78        | H_03 | Impulse | (10, 4, 3) | 30 | 30 | Requirement Based |
| L_79        | H_03 | Impulse | (-10, 4, 3) | Error | Error | Requirement Based |
| L_80        | H_03 | Pressure | (42, 7) | 6 | 6 | Requirement Based |
| L_81        | H_03 | Pressure | (8, 0) | Error | Error | Requirement Based |
| L_82        | H_03 | Density | (40, 8) | 5 | 5 | Requirement Based |
| L_83        | H_03 | Torque | (2, 6, 30) | 6 | 6 | Scenario Based |
| L_84        | H_03 | Torque | (2, 6, 0) | 0 | 0 | Scenario Based |
| L_85        | H_03 | Newton's Second law | (2, 5 ) | 10 | 10 | Requirement Based  |
| L_86        | H_03  | Len's Law | (U=6, F=3 ) | 1/6 | 1/6 | Scenario Based  |
| L_87        | H_03  | Refractive Index | (C=3*10^-8, n=2 ) | 1.5 | 1.5 |  Requirement Based |
| L_88        | H_03  | Speed of Sound | (D=6, T=0.5 ) | 12 | 12 | Scenario Based  |
| L_89        | H_03 | Light | (0.2, 1.2 ) | 0.24 | 0.24 | Scenario Based |
| L_90        | H_06| Year into hours |      |        |     | Requirement Based |
| L_91        | H_06| days into hours |      |        |     | Requirement Based |
| L_92        | H_06| hours into seconds|      |        |     | Requirement Based |
| L_93        | H_06| hours into minutes |      |        |     | Requirement Based |
| L_94        | H_06| minutes into seconds |      |        |     | Requirement Based |
| l_95        | H_06| days into weeks |      |        |     | Requirement Based |
| L_96        | H_06| minutes into hour |      |        |     | Requirement Based |
| L_97        | H_06| days into year |      |        |     | Requirement Based |
| L_98        | H_06| days into minutes |      |        |     | Requirement Based |
|  L_99       | H_02 |  Singlephase true power( Positive) | 400,70,0.8     |  22.4    |  22.4   | Scenario based |
|  L_100       | H_02 |  Singlephase true power( Null) | NULL    | NULL_ERROR     |  NULL_ERROR   | Scenario based |
|  L_101       | H_02 |  Threephase true power( Positive) | 400,70,0.8     |  38.79794    |  38.79794   | Scenario based |
|  L_102       | H_02 |  Threephase true power( Null) | NULL    | NULL_ERROR     |  NULL_ERROR   | Scenario based |
|  L_103       | H_02 |  Battery Run time( Positive) | 60,100     |  6.0    |  6.0   | Scenario based |
|  L_104       | H_02 |  Battery Run time( Negative) | 60,100       |   NOT EQUAL   |  6.0   | Scenario based |
|  L_105       | H_02 |  Battery Run time( Null) | NULL    | NULL_ERROR     |  NULL_ERROR   | Scenario based |
|  L_106  | H_05 | Performing Simple Interest | (100,10,10) | 100.000000 | 100.000000 | Requirement based |
|  L_107  | H_05 | Performing Simple Interest | (560,5,6) | 168.000000 | 168.000000 | Requirement based |
|  L_108  | H_05 | Performing Principal | (50,5,6) | 166.666667 | 166.666667 | Requirement based |
|  L_109  | H_05 | Performing Principal | (58,3,4) | 483.333333 | 483.333333 | Requirement based |
|  L_110  | H_05 | Performing Rate of interest | (400,2.5,4) | 4000.000000 | 4000.000000 | Requirement based |
|  L_111  | H_05 | Performing Rate of interest | (520,300,3.1) | 55.913978 | 55.913978 | Requirement based |
|  L_112  | H_05 | Performing Time | (250,130,5) | 38.461538 | 38.461538 | Requirement based |
|  L_113  | H_05 | Performing Time | (56,41,2) | 68.292683 | 68.292683 | Requirement based |
|  L_114  | H_05 | Performing Gain | (120,12) | 108.000000 | 108.000000 | Requirement based |
|  L_115  | H_05 | Performing Gain | (20,50) | Invalid | Invalid | Requirement based |
|  L_116  | H_05 | Performing Loss | (12,50) | 38.000000 | 38.000000 | Requirement based |
|  L_117  | H_05 | Performing Loss | (52,10) | Invalid | Invalid | Requirement based |
|  L_118  | H_05 | Performing Gain Percentage | (40,52) | 76.923077 | 76.923077 | Requirement based |
|  L_119  | H_05 | Performing Gain Percentage | (23,82) | 28.048780 | 28.048780 | Requirement based |
|  L_120  | H_05 | Performing Loss Percentage | (52,21) | 247.619048 | 247.619048 | Requirement based |
|  L_121  | H_05 | Performing Loss Percentage | (12,89) | 13.483146 | 13.483146 | Requirement based |
|  L_122  | H_05 | Performing Selling Price(with Gain) | (10,52) | 57.200000 | 57.200000 | Requirement based |
|  L_123  | H_05 | Performing Selling Price(with Gain) | (52,10) | 15.200000 | 15.200000 | Requirement based |
|  L_124  | H_05 | Performing Selling Price(with Loss) | (52,91) | 43.680000 | 43.680000 | Requirement based |
|  L_125  | H_05 | Performing Selling Price(with Loss) | (21,8) | 6.320000 | 6.320000 | Requirement based |
|  L_126  | H_05 | Performing Cost Price(with Gain) | (59,87) | 54.716981 | 54.716981 | Requirement based |
|  L_127  | H_05 | Performing Cost Price(with Gain) | (36,65) | 47.794118 | 47.794118 | Requirement based |
|  L_128  | H_05 | Performing Cost Price(with Loss) | (58,2) | 4.761905 | 4.761905 | Requirement based |
|  L_129  | H_05 | Performing Cost Price(with Loss) | (6,4) | 4.255319 | 4.255319 | Requirement based |
|  L_130  | H_05 | Performing Gain(from false weights) | (5,125) | 4.166667 | 4.166667 | Requirement based |
|  L_131  | H_05 | Performing Gain(from false weights) | (56,12) | Invalid | Invalid | Requirement based |
|  L_132  | H_05 | Performing Premium of share | (156,100) | 56.000000 | 56.000000 | Requirement based |
|  L_133  | H_05 | Performing Premium of share | (56,59) | Invalid | Invalid | Requirement based |
|  L_134  | H_05 | Performing Discount of share | (69,85) | 16.000000 | 16.000000 | Requirement based |
|  L_135  | H_05 | Performing Discount of share | (156,125) | Invalid | Invalid | Requirement based |
|  L_136  | H_05 | Performing No. of Shares | (560,25) | Invalid | Invalid | Requirement based |
|  L_137  | H_05 | Performing No. of Shares | (500,5) | 100 | 100 | Requirement based |
|  L_138       | H_01 | Performing Power | (2,3) | 8 | 8 | Requirement based |
|  L_139       | H_01 | Performing Power | (2*2+5*23 ,2 ) | 14161 | 14161 | Scenario based |
|  L_140       | H_01 | Performing Square root | 9 | 3 | 3 | Requirement based |
|  L_141       | H_01 | Performing Square root | 9223372036854775805 | 3037000448 | 3037000448 | Boundary based |
|  L_142       | H_01 | Performing Log10 | 10 | 1 | 1 | Requirement based |
|  L_143       | H_01 | Performing Log10 | -10 | UNDEFINED | UNDEFINED | Boundary based |
|  L_144       | H_01 | Performing Factorial | 4 | 24 | 24 | Requirement based |
|  L_145      | H_01 | Performing Factorial | -1 | FAILURE | FAILURE |  Boundary based |


