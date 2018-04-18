
        
                with server as address:
            sock = socket.socket()
            sock.connect(address)
            time.sleep(1.5)
            sock.sendall(b'hehehe, not received')
            sock.close()
    
        # Redirection.
    300: ('multiple_choices',),
    301: ('moved_permanently', 'moved', '\\o-'),
    302: ('found',),
    303: ('see_other', 'other'),
    304: ('not_modified',),
    305: ('use_proxy',),
    306: ('switch_proxy',),
    307: ('temporary_redirect', 'temporary_moved', 'temporary'),
    308: ('permanent_redirect',
          'resume_incomplete', 'resume',),  # These 2 to be removed in 3.0
    
        kwargs = {
        var: proxy
    }
    scheme = urlparse(url).scheme
    with override_environ(**kwargs):
        proxies = session.rebuild_proxies(prep, {})
        assert scheme in proxies
        assert proxies[scheme] == proxy
    
    
def best_server():
    # TODO: find and use the best server
    # teredo.remlab.net / teredo - debian.remlab.net(Germany)
    # teredo.ngix.ne.kr(South Korea)
    # teredo.managemydedi.com(USA, Chicago)
    # teredo.trex.fi(Finland)
    # win8.ipv6.microsoft.com(The Teredo server hidden in Windows RT 8.1) of which Windows 7 has no knowledge.
    # win10.ipv6.microsoft.com
    return 'teredo.remlab.net'
    
    if hasattr(ctypes, 'windll'):
    WSAStringToAddressA = ctypes.windll.ws2_32.WSAStringToAddressA
    WSAAddressToStringA = ctypes.windll.ws2_32.WSAAddressToStringA
else:
    def not_windows():
        raise SystemError(
            'Invalid platform. ctypes.windll must be available.'
        )
    WSAStringToAddressA = not_windows
    WSAAddressToStringA = not_windows
    
    	# The current Token when an error occurred.  Since not all streams
	# can retrieve the ith Token, we have to track the Token object.
	# For parsers.  Even when it's a tree parser, token might be set.
        self.token = None
    
    A Lexer emits Token objects which are usually buffered by a TokenStream. A
Parser can build a Tree, if the output=AST option has been set in the grammar.
    
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
    
                    if c >= self.min[s] and c <= self.max[s]:
                    # move to next state
                    snext = self.transition[s][c-self.min[s]]
                    #print 'in range, next state = %d' % snext