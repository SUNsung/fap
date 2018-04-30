
        
        
def side_effect(old_cmd, command):
    with tarfile.TarFile(_tar_file(old_cmd.script_parts)[0]) as archive:
        for file in archive.getnames():
            try:
                os.remove(file)
            except OSError:
                # does not try to remove directories as we cannot know if they
                # already existed before
                pass

    
    
def to_native_string(string, encoding='ascii'):
    '''Given a string object, regardless of type, returns a representation of
    that string in the native string type, encoding and decoding where
    necessary. This assumes ASCII unless told otherwise.
    '''
    if isinstance(string, builtin_str):
        out = string
    else:
        if is_py2:
            out = string.encode(encoding)
        else:
            out = string.decode(encoding)
    
            with server as address:
            sock = socket.socket()
            sock.connect(address)
            time.sleep(1.5)
            sock.sendall(data)
            sock.close()
    
            # If response is not 4xx, do not auth
        # See https://github.com/requests/requests/issues/3772
        if not 400 <= r.status_code < 500:
            self._thread_local.num_401_calls = 1
            return r
    
    
def test_idna_with_version_attribute(mocker):
    '''Verify we're actually setting idna version when it should be available.'''
    mocker.patch('requests.help.idna', new=VersionedPackage('2.6'))
    assert info()['idna'] == {'version': '2.6'}

    
    
def get_from_rhc_config(variable):
    global configparser
    CONF_FILE = os.path.expanduser('~/.openshift/express.conf')
    if os.path.exists(CONF_FILE):
        if not configparser:
            ini_str = '[root]\n' + open(CONF_FILE, 'r').read()
            configparser = ConfigParser.SafeConfigParser()
            configparser.readfp(StringIO.StringIO(ini_str))
        try:
            return configparser.get('root', variable)
        except ConfigParser.NoOptionError:
            return None
    
    
def md5(filename):
    if not _md5:
        raise ValueError('MD5 not available.  Possibly running in FIPS mode')
    return secure_hash(filename, _md5)

    
    
def get_api_key():
    '''
    rtype: str
    '''
    key = os.environ.get('SHIPPABLE_KEY', None)
    
        @g_connect
    def remove_secret(self, secret_id):
        url = '%s/notification_secrets/%s/' % (self.baseurl, secret_id)
        data = self.__call_galaxy(url, headers=self.__auth_header(), method='DELETE')
        return data
    
        terminal_length = os.getenv('ANSIBLE_VYOS_TERMINAL_LENGTH', 10000)
    
            #out = subprocess.check_output(cmd, startupinfo=startupinfo)
        process = subprocess.Popen(cmd, stdout=subprocess.PIPE, startupinfo=startupinfo)
        out, unused_err = process.communicate()
        retcode = process.poll()
        if retcode:
            return out + '\n retcode:%s\n unused_err:%s\n' % (retcode, unused_err)
    except Exception as e:
        out = 'Exception:%r' % e
    
    
def inet_ntop(address_family, packed_ip):
    addr = sockaddr()
    addr.sa_family = address_family
    addr_size = ctypes.c_int(ctypes.sizeof(addr))
    ip_string = ctypes.create_string_buffer(128)
    ip_string_size = ctypes.c_int(ctypes.sizeof(ip_string))
    
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
    
    
    def getKindOfOps(self, rewrites, kind, before=None):
        if before is None:
            before = len(rewrites)
        elif before > len(rewrites):
            before = len(rewrites)
    
    EOF_TOKEN = CommonToken(type=EOF)
	
INVALID_TOKEN = CommonToken(type=INVALID_TOKEN_TYPE)
    
    A tree.TreeAdaptor is used by the parser to create tree.Tree objects for the
input Token objects.
    
        '''