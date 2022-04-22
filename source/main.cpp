#include "Person.h"

int main( int argc, char* argv[] )
{
  Rex::Person Person1;
  
  Person1.ShowInfo();

  Person1.SetName( "Parker Yang" );
  Person1.SetAge( 28 );

  Person1.ShowInfo();

  Rex::Person Person2( "Rex Liu", 32 );

  Person2.ShowInfo();

  return 0;
}