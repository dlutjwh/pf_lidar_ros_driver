#ifndef PF_DATA_PARSER_H
#define PF_DATA_PARSER_H

#include <string>

class DataParser
{
public:
  virtual void parse_data(std::basic_string<u_char> buffer) = 0;

protected:
  // PacketHeader *p_header;
};

#endif
