//	error.hpp

#if !defined(ERROR_HPP)
#define ERROR_HPP

void	EarlyEnd();
void	Error(const char* parms, ...);
void	Fatal(const char* parms, ...);
void	Info(const char* parms, ...);
void	output(const char* fmt, ...);
void	Severe(const char* parms, ...);
void	Warning(const char* parms, ...);
void	Panic(const char* parms, ...);

extern int	errors;
extern int	warnings;

#endif

