//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: SetParametersAtomically_Request_.h
//  Source: rcl_interfaces/srv/dds_opensplice/SetParametersAtomically_Request_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _SETPARAMETERSATOMICALLY_REQUEST__H_
#define _SETPARAMETERSATOMICALLY_REQUEST__H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"
#include "Parameter_.h"


namespace rcl_interfaces
{
   namespace srv
   {
      namespace dds_
      {
         struct SetParametersAtomically_Request_;

         struct SetParametersAtomically_Request_
         {
               struct _parameters__seq_uniq_ {};
               typedef DDS_DCPSUVLSeq < ::rcl_interfaces::msg::dds_::Parameter_, struct _parameters__seq_uniq_> _parameters__seq;
               typedef DDS_DCPSSequence_var < _parameters__seq> _parameters__seq_var;
               typedef DDS_DCPSSequence_out < _parameters__seq> _parameters__seq_out;
               _parameters__seq parameters_;
         };

         typedef DDS_DCPSStruct_var < SetParametersAtomically_Request_> SetParametersAtomically_Request__var;
         typedef DDS_DCPSStruct_out < SetParametersAtomically_Request_> SetParametersAtomically_Request__out;
      }
   }
}




#endif 