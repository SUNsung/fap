
        
            def delete(self, session_key=None):
        '''
        To delete, clear the session key and the underlying data structure
        and set the modified flag so that the cookie is set on the client for
        the current request.
        '''
        self._session_key = ''
        self._session_cache = {}
        self.modified = True
    
        dispatch = {
        'call': trace_call,
        'exception': trace_exception,
        'return': trace_return,
        'c_call': trace_pass,
        'c_return': trace_pass,
        'c_exception': trace_pass,
        }
    
    
def main():
    parser = ArgumentParser(description='''\
Send the contents of a directory as a MIME message.
Unless the -o option is given, the email is sent by forwarding to your local
SMTP server, which then does the normal delivery process.  Your local machine
must be running an SMTP server.
''')
    parser.add_argument('-d', '--directory',
                        help='''Mail the contents of the specified directory,
                        otherwise use the current directory.  Only the regular
                        files in the directory are sent, and we don't recurse to
                        subdirectories.''')
    parser.add_argument('-o', '--output',
                        metavar='FILE',
                        help='''Print the composed message to FILE instead of
                        sending the message to the SMTP server.''')
    parser.add_argument('-s', '--sender', required=True,
                        help='The value of the From: header (required)')
    parser.add_argument('-r', '--recipient', required=True,
                        action='append', metavar='RECIPIENT',
                        default=[], dest='recipients',
                        help='A To: header value (at least one required)')
    args = parser.parse_args()
    directory = args.directory
    if not directory:
        directory = '.'
    # Create the message
    msg = EmailMessage()
    msg['Subject'] = 'Contents of directory %s' % os.path.abspath(directory)
    msg['To'] = ', '.join(args.recipients)
    msg['From'] = args.sender
    msg.preamble = 'You will not see this in a MIME-aware mail reader.\n'
    
        theplatform_download_by_pid(pid, title, output_dir=output_dir, merge=merge, info_only=info_only)
    
            #type_, ext, size = url_info(url)
        #print_info(site_info, title, type_, size)
        #if not info_only:
            #download_urls([url], title, ext, total_size=None, output_dir=output_dir, merge=merge)
    
    
'''
http://open.iqiyi.com/lib/player.html
'''
iqiyi_patterns = [r'(?:\'|\')(https?://dispatcher\.video\.qiyi\.com\/disp\/shareplayer\.swf\?.+?)(?:\'|\')',
                  r'(?:\'|\')(https?://open\.iqiyi\.com\/developer\/player_js\/coopPlayerIndex\.html\?.+?)(?:\'|\')']
    
        title = match1(html, r'&title=([^&]+)')
    
            page = get_content(url)
        src = re.findall(r'src='(.+?)'', page)
        js = [path for path in src if path.endswith('.js')]
    
    site_info = 'Giphy.com'
download = giphy_download
download_playlist = playlist_not_supported('giphy')

    
    
if __name__ == '__main__':
    # Create our localizers
    e, g = get_localizer(language='English'), get_localizer(language='Greek')
    # Localize some text
    for msgid in 'dog parrot cat bear'.split():
        print(e.get(msgid), g.get(msgid))
    
    *TL;DR80
Allows object composition to achieve the same code reuse as inheritance.
'''
    
        def __init__(self, param):
        # simple test to validate param value
        if param in self._class_method_choices:
            self.param = param
        else:
            raise ValueError('Invalid Value for Param: {0}'.format(param))
    
        def undo(self):
        self.rename(self.dest, self.src)
    
    
def execute_replacement2(self):
    print(self.name + ' from execute 2')
    
    '''
Lazily-evaluated property pattern in Python.
    
    
class UnsupportedTransition(BaseException):
    pass