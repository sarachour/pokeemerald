RustboroCity_Flat2_3F_MapBorder::
	.incbin "data/layouts/RustboroCity_Flat2_3F/border.bin"

RustboroCity_Flat2_3F_MapBlockdata::
	.incbin "data/layouts/RustboroCity_Flat2_3F/map.bin"

	.align 2
RustboroCity_Flat2_3F_Layout::
	.4byte 0xe
	.4byte 0x9
	.4byte RustboroCity_Flat2_3F_MapBorder
	.4byte RustboroCity_Flat2_3F_MapBlockdata
	.4byte gTileset_Building
	.4byte gTileset_GenericBuilding

