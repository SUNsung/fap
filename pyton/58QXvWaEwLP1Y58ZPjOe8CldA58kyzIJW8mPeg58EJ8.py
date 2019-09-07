
        
        
if __name__ == '__main__':
    main()

    
        if len(sys.argv) > 1:
        ip = sys.argv[1]
    else:
        ip = '46.134.208.94'
        ip = '2001:ee0:3203:a::12'
        print('Usage: check_ip.py [ip] [top_domain] [wait_time=0]')
    print('test ip:%s' % ip)
    
            raise NotImplementedError
    
    
# @DEPRECATED
def get_timestamp():
    tn = random.random()
    url = 'http://api.letv.com/time?tn={}'.format(tn)
    result = get_content(url)
    return json.loads(result)['stime']
    
            link_list = []
    
    from ..common import *
from ..extractor import VideoExtractor
import xml.etree.ElementTree as ET
    
    __all__ = ['cbs_download']
    
    site_info = 'CNTV.com'
download = cntv_download
download_playlist = playlist_not_supported('cntv')

    
    	for video in tab.childNodes:
		if re.search(contentid, video.attributes['link'].value):
			url = video.attributes['flv'].value
			break
    
        print_info(site_info, title, type, size)
    if not info_only:
        download_urls(url, title, ext, size, output_dir, merge=False)
    
            self.check_tokenize('class async(Bar):pass', '''\
    NAME       'class'       (1, 0) (1, 5)
    NAME       'async'       (1, 6) (1, 11)
    OP         '('           (1, 11) (1, 12)
    NAME       'Bar'         (1, 12) (1, 15)
    OP         ')'           (1, 15) (1, 16)
    OP         ':'           (1, 16) (1, 17)
    NAME       'pass'        (1, 17) (1, 21)
    ''')
    
    
ALT_IMPORT_MAPPING = {
    ('_elementtree', 'xml.etree.ElementTree'),
    ('cPickle', 'pickle'),
    ('StringIO', 'io'),
    ('cStringIO', 'io'),
}
    
            vers = getFullVersion()
        major, minor = getVersionMajorMinor()
        pl = Plist(
                CFBundleGetInfoString='Python.%s %s'%(pkgname, vers,),
                CFBundleIdentifier='org.python.Python.%s'%(pkgname,),
                CFBundleName='Python.%s'%(pkgname,),
                CFBundleShortVersionString=vers,
                IFMajorVersion=major,
                IFMinorVersion=minor,
                IFPkgFormatVersion=0.10000000149011612,
                IFPkgFlagAllowBackRev=False,
                IFPkgFlagAuthorizationAction='RootAuthorization',
                IFPkgFlagDefaultLocation=pkgroot,
                IFPkgFlagFollowLinks=True,
                IFPkgFlagInstallFat=True,
                IFPkgFlagIsRequired=isRequired,
                IFPkgFlagOverwritePermissions=False,
                IFPkgFlagRelocatable=False,
                IFPkgFlagRestartAction='NoRestart',
                IFPkgFlagRootVolumeOnly=True,
                IFPkgFlagUpdateInstalledLangauges=False,
            )
        writePlist(pl, os.path.join(packageContents, 'Info.plist'))
    
                last = i == last_index
            self._format(ent, stream, indent + len(key) + 1,
                         allowance if last else 1,
                         context, level)
            if not last:
                stream.write(delimnl)
        stream.write(')')
    
        @unittest.skipUnless(hasattr(posix, 'preadv'), 'test needs posix.preadv()')
    @unittest.skipUnless(hasattr(posix, 'RWF_HIPRI'), 'test needs posix.RWF_HIPRI')
    def test_preadv_flags(self):
        fd = os.open(support.TESTFN, os.O_RDWR | os.O_CREAT)
        try:
            os.write(fd, b'test1tt2t3t5t6t6t8')
            buf = [bytearray(i) for i in [5, 3, 2]]
            self.assertEqual(posix.preadv(fd, buf, 3, os.RWF_HIPRI), 10)
            self.assertEqual([b't1tt2', b't3t', b'5t'], list(buf))
        except NotImplementedError:
            self.skipTest('preadv2 not available')
        except OSError as inst:
            # Is possible that the macro RWF_HIPRI was defined at compilation time
            # but the option is not supported by the kernel or the runtime libc shared
            # library.
            if inst.errno in {errno.EINVAL, errno.ENOTSUP}:
                raise unittest.SkipTest('RWF_HIPRI is not supported by the current system')
            else:
                raise
        finally:
            os.close(fd)
    
        The returned instance will have attributes args, returncode, stdout and
    stderr. By default, stdout and stderr are not captured, and those attributes
    will be None. Pass stdout=PIPE and/or stderr=PIPE in order to capture them.
    
        'cmd' is just the argument list for the new process, ie.
    cmd[0] is the program to run and cmd[1:] are the rest of its arguments.
    There is no way to run a program with a name different from that of its
    executable.
    
        # Pre-allocate to ensure that the loop doesn't allocate anything new
    rep_range = list(range(repcount))
    rc_deltas = [0] * repcount
    alloc_deltas = [0] * repcount
    fd_deltas = [0] * repcount
    getallocatedblocks = sys.getallocatedblocks
    gettotalrefcount = sys.gettotalrefcount
    fd_count = support.fd_count