
        
        versions_info['signature'] = signature
with open('update/versions.json', 'w') as versionsf:
    json.dump(versions_info, versionsf, indent=4, sort_keys=True)

    
    
def main():
    with open('supportedsites.html.in', 'r', encoding='utf-8') as tmplf:
        template = tmplf.read()
    
    
def filter_options(readme):
    ret = ''
    in_options = False
    for line in readme.split('\n'):
        if line.startswith('# '):
            if line[2:].startswith('OPTIONS'):
                in_options = True
            else:
                in_options = False
    
        if not releases:
        break
    
    # The suffix of source filenames.
source_suffix = '.rst'
    
    
def _is_empty(d):
    return not bool(os.listdir(d))
    
        # close and remove the temporary database
    os.close(db_fd)
    os.unlink(db_path)
    
            :param name: the optional name of the filter, otherwise the
                     function name will be used.
        '''
        def decorator(f):
            self.add_app_template_filter(f, name=name)
            return f
        return decorator
    
                app.config['IMAGE_STORE_TYPE'] = 'fs'
            app.config['IMAGE_STORE_PATH'] = '/var/app/images'
            app.config['IMAGE_STORE_BASE_URL'] = 'http://img.website.com'
            image_store_config = app.config.get_namespace('IMAGE_STORE_')
    
        def get_cookie_secure(self, app):
        '''Returns True if the cookie should be secure.  This currently
        just returns the value of the ``SESSION_COOKIE_SECURE`` setting.
        '''
        return app.config['SESSION_COOKIE_SECURE']
    
        def state_forwards(self, app_label, state):
        pass
    
    KEY_PREFIX = 'django.contrib.sessions.cached_db'
    
    
@x_robots_tag
def index(request, sitemaps,
          template_name='sitemap_index.xml', content_type='application/xml',
          sitemap_url_name='django.contrib.sitemaps.views.sitemap'):
    
            try:
            create_file(filename)
            self.assertIs(self.pathmodule.isfile(filename), True)
            self.assertIs(self.pathmodule.isfile(bfilename), True)
        finally:
            support.unlink(filename)
    
            self.assertEqual(posixpath.join(b'/foo', b'bar', b'/bar', b'baz'),
                         b'/bar/baz')
        self.assertEqual(posixpath.join(b'/foo', b'bar', b'baz'),
                         b'/foo/bar/baz')
        self.assertEqual(posixpath.join(b'/foo/', b'bar/', b'baz/'),
                         b'/foo/bar/baz/')
    
        def run_xdev(self, *args, check_exitcode=True, xdev=True):
        env = dict(os.environ)
        env.pop('PYTHONWARNINGS', None)
        env.pop('PYTHONDEVMODE', None)
        env.pop('PYTHONMALLOC', None)
    
        def testReadMultiStream(self):
        self.createTempFile(streams=5)
        with BZ2File(self.filename) as bz2f:
            self.assertRaises(TypeError, bz2f.read, float())
            self.assertEqual(bz2f.read(), self.TEXT * 5)
    
    # Now add the related image to the html part.
with open('roasted-asparagus.jpg', 'rb') as img:
    msg.get_payload()[1].add_related(img.read(), 'image', 'jpeg',
                                     cid=asparagus_cid)
    
    
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
    
    # If we want to print a preview of the message content, we can extract whatever
# the least formatted payload is and print the first three lines.  Of course,
# if the message has no plain text part printing the first three lines of html
# is probably useless, but this is just a conceptual example.
simplest = msg.get_body(preferencelist=('plain', 'html'))
print()
print(''.join(simplest.get_content().splitlines(keepends=True)[:3]))
    
    ##
    
    def noop(x):
    pass