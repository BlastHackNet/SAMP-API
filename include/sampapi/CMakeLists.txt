add_subdirectory(0.3.7-R1)
add_subdirectory(0.3.7-R3-1)
add_subdirectory(0.3.7-R5-1)
add_subdirectory(0.3.DL-1)

target_sources(sampapi
  PRIVATE
    sampapi.h
    CMatrix.h
    CRect.h
    CVector.h 
    CPoint.h
)
