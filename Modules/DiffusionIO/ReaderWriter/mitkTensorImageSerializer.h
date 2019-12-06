/*===================================================================

The Medical Imaging Interaction Toolkit (MITK)

Copyright (c) German Cancer Research Center.

All rights reserved.

This software is distributed WITHOUT ANY WARRANTY; without
even the implied warranty of MERCHANTABILITY or FITNESS FOR
A PARTICULAR PURPOSE.

See LICENSE.txt or http://www.mitk.org for details.

===================================================================*/

#ifndef mitkTensorImageSerializer_h_included
#define mitkTensorImageSerializer_h_included

#include "mitkBaseDataSerializer.h"

namespace mitk
{
/**
  \brief Serializes mitk::Surface for mitk::SceneIO
*/
class TensorImageSerializer : public BaseDataSerializer
{
  public:
    mitkClassMacro( TensorImageSerializer, BaseDataSerializer );
    itkFactorylessNewMacro(Self)
    itkCloneMacro(Self)
    std::string Serialize() override;
  protected:
    TensorImageSerializer();
    ~TensorImageSerializer() override;
};
} // namespace
#endif
