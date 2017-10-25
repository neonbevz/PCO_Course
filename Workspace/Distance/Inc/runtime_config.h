#ifndef RUNTIME_CONFIG_H
#define RUNTIME_CONFIG_H

// C runtime
#define PRINT_MESSAGE_ABOUT_HEAP_AND_STACK_COLLISION
#define PRINT_MESSAGES_ABOUT_SHUTDOWN
//#define PRINT_MEMORY_LEFT_AFTER_SBRK

//#define DEFINE_ABORT_FN // Sometimes it is present, sometines no

//! Можливість виділяти всю наявну пам"ять, коли реалізація STL
//! запитує більше, ніж є, виявилася дуже корисною -- бібліотека
//! успішно працює, без цього вилітаючи.
//! Однак, така поведінка суперечить стандарту! І хоча тестування
//! (відносно нашвидкоруч) показало, що malloc веде себе правильно,
//! але слід дуже акуратно пильнувати!
//#define ALLOW_CBRK_TO_RETURN_LESS_MEMORY_THAN_REQUESTED

#endif
