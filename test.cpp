#include "test_proto.pb.h"
#include "boost/chrono.hpp"

int main(int argc, char const * argv[]) {
	
  protobuf_not_included::TestProto testProto;
  boost::chrono::millseconds ms(100);
  return 0;
}