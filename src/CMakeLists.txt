
PROJECT(StructuredPointsReader) # Definition du nom de l'executable

find_package(Qt5Widgets) #TO TEST
add_definitions(${Qt5Widgets_DEFINITIONS})#TO TEST


#set(VTK_DIR "/home/sebastien/VTK-8.1.0/build/")
find_package(VTK REQUIRED)
include(${VTK_USE_FILE})

add_executable(StructuredPointsReader MACOSX_BUNDLE StructuredPointsReader.cxx) # Definition du nom de l'executable et des fichiers necessaires a la compilation



if(VTK_LIBRARIES)
  target_link_libraries(StructuredPointsReader ${VTK_LIBRARIES} ${QT_LIBRARIES})
  qt5_use_modules(${PROJECT_NAME}  Widgets)
# else()
#   target_link_libraries(StructuredPointsReader vtkHybrid vtkWidgets)
endif()