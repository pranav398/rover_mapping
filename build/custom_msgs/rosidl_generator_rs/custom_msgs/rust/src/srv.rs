#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to custom_msgs__srv__Battery_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Battery_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub deduction: f32,

}



impl Default for Battery_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Battery_Request::default())
  }
}

impl rosidl_runtime_rs::Message for Battery_Request {
  type RmwMsg = super::srv::rmw::Battery_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        deduction: msg.deduction,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      deduction: msg.deduction,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      deduction: msg.deduction,
    }
  }
}


// Corresponds to custom_msgs__srv__Battery_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Battery_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reason: std::string::String,

}



impl Default for Battery_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Battery_Response::default())
  }
}

impl rosidl_runtime_rs::Message for Battery_Response {
  type RmwMsg = super::srv::rmw::Battery_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        reason: msg.reason.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        reason: msg.reason.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      reason: msg.reason.to_string(),
    }
  }
}


// Corresponds to custom_msgs__srv__Move_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Move_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub delta_x: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub delta_y: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub deduction: f32,

}



impl Default for Move_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Move_Request::default())
  }
}

impl rosidl_runtime_rs::Message for Move_Request {
  type RmwMsg = super::srv::rmw::Move_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        delta_x: msg.delta_x,
        delta_y: msg.delta_y,
        deduction: msg.deduction,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      delta_x: msg.delta_x,
      delta_y: msg.delta_y,
      deduction: msg.deduction,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      delta_x: msg.delta_x,
      delta_y: msg.delta_y,
      deduction: msg.deduction,
    }
  }
}


// Corresponds to custom_msgs__srv__Move_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Move_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reason: std::string::String,

}



impl Default for Move_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Move_Response::default())
  }
}

impl rosidl_runtime_rs::Message for Move_Response {
  type RmwMsg = super::srv::rmw::Move_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        reason: msg.reason.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        reason: msg.reason.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      reason: msg.reason.to_string(),
    }
  }
}


// Corresponds to custom_msgs__srv__SwitchMode_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SwitchMode_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: bool,

}



impl Default for SwitchMode_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SwitchMode_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SwitchMode_Request {
  type RmwMsg = super::srv::rmw::SwitchMode_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mode: msg.mode,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      mode: msg.mode,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mode: msg.mode,
    }
  }
}


// Corresponds to custom_msgs__srv__SwitchMode_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SwitchMode_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for SwitchMode_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SwitchMode_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SwitchMode_Response {
  type RmwMsg = super::srv::rmw::SwitchMode_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}






#[link(name = "custom_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__custom_msgs__srv__Battery() -> *const std::ffi::c_void;
}

// Corresponds to custom_msgs__srv__Battery
#[allow(missing_docs, non_camel_case_types)]
pub struct Battery;

impl rosidl_runtime_rs::Service for Battery {
    type Request = Battery_Request;
    type Response = Battery_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__custom_msgs__srv__Battery() }
    }
}




#[link(name = "custom_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__custom_msgs__srv__Move() -> *const std::ffi::c_void;
}

// Corresponds to custom_msgs__srv__Move
#[allow(missing_docs, non_camel_case_types)]
pub struct Move;

impl rosidl_runtime_rs::Service for Move {
    type Request = Move_Request;
    type Response = Move_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__custom_msgs__srv__Move() }
    }
}




#[link(name = "custom_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__custom_msgs__srv__SwitchMode() -> *const std::ffi::c_void;
}

// Corresponds to custom_msgs__srv__SwitchMode
#[allow(missing_docs, non_camel_case_types)]
pub struct SwitchMode;

impl rosidl_runtime_rs::Service for SwitchMode {
    type Request = SwitchMode_Request;
    type Response = SwitchMode_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__custom_msgs__srv__SwitchMode() }
    }
}


