Route108_EventObjects: @ 8528964
	object_event 1, EVENT_OBJ_GFX_SWIMMER_M, 0, 52, 13, 1, MOVEMENT_TYPE_WALK_SEQUENCE_UP_LEFT_DOWN_RIGHT, 3, 3, 1, 3, Route108_EventScript_1EE68A, 0
	object_event 2, EVENT_OBJ_GFX_SWIMMER_F, 0, 35, 12, 1, MOVEMENT_TYPE_FACE_DOWN_AND_UP, 1, 1, 1, 3, Route108_EventScript_1EE6B8, 0
	object_event 3, EVENT_OBJ_GFX_SWIMMER_M, 0, 13, 13, 1, MOVEMENT_TYPE_ROTATE_CLOCKWISE, 0, 0, 1, 3, Route108_EventScript_1EE6A1, 0
	object_event 4, EVENT_OBJ_GFX_SWIMMER_F, 0, 8, 7, 1, MOVEMENT_TYPE_FACE_DOWN_UP_AND_RIGHT, 6, 0, 1, 3, Route108_EventScript_1EE6CF, 0
	object_event 5, EVENT_OBJ_GFX_WOMAN_7, 0, 41, 5, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, 1, 1, Route108_EventScript_1EE6E6, 0
	object_event 6, EVENT_OBJ_GFX_SAILOR, 0, 43, 5, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, 1, 1, Route108_EventScript_1EE6FD, 0
	object_event 7, EVENT_OBJ_GFX_ITEM_BALL, 0, 42, 4, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, 0, 0, Route108_EventScript_290D4D, 1139

Route108_MapWarps: @ 8528A0C
	warp_def 29, 6, 3, 0, MAP_ABANDONED_SHIP_DECK

Route108_MapBGEvents: @ 8528A14
	bg_hidden_item_event 38, 14, 3, ITEM_RARE_CANDY, 86

Route108_MapEvents:: @ 8528A20
	map_events Route108_EventObjects, Route108_MapWarps, 0x0, Route108_MapBGEvents

