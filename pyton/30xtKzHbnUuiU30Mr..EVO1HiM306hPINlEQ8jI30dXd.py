    def test_get_sni_addr(self):
        from certbot_apache.obj import Addr
        self.assertEqual(
            self.addr.get_sni_addr('443'), Addr.fromstring('*:443'))
        self.assertEqual(
            self.addr.get_sni_addr('225'), Addr.fromstring('*:225'))
        self.assertEqual(
            self.addr1.get_sni_addr('443'), Addr.fromstring('127.0.0.1'))
    
    # One entry per manual page. List of tuples
# (source start file, name, description, authors, manual section).
man_pages = [
    (master_doc, 'certbot-apache', u'certbot-apache Documentation',
     [author], 1)
]
    
    # List of patterns, relative to source directory, that match files and
# directories to ignore when looking for source files.
exclude_patterns = ['_build']
    
    def os_detail():
    if sys.platform == 'win32':
        return win32_version_string()
    elif sys.platform.startswith('linux'):
        distname,version,id = platform.linux_distribution()
        return 'Dist:%s; Version:%s; ID:%s' % (distname,version,id)
    elif sys.platform == 'darwin':
        release, versioninfo, machine = platform.mac_ver()
        return 'Release:%s; Version:%s Machine:%s' % (release, versioninfo, machine)
    else:
        return 'None'

    
    scan_ip_log = Scan_ip_log()
    
    
@section Exceptions
    
        author = proj_info['author'],
    author_email = proj_info['author_email'],
    url = proj_info['url'],
    license = proj_info['license'],
    
    def cbs_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    '''Downloads CBS videos by URL.
    '''
    
    from ..common import *
    
    LIMIT = 100