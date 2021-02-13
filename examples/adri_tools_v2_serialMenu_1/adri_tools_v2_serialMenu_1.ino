#include <adri_tools_v2_serialMenu.h>
#include <adri_tools_v2.h>

adriToolsv2_serialRead	* _serial;
adri_toolsV2 			* _tools;

void setup()
{
	_tools = new adri_toolsV2();

    _serial = new adriToolsv2_serialRead();
//						array 1/2	taille
    _serial->cmd_array(	1, 			3); 
//							array 1/2	taille  display name  		terminal key	result 	function
    _serial->cmd_item_add(	1, 					"menu",				"a",			"", 	_serial_menu);
    _serial->cmd_item_add(	1, 					"ESPreset",			"z",			"", 	_serial_ESPreset);
    _serial->cmd_item_add(	1, 					"freeHeap",			"r",			"", 	_serial_freeHeap);	
}

void loop()
{
	_serial->loop();
}

String _serial_ESPreset(String cmd, String value){
    ESP.restart();
    return "";
}	
String _serial_freeHeap(String cmd, String value){
	_tools->heap_print();	
	return "";
}
String _serial_menu(String cmd, String value) {
    _serial->menu();
    return "";
}