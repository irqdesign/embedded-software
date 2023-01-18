// auto-generated by modbusGenerateTestC.py
#include "AlenconModbus.h"

#ifdef MODBUS_TEST
#include "task.h"
void AlenconModbus_Init(void) {
    static const uint32_t uint32_input1 = 1000;
    Modbus_AddInputSource(32028, (uint16_t*)&uint32_input1);
    static const uint32_t uint32_input2 = 1001;
    Modbus_AddInputSource(32030, (uint16_t*)&uint32_input2);
    static const uint64_t uint64_input1 = 1002;
    Modbus_AddInputSource(32032, (uint16_t*)&uint64_input1);
    static const uint32_t uint32_input3 = 1003;
    Modbus_AddInputSource(32036, (uint16_t*)&uint32_input3);
    static const float float_input1 = 1004.0f;
    Modbus_AddInputSource(32038, (uint16_t*)&float_input1);
    static const uint32_t uint32_input4 = 100;
    Modbus_AddInputSource(34096, (uint16_t*)&uint32_input4);
    static const uint32_t uint32_input5 = 0;
    Modbus_AddInputSource(34098, (uint16_t*)&uint32_input5);
    static const uint32_t uint32_input6 = 101;
    Modbus_AddInputSource(34100, (uint16_t*)&uint32_input6);
    static const uint32_t uint32_input7 = 102;
    Modbus_AddInputSource(34102, (uint16_t*)&uint32_input7);
    static const float float_input2 = 1.0f;
    Modbus_AddInputSource(34104, (uint16_t*)&float_input2);
    static const float float_input3 = 2.0f;
    Modbus_AddInputSource(34106, (uint16_t*)&float_input3);
    static const float float_input4 = 3.0f;
    Modbus_AddInputSource(34108, (uint16_t*)&float_input4);
    static const float float_input5 = 4.0f;
    Modbus_AddInputSource(34110, (uint16_t*)&float_input5);
    static const float float_input6 = 5.0f;
    Modbus_AddInputSource(34112, (uint16_t*)&float_input6);
    static const float float_input7 = 6.0f;
    Modbus_AddInputSource(34114, (uint16_t*)&float_input7);
    static const float float_input8 = 7.0f;
    Modbus_AddInputSource(34116, (uint16_t*)&float_input8);
    static const float float_input9 = 8.0f;
    Modbus_AddInputSource(34118, (uint16_t*)&float_input9);
    static const float float_input10 = 9.0f;
    Modbus_AddInputSource(34120, (uint16_t*)&float_input10);
    static const float float_input11 = 10.0f;
    Modbus_AddInputSource(34122, (uint16_t*)&float_input11);
    static const float float_input12 = 11.0f;
    Modbus_AddInputSource(34124, (uint16_t*)&float_input12);
    static const uint32_t uint32_input8 = 103;
    Modbus_AddInputSource(35120, (uint16_t*)&uint32_input8);
    static const uint32_t uint32_input9 = 1;
    Modbus_AddInputSource(35122, (uint16_t*)&uint32_input9);
    static const uint32_t uint32_input10 = 104;
    Modbus_AddInputSource(35124, (uint16_t*)&uint32_input10);
    static const uint32_t uint32_input11 = 105;
    Modbus_AddInputSource(35126, (uint16_t*)&uint32_input11);
    static const float float_input13 = 12.0f;
    Modbus_AddInputSource(35128, (uint16_t*)&float_input13);
    static const float float_input14 = 13.0f;
    Modbus_AddInputSource(35130, (uint16_t*)&float_input14);
    static const float float_input15 = 14.0f;
    Modbus_AddInputSource(35132, (uint16_t*)&float_input15);
    static const float float_input16 = 15.0f;
    Modbus_AddInputSource(35134, (uint16_t*)&float_input16);
    static const float float_input17 = 16.0f;
    Modbus_AddInputSource(35136, (uint16_t*)&float_input17);
    static const float float_input18 = 17.0f;
    Modbus_AddInputSource(35138, (uint16_t*)&float_input18);
    static const float float_input19 = 18.0f;
    Modbus_AddInputSource(35140, (uint16_t*)&float_input19);
    static const float float_input20 = 19.0f;
    Modbus_AddInputSource(35142, (uint16_t*)&float_input20);
    static const float float_input21 = 20.0f;
    Modbus_AddInputSource(35144, (uint16_t*)&float_input21);
    static const float float_input22 = 21.0f;
    Modbus_AddInputSource(35146, (uint16_t*)&float_input22);
    static const float float_input23 = 22.0f;
    Modbus_AddInputSource(35148, (uint16_t*)&float_input23);
    static const uint32_t uint32_input12 = 106;
    Modbus_AddInputSource(36144, (uint16_t*)&uint32_input12);
    static const uint32_t uint32_input13 = 2;
    Modbus_AddInputSource(36146, (uint16_t*)&uint32_input13);
    static const uint32_t uint32_input14 = 107;
    Modbus_AddInputSource(36148, (uint16_t*)&uint32_input14);
    static const uint32_t uint32_input15 = 108;
    Modbus_AddInputSource(36150, (uint16_t*)&uint32_input15);
    static const float float_input24 = 23.0f;
    Modbus_AddInputSource(36152, (uint16_t*)&float_input24);
    static const float float_input25 = 24.0f;
    Modbus_AddInputSource(36154, (uint16_t*)&float_input25);
    static const float float_input26 = 25.0f;
    Modbus_AddInputSource(36156, (uint16_t*)&float_input26);
    static const float float_input27 = 26.0f;
    Modbus_AddInputSource(36158, (uint16_t*)&float_input27);
    static const float float_input28 = 27.0f;
    Modbus_AddInputSource(36160, (uint16_t*)&float_input28);
    static const float float_input29 = 28.0f;
    Modbus_AddInputSource(36162, (uint16_t*)&float_input29);
    static const float float_input30 = 29.0f;
    Modbus_AddInputSource(36164, (uint16_t*)&float_input30);
    static const float float_input31 = 30.0f;
    Modbus_AddInputSource(36166, (uint16_t*)&float_input31);
    static const float float_input32 = 31.0f;
    Modbus_AddInputSource(36168, (uint16_t*)&float_input32);
    static const float float_input33 = 32.0f;
    Modbus_AddInputSource(36170, (uint16_t*)&float_input33);
    static const float float_input34 = 33.0f;
    Modbus_AddInputSource(36172, (uint16_t*)&float_input34);
    static const uint32_t uint32_input16 = 109;
    Modbus_AddInputSource(37168, (uint16_t*)&uint32_input16);
    static const uint32_t uint32_input17 = 3;
    Modbus_AddInputSource(37170, (uint16_t*)&uint32_input17);
    static const uint32_t uint32_input18 = 110;
    Modbus_AddInputSource(37172, (uint16_t*)&uint32_input18);
    static const uint32_t uint32_input19 = 111;
    Modbus_AddInputSource(37174, (uint16_t*)&uint32_input19);
    static const float float_input35 = 34.0f;
    Modbus_AddInputSource(37176, (uint16_t*)&float_input35);
    static const float float_input36 = 35.0f;
    Modbus_AddInputSource(37178, (uint16_t*)&float_input36);
    static const float float_input37 = 36.0f;
    Modbus_AddInputSource(37180, (uint16_t*)&float_input37);
    static const float float_input38 = 37.0f;
    Modbus_AddInputSource(37182, (uint16_t*)&float_input38);
    static const float float_input39 = 38.0f;
    Modbus_AddInputSource(37184, (uint16_t*)&float_input39);
    static const float float_input40 = 39.0f;
    Modbus_AddInputSource(37186, (uint16_t*)&float_input40);
    static const float float_input41 = 40.0f;
    Modbus_AddInputSource(37188, (uint16_t*)&float_input41);
    static const float float_input42 = 41.0f;
    Modbus_AddInputSource(37190, (uint16_t*)&float_input42);
    static const float float_input43 = 42.0f;
    Modbus_AddInputSource(37192, (uint16_t*)&float_input43);
    static const float float_input44 = 43.0f;
    Modbus_AddInputSource(37194, (uint16_t*)&float_input44);
    static const float float_input45 = 44.0f;
    Modbus_AddInputSource(37196, (uint16_t*)&float_input45);
    static uint32_t holding_register1;
    Modbus_AddHoldingRegister(42028, (uint16_t*)&holding_register1, 0, 2);
    static uint32_t holding_register2;
    Modbus_AddHoldingRegister(44096, (uint16_t*)&holding_register2, 0, 2);
    static uint32_t holding_register3;
    Modbus_AddHoldingRegister(45120, (uint16_t*)&holding_register3, 0, 2);
    static uint32_t holding_register4;
    Modbus_AddHoldingRegister(46144, (uint16_t*)&holding_register4, 0, 2);
    static uint32_t holding_register5;
    Modbus_AddHoldingRegister(47168, (uint16_t*)&holding_register5, 0, 2);

    Task_Schedule(Modbus_Routine, 0, 250, 250);
}
#endif
