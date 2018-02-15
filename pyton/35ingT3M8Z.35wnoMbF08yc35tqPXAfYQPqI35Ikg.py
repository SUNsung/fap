
class Environment(object):
    '''
    Information about the execution context
    (standard streams, config directory, etc).
    
        @property
    def content_type(self):
        '''Return the message content type.'''
        ct = self._orig.headers.get('Content-Type', '')
        if not isinstance(ct, str):
            ct = ct.decode('utf8')
        return ct
    
            See https://github.com/jakubroztocil/httpie/issues/212
    
        def get_formatters_grouped(self):
        groups = {}
        for group_name, group in groupby(
                self.get_formatters(),
                key=lambda p: getattr(p, 'group_name', 'format')):
            groups[group_name] = list(group)
        return groups
    
    _key = 'landscape'
    
    try:
    import json
except ImportError:
    import simplejson as json
    
    
def extract_contents(args, path, output_dir):
    '''
    :type args: any
    :type path: str
    :type output_dir: str
    '''
    if not args.test:
        if not os.path.exists(path):
            return
    
        return (host, port)

    
            self.roles = {}
    
        @g_connect
    def delete_role(self, github_user, github_repo):
        url = '%s/removerole/?github_user=%s&github_repo=%s' % (self.baseurl, github_user, github_repo)
        data = self.__call_galaxy(url, headers=self.__auth_header(), method='DELETE')
        return data

    
    current_path = os.path.dirname(os.path.abspath(__file__))
root_path = os.path.abspath(os.path.join(current_path, os.pardir, os.pardir, os.pardir))
data_path = os.path.abspath(os.path.join(root_path, os.pardir, os.pardir, 'data', 'gae_proxy'))
if not os.path.isdir(data_path):
    data_path = current_path
    
    
def win32_version_string():
    import ctypes
    class OSVERSIONINFOEXW(ctypes.Structure):
        _fields_ = [('dwOSVersionInfoSize', ctypes.c_ulong),
                    ('dwMajorVersion', ctypes.c_ulong),
                    ('dwMinorVersion', ctypes.c_ulong),
                    ('dwBuildNumber', ctypes.c_ulong),
                    ('dwPlatformId', ctypes.c_ulong),
                    ('szCSDVersion', ctypes.c_wchar*128),
                    ('wServicePackMajor', ctypes.c_ushort),
                    ('wServicePackMinor', ctypes.c_ushort),
                    ('wSuiteMask', ctypes.c_ushort),
                    ('wProductType', ctypes.c_byte),
                    ('wReserved', ctypes.c_byte)]
    '''
    Get's the OS major and minor versions.  Returns a tuple of
    (OS_MAJOR, OS_MINOR).
    '''
    os_version = OSVERSIONINFOEXW()
    os_version.dwOSVersionInfoSize = ctypes.sizeof(os_version)
    retcode = ctypes.windll.Ntdll.RtlGetVersion(ctypes.byref(os_version))
    if retcode != 0:
        raise Exception('Failed to get OS version')
    
    
    
    	# Track the line at which the error occurred in case this is
	# generated from a lexer.  We need to track this since the
        # unexpected char doesn't carry the line info.
        self.line = None
    
            if self._state is None:
            # no shared state work to do
            return
        
        # wack Lexer state variables
        self._state.token = None
        self._state.type = INVALID_TOKEN_TYPE
        self._state.channel = DEFAULT_CHANNEL
        self._state.tokenStartCharIndex = -1
        self._state.tokenStartLine = -1
        self._state.tokenStartCharPositionInLine = -1
        self._state.text = None
    
    __all__ = ['kugou_download']
    
        for i in range(10, 30):
        url = 'https://stream{i}.mixcloud.com/c/m4a/64{p}.m4a'.format(
            i = i,
            p = preview
        )
        try:
            mime, ext, size = url_info(url)
            break
        except: continue
    
    
def is_code(line, indent_depth = 4):
    '''returns the indent depth, 0 means not code in markup'''
    if line.startswith(' ' * indent_depth):
        return len(line) - len(line.lstrip(' '))
    return 0