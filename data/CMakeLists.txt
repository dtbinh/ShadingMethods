#
# CMakeLists.txt
# author: Jan Du�ek <jan.dusek90@gmail.com>

configure_file(shaders/simple.vert
	${CMAKE_CURRENT_BINARY_DIR}/shaders/simple.vert COPYONLY)

configure_file(shaders/simple.frag
	${CMAKE_CURRENT_BINARY_DIR}/shaders/simple.frag COPYONLY)

configure_file(shaders/phong.vert
	${CMAKE_CURRENT_BINARY_DIR}/shaders/phong.vert COPYONLY)

configure_file(shaders/phong.frag
	${CMAKE_CURRENT_BINARY_DIR}/shaders/phong.frag COPYONLY)

configure_file(shaders/shadowmap.vert
	${CMAKE_CURRENT_BINARY_DIR}/shaders/shadowmap.vert COPYONLY)

configure_file(shaders/shadowmap.frag
	${CMAKE_CURRENT_BINARY_DIR}/shaders/shadowmap.frag COPYONLY)

configure_file(shaders/shadowedphong.vert
	${CMAKE_CURRENT_BINARY_DIR}/shaders/shadowedphong.vert COPYONLY)

configure_file(shaders/shadowedphong.frag
	${CMAKE_CURRENT_BINARY_DIR}/shaders/shadowedphong.frag COPYONLY)

