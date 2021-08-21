# TEST PLAN

## Table no: High level test plan

| **Test ID** | **Description**                   | **Exp I/P** | **Exp O/P** | **Actual O/P** |    
|-------------|-----------------------------------|------------|-------------|----------------|
|  H_01       | Math Operations | Choice | SUCCESS | SUCCESS |
|  H_02       | Electrical unit conversions Operations | Choice| SUCCESS | SUCCESS |
|  H_03       | Physics Related conversion Operations | Choice | SUCCESS | SUCCESS |
|  H_04       | Medical Operations | Choice| SUCCESS | SUCCESS |
|  H_05       | Financial Operations | Choice| SUCCESS | SUCCESS |
|  H_06       | Time Operations | Choice| SUCCESS | SUCCESS |
|  H_07       | Electronics Operations | Choice| SUCCESS | SUCCESS |

## Table no: Low level test plan

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
|  L_23       | H_06 | Performing Cosine transform | [3x3] | [3x3] | [3x3] | matrix based |
|  L_24       | H_06 | Performing sine transform | [3x3] | [3x3] | [3x3]  | matrix based |
|  L_25       | H_06 | Performing Hadmard transform | [3x3] | [3x3] | [3x3] | matrix based |
|  L_26       | H_06 | Performing Harwavlet transform | [3x3] | [3x3] | [3x3] | matrix based |
|  L_27       | H_06 | Performing image enhancement transform | [3x3] | [3x3] | [3x3] | matrix based |
|  L_28       | H_02 |  Star to Delta( Positive) |     |      |     | Scenario based |
|  L_29       | H_02 |  Star to Delta( Negative) |     |      |     | Scenario based |
|  L_30       | H_02 |  Star to Delta( Null) |     |      |     | Scenario based |
|  L_28       | H_02 |  Delta to Star( Positive) |     |      |     | Scenario based |
|  L_29       | H_02 |  Delta to Star( Negative) |     |      |     | Scenario based |
|  L_30       | H_02 |  Delta to Star( Null) |     |      |     | Scenario based |
|  L_31       | H_02 |  KW to Amps(1p)( Positive) |     |      |     | Scenario based |
|  L_32       | H_02 |  KW to Amps(1p)( Negative) |     |      |     | Scenario based |
|  L_33       | H_02 |  KW to Amps(1p)( Null) |     |      |     | Scenario based |
|  L_34       | H_02 |  KW to Amps(3p)( Positive) |     |      |     | Scenario based |
|  L_35       | H_02 |  KW to Amps(3p)( Negative) |     |      |     | Scenario based |
|  L_36       | H_02 |  KW to Amps(3p)( Null) |     |      |     | Scenario based |
|  L_37       | H_02 |  Battery life( Positive) |     |      |     | Scenario based |
|  L_38       | H_02 |  Battery life( Negative) |     |      |     | Scenario based |
|  L_39       | H_02 |  Battery life( Null) |     |      |     | Scenario based |
|  L_40       | H_02 |  Ohm's law calculate voltage(Positive) | (2.4,3.2)    |  7.68   |   7.68  | Requirement based |
|  L_41       | H_02 |  Ohm's law calculate voltage(Negative) | (-2,-2)    |  -1   |   -1  | Requirement based |
|  L_42       | H_02 |  Ohm's law calculate current(Positive) | (5.6,2.4)    |  2.33   |   2.33 | Requirement based |
|  L_43       | H_02 |  Ohm's law calculate current(Negative) | (-2.5,-7.2)    |  -1   |   -1  | Requirement based |
|  L_44       | H_02 |  Ohm's law calculate resistance(Positive) | (6.5,2.1)    |  3.10   |   3.10  | Requirement based |
|  L_45       | H_02 |  Ohm's law calculate resistance(Negative) | (-4.2,-2)    |  -1   |   -1  | Requirement based |
|  L_46       | H_02 |  Performing Voltage divider (Positive) |    |     |     | Requirement based |
|  L_47       | H_02 |  Performing Voltage divider (Negative) |     |     |     | Requirement based |
|  L_48       | H_02 |  Power factor calculation (Positive) |    |     |     | Requirement based |
|  L_49       | H_02 |  Power factor calculation (Negative) |    |     |     | Requirement based |
|  L_50       | H_02 |  Electricity Bill calculation (Positive) |    |     |     | Scenario based |
|  L_51       | H_02 |  Electricity Bill calculation (Null) |    |     |     | Scenario based |
| L_52        | H_01 |  Performing Mod | (4,2) | 0 | 0 | Requirement Based |
| L_53        | H_01 |  performing mod | (570,7) | 3 | 3 | Scenario based |
| L_54        | H_01 | Perfoeming mod | (97543854,254) | 234 | 234 | Boundary Based |
| L_55        | H_01 |  Performing power | (4,2) | 16 | 16 | Requirement Based |
| L_56        | H_01 |  performing power | (570,3) | 185193000 | 185193000 | Scenario based |
| L_57        | H_01 | Perfoeming power | (1784,3) | 5677858304 | 5677858304 | Boundary Based |
| L_58        |H_01 | Performing factorial | (5) | 120 | 120 | Requirement Based |
| L_59        | H_01  | Performing Factorial | (20) | 2432902008176640000 | 2432902008176640000 | Scenario Based |
| L-60        | H_01  | Performing Factorial | (120) | 6.6895029134491E+198 | 6.6895029134491E+198 | Boundary Scenario |
| L_61        | H_01 | Performing Permutation | (6,5) | 720 | 720 | Requirement Based |
| L_62        | H_01 | Performing Permutation | (120,6) | 2629976731200 | 2629976731200 | Scenario Based |
| L_63        | H_01 | Performing permutation | (5,6) | Error | Error | Boundary Based |
| L_64        | H_01 | Performing combination | (6,5) | 6 | 6 | Requirement Based |
| L_65        | H_01 | Performing combination | (120,6) | 3652745460 | 3652745460 | Scenario Based |
| L_66        | H_01 | Performing combination | (5,6) | Error | Error | Boundary Based |
| L_67        | H_01 | Performing sum of natural number | (90) | 4095 | 4095 | Requirement Based |
| L_68        | H_01 | Performing sum of natural numbers | (740) | 274170 | 274170 | Scenario Based |
| L_69        | H_01 | Performing sum of natural numbers | (-60) | Error | Error | Boundary Based |
| L_70        | H_03 | Finding displacement | (2, 3, 4) | 32 | 32 | Scenerio Based |
| L_71        | H_03 | Finding displacement | (2.5, 3.5, 4.5) | 46.687500 | 46.687500 | Scenerio Based |
| L_72        | H_03 | Finding displacement | (5, 2, -4) | Error | Error | Scenerio Based |
| L_73        | H_03 | Avarage velocity | (3, 4) | 3.5 | 3.5 | Requirement Based |
| L_74        | H_03 | Avarage velocity | (-10, 6) | 2 | 2 | Requirement Based |






