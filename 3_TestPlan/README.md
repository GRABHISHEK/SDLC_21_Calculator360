# TEST PLAN

## Table no: High level test plan

| **Test ID** | **Description**                   | **Exp I/P** | **Exp O/P** | **Actual O/P** |    
|-------------|-----------------------------------|------------|-------------|----------------|
|  H_01       | Arthimetic Operations | Choice | SUCCESS | SUCCESS |
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
|  L_28       | H_02 |  Star to Delta( Positive test case) |     |      |     | Scenario based |
|  L_29       | H_02 |  Star to Delta( Negative test case) |     |      |     | Scenario based |
|  L_30       | H_02 |  Star to Delta( Null test case) |     |      |     | Scenario based |
|  L_28       | H_02 |  Delta to Star( Positive test case) |     |      |     | Scenario based |
|  L_29       | H_02 |  Delta to Star( Negative test case) |     |      |     | Scenario based |
|  L_30       | H_02 |  Delta to Star( Null test case) |     |      |     | Scenario based |
|  L_31       | H_02 |  KW to Amps(1p)( Positive test case) |     |      |     | Scenario based |
|  L_32       | H_02 |  KW to Amps(1p)( Negative test case) |     |      |     | Scenario based |
|  L_33       | H_02 |  KW to Amps(1p)( Null test case) |     |      |     | Scenario based |
|  L_34       | H_02 |  KW to Amps(3p)( Positive test case) |     |      |     | Scenario based |
|  L_35       | H_02 |  KW to Amps(3p)( Negative test case) |     |      |     | Scenario based |
|  L_36       | H_02 |  KW to Amps(3p)( Null test case) |     |      |     | Scenario based |
|  L_37       | H_02 |  Battery life( Positive test case) |     |      |     | Scenario based |
|  L_38       | H_02 |  Battery life( Negative test case) |     |      |     | Scenario based |
|  L_39       | H_02 |  Battery life( Null test case) |     |      |     | Scenario based |



