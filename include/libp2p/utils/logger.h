#pragma once

#define LOGLEVEL_NONE 0
#define LOGLEVEL_CRITICAL 1
#define LOGLEVEL_ERROR 2
#define LOGLEVEL_INFO 3
#define LOGLEVEL_DEBUG 4
#define LOGLEVEL_VERBOSE 5

#define CURRENT_LOGLEVEL LOGLEVEL_DEBUG


/***
 * Add a class to watch for logging messages
 * @param str the class name to watch
 */
void libp2p_logger_add_class(const char* str);

/**
 * Initialize the logger. This should be done only once.
 */
void libp2p_logger_init(void);

/***
 * Checks to see if the logger has been initialized
 */
int libp2p_logger_initialized(void);

int libp2p_logger_free(void);

/***
 * Checks to see if we're watching for a particular class
 * @param area the "class" to look for
 * @returns true(1) if found, false(0) otherwise
 */
int libp2p_logger_watching_class(const char* area);

/**
 * Log a message to the console
 * @param area the class it is coming from
 * @param log_level logger level
 * @param format the logging string
 * @param ... params
 */
void libp2p_logger_log(const char* area, int log_level, const char* format, ...);

/**
 * Log a debug message to the console
 * @param area the class it is coming from
 * @param format the logging string
 * @param ... params
 */
void libp2p_logger_debug(const char* area, const char* format, ...);

/**
 * Log an error message to the console
 * @param area the class it is coming from
 * @param format the logging string
 * @param ... params
 */
void libp2p_logger_error(const char* area, const char* format, ...);

/**
 * Log an info message to the console
 * @param area the class it is coming from
 * @param format the logging string
 * @param ... params
 */
void libp2p_logger_info(const char* area, const char* format, ...);

