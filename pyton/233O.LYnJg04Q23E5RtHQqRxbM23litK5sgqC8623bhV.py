
        
            # Check chardet for compatibility.
    major, minor, patch = chardet_version.split('.')[:3]
    major, minor, patch = int(major), int(minor), int(patch)
    # chardet >= 3.0.2, < 3.1.0
    assert major == 3
    assert minor < 1
    assert patch >= 2
    
        def build_response(self, req, resp):
        '''Builds a :class:`Response <requests.Response>` object from a urllib3
        response. This should not be called from user code, and is only exposed
        for use when subclassing the
        :class:`HTTPAdapter <requests.adapters.HTTPAdapter>`
    
            cnonce = (hashlib.sha1(s).hexdigest()[:16])
        if _algorithm == 'MD5-SESS':
            HA1 = hash_utf8('%s:%s:%s' % (HA1, nonce, cnonce))
    
    ``response``:
    The response generated from a Request.
'''
HOOKS = ['response']
    
    import sys
    
        def test_basic_response(self):
        '''the basic response server returns an empty http response'''
        with Server.basic_response_server() as (host, port):
            r = requests.get('http://{}:{}'.format(host, port))
            assert r.status_code == 200
            assert r.text == u''
            assert r.headers['Content-Length'] == '0'
    
    _init()

    
            certfile = os.path.join(CertUtil.ca_certdir, commonname + '.crt')
        with open(certfile, 'wb') as fp:
            fp.write(OpenSSL.crypto.dump_certificate(OpenSSL.crypto.FILETYPE_PEM, cert))
            if CertUtil.cert_publickey is None:
                fp.write(OpenSSL.crypto.dump_privatekey(OpenSSL.crypto.FILETYPE_PEM, pkey))
        return certfile
    
            self.in_fd = open('ipv6_list.txt', 'r')
        self.out_fd = open(
            os.path.join(module_data_path, 'ipv6_list.txt'),
            'w'
        )
    
        fetchmethod = getattr(urlfetch, method, None)
    if not fetchmethod:
        start_response('405 Method Not Allowed', [('Content-Type', 'text/html')])
        yield message_html('405 Method Not Allowed', 'Method Not Allowed: %r' % method, detail='Method Not Allowed URL=%r' % url)
        raise StopIteration
    
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
# end[licensc]
    
        __str__ = toString
    
            Using setter/getter methods is deprecated. Use o.line instead.'''
    
      if (Search(r'\b([A-Za-z0-9_]*_)\(\1\)', line) or
      Search(r'\b([A-Za-z0-9_]*_)\(CHECK_NOTNULL\(\1\)\)', line)):
    error(filename, linenum, 'runtime/init', 4,
          'You seem to be initializing a member variable with itself.')
    
        for operating_sys in oslist: