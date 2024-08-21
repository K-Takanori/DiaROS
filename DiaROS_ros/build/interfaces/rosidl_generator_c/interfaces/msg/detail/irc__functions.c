// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces:msg/Irc.idl
// generated code does not contain a copyright notice
#include "interfaces/msg/detail/irc__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `word`
#include "rosidl_runtime_c/string_functions.h"

bool
interfaces__msg__Irc__init(interfaces__msg__Irc * msg)
{
  if (!msg) {
    return false;
  }
  // word
  if (!rosidl_runtime_c__String__init(&msg->word)) {
    interfaces__msg__Irc__fini(msg);
    return false;
  }
  return true;
}

void
interfaces__msg__Irc__fini(interfaces__msg__Irc * msg)
{
  if (!msg) {
    return;
  }
  // word
  rosidl_runtime_c__String__fini(&msg->word);
}

bool
interfaces__msg__Irc__are_equal(const interfaces__msg__Irc * lhs, const interfaces__msg__Irc * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // word
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->word), &(rhs->word)))
  {
    return false;
  }
  return true;
}

bool
interfaces__msg__Irc__copy(
  const interfaces__msg__Irc * input,
  interfaces__msg__Irc * output)
{
  if (!input || !output) {
    return false;
  }
  // word
  if (!rosidl_runtime_c__String__copy(
      &(input->word), &(output->word)))
  {
    return false;
  }
  return true;
}

interfaces__msg__Irc *
interfaces__msg__Irc__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__Irc * msg = (interfaces__msg__Irc *)allocator.allocate(sizeof(interfaces__msg__Irc), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__msg__Irc));
  bool success = interfaces__msg__Irc__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces__msg__Irc__destroy(interfaces__msg__Irc * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces__msg__Irc__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces__msg__Irc__Sequence__init(interfaces__msg__Irc__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__Irc * data = NULL;

  if (size) {
    data = (interfaces__msg__Irc *)allocator.zero_allocate(size, sizeof(interfaces__msg__Irc), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__msg__Irc__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__msg__Irc__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
interfaces__msg__Irc__Sequence__fini(interfaces__msg__Irc__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces__msg__Irc__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

interfaces__msg__Irc__Sequence *
interfaces__msg__Irc__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__Irc__Sequence * array = (interfaces__msg__Irc__Sequence *)allocator.allocate(sizeof(interfaces__msg__Irc__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces__msg__Irc__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces__msg__Irc__Sequence__destroy(interfaces__msg__Irc__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces__msg__Irc__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces__msg__Irc__Sequence__are_equal(const interfaces__msg__Irc__Sequence * lhs, const interfaces__msg__Irc__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__msg__Irc__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__msg__Irc__Sequence__copy(
  const interfaces__msg__Irc__Sequence * input,
  interfaces__msg__Irc__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__msg__Irc);
    interfaces__msg__Irc * data =
      (interfaces__msg__Irc *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__msg__Irc__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          interfaces__msg__Irc__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces__msg__Irc__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
