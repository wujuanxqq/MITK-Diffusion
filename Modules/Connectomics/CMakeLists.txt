MITK_CREATE_MODULE(
  SUBPROJECTS MITK-Diffusion
  INCLUDE_DIRS Algorithms Algorithms/BrainParcellation IODataStructures Rendering ${CMAKE_CURRENT_BINARY_DIR}
  DEPENDS MitkDiffusionCore
  PACKAGE_DEPENDS VTK|vtkInfovisLayout
)

add_subdirectory(Testing)
