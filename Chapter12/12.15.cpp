/*
Rewrite the first exercise to use a lambda (§ 10.3.2, p. 388) in place of
the end_connection function.
*/

#include <memory>

struct destination; // represents what we are connecting to
struct connection; // information needed to use the connection
connection connect(destination*); // open the connection
void disconnect(connection); // close the given connection
void end_connection(connection *p) { disconnect(*p); }
void f(destination &d /* other parameters */)
{
connection c = connect(&d);
std::shared_ptr<connection> p(&c, [](connection *p){
        // Do whatever end_connection did
    }
);
// use the connection
// when f exits, even if by an exception, the connection will be properly closed
}