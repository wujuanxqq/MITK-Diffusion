/*===================================================================

The Medical Imaging Interaction Toolkit (MITK)

Copyright (c) German Cancer Research Center.

All rights reserved.

This software is distributed WITHOUT ANY WARRANTY; without
even the implied warranty of MERCHANTABILITY or FITNESS FOR
A PARTICULAR PURPOSE.

See LICENSE.txt or http://www.mitk.org for details.

===================================================================*/

#include "mitkPluginActivator.h"

#include "src/internal/Perspectives/QmitkDIAppSyntheticDataGenerationPerspective.h"

#include "src/internal/QmitkFiberfoxView.h"
#include "src/internal/QmitkFiberGenerationView.h"
#include "src/internal/QmitkFieldmapGeneratorView.h"

ctkPluginContext* mitk::PluginActivator::m_Context = nullptr;

ctkPluginContext* mitk::PluginActivator::GetContext()
{
  return m_Context;
}

void mitk::PluginActivator::start(ctkPluginContext* context)
{
  BERRY_REGISTER_EXTENSION_CLASS(QmitkDIAppSyntheticDataGenerationPerspective, context)
  
  BERRY_REGISTER_EXTENSION_CLASS(QmitkFiberfoxView, context)
  BERRY_REGISTER_EXTENSION_CLASS(QmitkFieldmapGeneratorView, context)
  BERRY_REGISTER_EXTENSION_CLASS(QmitkFiberGenerationView, context)
  m_Context = context;
}

void mitk::PluginActivator::stop(ctkPluginContext* context)
{
  Q_UNUSED(context)
  m_Context = nullptr;
}
