# rpcgen
This project answer the following question

Using RPCGen tool for C and C++, create client and server processes that communicate using Remote Procedure Calls.
Create three remote procedures that perform anything you wish. But those procedures must accept and return parameters as follows:

- Procedure 1, accepts an integer and returns an integer
- Procedure 2, accepts an integer and string and returns a floating point
- Procedure 3, accepts an integer by reference and returns a string


To run above program use the following commands
   >>     rpcgen -N hezron.x
   >>     gcc -o Server server.c hezron_svc.c hezron_xdr.c
   >>     gcc -o Clent client.c hezron_clnt.c hezron_xdr.c
   >>     ./Server
   >>     ./Client localhost
