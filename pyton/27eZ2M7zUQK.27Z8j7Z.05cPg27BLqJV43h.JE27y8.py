
        
            def __set__(self, obj, value):
        obj.config[self.__name__] = value
    
    
def create_logger(app):
    '''Get the ``'flask.app'`` logger and configure it if needed.
    
            # chop off the port which is usually not supported by browsers
        # remove any leading '.' since we'll add that later
        rv = rv.rsplit(':', 1)[0].lstrip('.')
    
            if cls.decorators:
            view.__name__ = name
            view.__module__ = cls.__module__
            for decorator in cls.decorators:
                view = decorator(view)
    
        try:
        with app.test_request_context('/', environ_overrides={'HTTP_HOST': 'localhost'}):
            pass
    except ValueError as e:
        assert str(e) == (
            'the server name provided '
            '('localhost.localdomain:5000') does not match the '
            'server name from the WSGI environment ('localhost')'
        )
    
    
def write_with_harness(codefile, sourcefile, start_linenum, linebuffer):
    '''write output with additional lines to make code likely compilable'''
    # add commonly used headers, so that lines can likely compile.
    # This is work in progress, the main issue remains handling class
    # declarations in in-function code differently
    with io.open(codefile, 'w') as code_filehandle:
        code_filehandle.write('''\
#include<stdio.h>      // by md-split
#include<stdlib.h>     // by md-split
#include<tuple>        // by md-split
#include<utility>      // by md-split
#include<limits>       // by md-split
#include<functional>   // by md-split
#include<string>       // by md-split
#include<map>          // by md-split
#include<iostream>     // by md-split
#include<vector>       // by md-split
#include<algorithm>    // by md-split
#include<memory>       // by md-split
using namespace std;   // by md-split
// %s : %s
''' % (sourcefile, start_linenum))
        # TODO: if not toplevel code, wrap inside class
        for codeline in linebuffer:
            code_filehandle.write(codeline)