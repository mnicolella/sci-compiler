// listing.hpp

#if !defined(LISTING_HPP)
#define LISTING_HPP

void	OpenListFile(const char* sourceFileName);
void	CloseListFile();
void	DeleteListFile();
void	Listing(const char*, ...);
void	ListOp(Bool);
void	ListArg(const char*, ...);
void	ListAsCode(const char*, ...);
void	ListWord(uword);
void	ListByte(ubyte);
void	ListOffset();
void	ListText(char*);
void	ListingNoCRLF(const char* parms, ...);
void	ListSourceLine(int num);

extern Bool	listCode;

#endif
