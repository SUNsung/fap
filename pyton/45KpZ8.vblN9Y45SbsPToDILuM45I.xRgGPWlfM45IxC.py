
        
                    # report after inserting so AW sees the token in the exception
            self.reportError(e)
            return inserted
    
    # begin[licence]
#
# [The 'BSD licence']
# Copyright (c) 2005-2008 Terence Parr
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
# 1. Redistributions of source code must retain the above copyright
#    notice, this list of conditions and the following disclaimer.
# 2. Redistributions in binary form must reproduce the above copyright
#    notice, this list of conditions and the following disclaimer in the
#    documentation and/or other materials provided with the distribution.
# 3. The name of the author may not be used to endorse or promote products
#    derived from this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
# IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
# OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
# IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
# INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
# NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
# DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
# THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
# THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
#
# end[licence]
    
    - tree.CommonTreeNodeStream: A basic and most commonly used tree.TreeNodeStream
  implementation.
    
        def cancel(self):
        '''Cancel the future if possible.
    
        # For pickling to work, the __module__ variable needs to be set to the frame
    # where the named tuple is created.  Bypass this step in enviroments where
    # sys._getframe is not defined (Jython for example).
    if hasattr(_sys, '_getframe'):
        result.__module__ = _sys._getframe(1).f_globals.get('__name__', '__main__')
    
    class _WorkItem(object):
    def __init__(self, future, fn, args, kwargs):
        self.future = future
        self.fn = fn
        self.args = args
        self.kwargs = kwargs
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
      # Ensure that we applied the replacement correctly
  eq_( result_buffer.GetLines(), [
    'replacementline2',
    'line3',
  ] )
    
        IOLoop.instance().add_callback(run_tests)
    
    
class MessageNewHandler(tornado.web.RequestHandler):
    '''Post a new message to the chat room.'''
    def post(self):
        message = {
            'id': str(uuid.uuid4()),
            'body': self.get_argument('body'),
        }
        # render_string() returns a byte string, which is not supported
        # in json, so we must convert it to a character string.
        message['html'] = tornado.escape.to_unicode(
            self.render_string('message.html', message=message))
        if self.get_argument('next', None):
            self.redirect(self.get_argument('next'))
        else:
            self.write(message)
        global_message_buffer.add_message(message)
    
    
if __name__ == '__main__':
    main()

    
        logging.warning('Starting fetch with simple client')
    simple_client = SimpleAsyncHTTPClient()
    simple_client.fetch('http://localhost:%d/' % options.port,
                        callback=callback)
    IOLoop.current().start()
    
    
@gen.coroutine
def c1():
    for i in range(10):
        yield c2()