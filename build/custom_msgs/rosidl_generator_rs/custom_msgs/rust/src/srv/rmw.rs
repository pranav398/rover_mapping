#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "custom_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_msgs__srv__Battery_Request() -> *const std::ffi::c_void;
}

#[link(name = "custom_msgs__rosidl_generator_c")]
extern "C" {
    fn custom_msgs__srv__Battery_Request__init(msg: *mut Battery_Request) -> bool;
    fn custom_msgs__srv__Battery_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Battery_Request>, size: usize) -> bool;
    fn custom_msgs__srv__Battery_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Battery_Request>);
    fn custom_msgs__srv__Battery_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Battery_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Battery_Request>) -> bool;
}

// Corresponds to custom_msgs__srv__Battery_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Battery_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub deduction: i32,

}



impl Default for Battery_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_msgs__srv__Battery_Request__init(&mut msg as *mut _) {
        panic!("Call to custom_msgs__srv__Battery_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Battery_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__srv__Battery_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__srv__Battery_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__srv__Battery_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Battery_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Battery_Request where Self: Sized {
  const TYPE_NAME: &'static str = "custom_msgs/srv/Battery_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_msgs__srv__Battery_Request() }
  }
}


#[link(name = "custom_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_msgs__srv__Battery_Response() -> *const std::ffi::c_void;
}

#[link(name = "custom_msgs__rosidl_generator_c")]
extern "C" {
    fn custom_msgs__srv__Battery_Response__init(msg: *mut Battery_Response) -> bool;
    fn custom_msgs__srv__Battery_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Battery_Response>, size: usize) -> bool;
    fn custom_msgs__srv__Battery_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Battery_Response>);
    fn custom_msgs__srv__Battery_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Battery_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Battery_Response>) -> bool;
}

// Corresponds to custom_msgs__srv__Battery_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Battery_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reason: rosidl_runtime_rs::String,

}



impl Default for Battery_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_msgs__srv__Battery_Response__init(&mut msg as *mut _) {
        panic!("Call to custom_msgs__srv__Battery_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Battery_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__srv__Battery_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__srv__Battery_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__srv__Battery_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Battery_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Battery_Response where Self: Sized {
  const TYPE_NAME: &'static str = "custom_msgs/srv/Battery_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_msgs__srv__Battery_Response() }
  }
}


#[link(name = "custom_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_msgs__srv__Move_Request() -> *const std::ffi::c_void;
}

#[link(name = "custom_msgs__rosidl_generator_c")]
extern "C" {
    fn custom_msgs__srv__Move_Request__init(msg: *mut Move_Request) -> bool;
    fn custom_msgs__srv__Move_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Move_Request>, size: usize) -> bool;
    fn custom_msgs__srv__Move_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Move_Request>);
    fn custom_msgs__srv__Move_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Move_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Move_Request>) -> bool;
}

// Corresponds to custom_msgs__srv__Move_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    pub deduction: i32,

}



impl Default for Move_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_msgs__srv__Move_Request__init(&mut msg as *mut _) {
        panic!("Call to custom_msgs__srv__Move_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Move_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__srv__Move_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__srv__Move_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__srv__Move_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Move_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Move_Request where Self: Sized {
  const TYPE_NAME: &'static str = "custom_msgs/srv/Move_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_msgs__srv__Move_Request() }
  }
}


#[link(name = "custom_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_msgs__srv__Move_Response() -> *const std::ffi::c_void;
}

#[link(name = "custom_msgs__rosidl_generator_c")]
extern "C" {
    fn custom_msgs__srv__Move_Response__init(msg: *mut Move_Response) -> bool;
    fn custom_msgs__srv__Move_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Move_Response>, size: usize) -> bool;
    fn custom_msgs__srv__Move_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Move_Response>);
    fn custom_msgs__srv__Move_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Move_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Move_Response>) -> bool;
}

// Corresponds to custom_msgs__srv__Move_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Move_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reason: rosidl_runtime_rs::String,

}



impl Default for Move_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_msgs__srv__Move_Response__init(&mut msg as *mut _) {
        panic!("Call to custom_msgs__srv__Move_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Move_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__srv__Move_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__srv__Move_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__srv__Move_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Move_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Move_Response where Self: Sized {
  const TYPE_NAME: &'static str = "custom_msgs/srv/Move_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_msgs__srv__Move_Response() }
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


