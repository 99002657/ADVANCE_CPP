#include "Contact.h"
#include "Address.h"
#include <gtest/gtest.h>
namespace {

class custTest : public ::testing::Test {

protected:
  void SetUp()
  {
    book.addContact("shivani", "khamitkar", "9845012345", "9845012345");
    book.addContact("shiv", "joshi", "9845012346", "9845012345");
    book.addContact("raju", "shah", "9845012347", "9845012345");
    book.addContact("shekar", "jk", "9845012348", "9845012345");
    book.addContact("adi", "kulkarni", "9845012349", "9845012345");
    book.addContact("pooja", "paul", "9845012340", "9845012345");
  }
  void TearDown() {}
  Address book;
};

TEST_F(custTest, AddCustomerTest) {
  //book.addContact(1009, "John", "9845012350", 100);
  EXPECT_EQ("pooja", book.findcontactprimarynumber("9845012340"));
  //EXPECT_EQ("shiv", book.allcontactswithmatchingname("joshi"));
}


}
int main(int argc, char **argv) 
    {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    }// namespace
