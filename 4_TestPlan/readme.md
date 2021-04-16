# TEST PLAN

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P**   | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|---------------|-------------|----------------|------------------|
|  H_01       |Calculating the pulse width                                   | N B R R 205   |2.2 ms       |2.2 ms          |Requirement based |
|  H_02       |Calculating the pulse width  when resistance is 0             | B B B Y 134   |0.0 ms       |0.0 ms          |Boumdary based    |
|  H_03       |Calculating pulse width with 5 band resistor & capacitor      | V R B N O 126 |92.4 ms      |92.4 ms         |Scenario based    |

## Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp IN**     | **Exp OUT**     | **Actual Out**  |**Type Of Test**   |    
|-------------|--------------------------------------------------------------|----------------|-----------------|-----------------|-------------------|
|  L_01       |Calculating pulse width when capacitance code>999(Invalid)    |Y E B W 1002    |0.0 ms           |0.0 ms           | Boundary based    |
|  L_02       |Calculating Resistance when band code is invalid              | H W V N        |-1(INVALID CODE) |-1(INVALID CODE) | Scenario based    |
|  L_03       |Calculating capacitance with capacitor code>999               | 1453           |-1(INVALID INPUT)|-1(INVALID INPUT)| Boundary based    |
