
        
            def create_asset(self, release_id, asset):
        asset_name = os.path.basename(asset)
        url = self._UPLOADS_URL % (release_id, asset_name)
        # Our files are small enough to be loaded directly into memory.
        data = open(asset, 'rb').read()
        req = sanitized_Request(url, data)
        mime_type, _ = mimetypes.guess_type(asset_name)
        req.add_header('Content-Type', mime_type or 'application/octet-stream')
        return self._call(req)
    
    options = helptext[helptext.index('  General Options:') + 19:]
options = re.sub(r'(?m)^  (\w.+)$', r'## \1', options)
options = '# OPTIONS\n' + options + '\n'
    
    import io
import optparse
import os
import sys
    
    
def build_completion(opt_parser):
    opts = [opt for group in opt_parser.option_groups
            for opt in group.option_list]
    opts_file = [opt for opt in opts if opt.metavar == 'FILE']
    opts_dir = [opt for opt in opts if opt.metavar == 'DIR']
    
    # Output file base name for HTML help builder.
htmlhelp_basename = 'youtube-dldoc'

    
        classifiers=[
        'Topic :: Multimedia :: Video',
        'Development Status :: 5 - Production/Stable',
        'Environment :: Console',
        'License :: Public Domain',
        'Programming Language :: Python :: 2.6',
        'Programming Language :: Python :: 2.7',
        'Programming Language :: Python :: 3',
        'Programming Language :: Python :: 3.2',
        'Programming Language :: Python :: 3.3',
        'Programming Language :: Python :: 3.4',
        'Programming Language :: Python :: 3.5',
        'Programming Language :: Python :: 3.6',
    ],
    
    
def expect_value(self, got, expected, field):
    if isinstance(expected, compat_str) and expected.startswith('re:'):
        match_str = expected[len('re:'):]
        match_rex = re.compile(match_str)
    
            ydl = YDL({'format': 'best[height>360]/bestvideo[height>360]+bestaudio'})
        ydl.process_ie_result(info_dict.copy())
        self.assertEqual(ydl.downloaded_info_dicts[0]['format_id'], 'video+audio')
    
        def test_no_duplicates(self):
        ies = gen_extractors()
        for tc in gettestcases(include_onlymatching=True):
            url = tc['url']
            for ie in ies:
                if type(ie).__name__ in ('GenericIE', tc['name'] + 'IE'):
                    self.assertTrue(ie.suitable(url), '%s should match URL %r' % (type(ie).__name__, url))
                else:
                    self.assertFalse(
                        ie.suitable(url),
                        '%s should not match URL %r . That URL belongs to %s.' % (type(ie).__name__, url, tc['name']))
    
    This module contains the set of Requests' exceptions.
'''
from urllib3.exceptions import HTTPError as BaseHTTPError
    
    from .__version__ import __title__, __description__, __url__, __version__
from .__version__ import __build__, __author__, __author_email__, __license__
from .__version__ import __copyright__, __cake__
    
    
class HTTPDigestAuth(AuthBase):
    '''Attaches HTTP Digest Authentication to the given Request object.'''
    
        value = value.strip(replace_chars)
    if not value:
        return links
    
        def digest_response_handler(sock):
        # Respond to initial GET with a challenge.
        request_content = consume_socket_content(sock, timeout=0.5)
        assert request_content.startswith(b'GET / HTTP/1.1')
        sock.send(text_401)
    
        result['changed'] = False
    module.exit_json(**result)
    
        module = AnsibleAWSModule(argument_spec=argument_spec, supports_check_mode=False, mutually_exclusive=[['distribution_id', 'alias']])
    
    
def get_elasticache_clusters(client, module, region):
    try:
        clusters = describe_cache_clusters_with_backoff(client, cluster_id=module.params.get('name'))
    except (botocore.exceptions.ClientError, botocore.exceptions.BotoCoreError) as e:
        module.fail_json_aws(e, msg='Couldn't obtain cache cluster info')
    
    EXAMPLES = '''
# Add or change a subnet group
- elasticache_subnet_group:
    state: present
    name: norwegian-blue
    description: My Fancy Ex Parrot Subnet Group
    subnets:
      - subnet-aaaaaaaa
      - subnet-bbbbbbbb
    
    
def cert_action(module, iam, name, cpath, new_name, new_path, state,
                cert, key, cert_chain, orig_cert_names, orig_cert_bodies, dup_ok):
    if state == 'present':
        update = dup_check(module, iam, name, new_name, cert, orig_cert_names,
                           orig_cert_bodies, dup_ok)
        if update:
            opath, ocert, ocert_id, upload_date, exp, arn = cert_meta(iam, name)
            changed = True
            if new_name and new_path:
                iam.update_server_cert(name, new_cert_name=new_name, new_path=new_path)
                module.exit_json(changed=changed, original_name=name, new_name=new_name,
                                 original_path=opath, new_path=new_path, cert_body=ocert,
                                 upload_date=upload_date, expiration_date=exp, arn=arn)
            elif new_name and not new_path:
                iam.update_server_cert(name, new_cert_name=new_name)
                module.exit_json(changed=changed, original_name=name, new_name=new_name,
                                 cert_path=opath, cert_body=ocert,
                                 upload_date=upload_date, expiration_date=exp, arn=arn)
            elif not new_name and new_path:
                iam.update_server_cert(name, new_path=new_path)
                module.exit_json(changed=changed, name=new_name,
                                 original_path=opath, new_path=new_path, cert_body=ocert,
                                 upload_date=upload_date, expiration_date=exp, arn=arn)
            else:
                changed = False
                module.exit_json(changed=changed, name=name, cert_path=opath, cert_body=ocert,
                                 upload_date=upload_date, expiration_date=exp, arn=arn,
                                 msg='No new path or name specified. No changes made')
        else:
            changed = True
            iam.upload_server_cert(name, cert, key, cert_chain=cert_chain, path=cpath)
            opath, ocert, ocert_id, upload_date, exp, arn = cert_meta(iam, name)
            module.exit_json(changed=changed, name=name, cert_path=opath, cert_body=ocert,
                             upload_date=upload_date, expiration_date=exp, arn=arn)
    elif state == 'absent':
        if name in orig_cert_names:
            changed = True
            iam.delete_server_cert(name)
            module.exit_json(changed=changed, deleted_cert=name)
        else:
            changed = False
            module.exit_json(changed=changed, msg='Certificate with the name %s already absent' % name)
    
        function_name = module.params.get('function_name')
    if function_name:
        lambda_facts[function_name] = {}
        lambda_facts[function_name].update(config_details(client, module)[function_name])
        lambda_facts[function_name].update(alias_details(client, module)[function_name])
        lambda_facts[function_name].update(policy_details(client, module)[function_name])
        lambda_facts[function_name].update(version_details(client, module)[function_name])
        lambda_facts[function_name].update(mapping_details(client, module)[function_name])
    else:
        lambda_facts.update(config_details(client, module))
    
    plot(euclidean_distances)
plot(rbf_kernels)
plt.show()

    
    
def get_pdf_size(version):
    api_url = ROOT_URL + '%s/_downloads' % version
    for path_details in json_urlread(api_url):
        if path_details['name'] == 'scikit-learn-docs.pdf':
            return human_readable_data_quantity(path_details['size'], 1000)
    
    try:
    from urllib import urlopen
except ImportError:
    from urllib.request import urlopen
    
    
class QPSSpider(Spider):
    
    def _print_header(settings, inproject):
    if inproject:
        print('Scrapy %s - project: %s\n' % (scrapy.__version__, \
            settings['BOT_NAME']))
    else:
        print('Scrapy %s - no active project\n' % scrapy.__version__)
    
        def run_callback(self, response, cb):
        items, requests = [], []
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('-a', dest='spargs', action='append', default=[], metavar='NAME=VALUE',
                          help='set spider argument (may be repeated)')
        parser.add_option('-o', '--output', metavar='FILE',
                          help='dump scraped items into FILE (use - for stdout)')
        parser.add_option('-t', '--output-format', metavar='FORMAT',
                          help='format to use for dumping items with -o')
    
    class Command(ScrapyCommand):
    
        from twisted.internet.ssl import (optionsForClientTLS,
                                      CertificateOptions,
                                      platformTrust)
    from twisted.web.client import BrowserLikePolicyForHTTPS
    from twisted.web.iweb import IPolicyForHTTPS
    
    import os, json, imp
here = os.path.abspath(os.path.dirname(__file__))
proj_info = json.loads(open(os.path.join(here, PROJ_METADATA), encoding='utf-8').read())
try:
    README = open(os.path.join(here, 'README.rst'), encoding='utf-8').read()
except:
    README = ''
CHANGELOG = open(os.path.join(here, 'CHANGELOG.rst'), encoding='utf-8').read()
VERSION = imp.load_source('version', os.path.join(here, 'src/%s/version.py' % PACKAGE_NAME)).__version__
    
        return yk_streams
    
    import urllib
    
                    ffmpeg.ffmpeg_concat_audio_and_video([loop_file_path, single_file_path], title + '_full', 'mp4')
                cleanup_files([video_file_path, audio_file_path, loop_file_path])
            except EnvironmentError as err:
                print('Error preparing full coub video. {}'.format(err))
    except Exception as err:
        print('Error while downloading files. {}'.format(err))
    
        for quality in ['1080','720','480','380','240','144','auto']:
        try:
            real_url = info[quality][1]['url']
            if real_url:
                break
        except KeyError:
            pass
    
    from ..common import *
    
    
def fantasy_download(url, output_dir = '.', merge = True, info_only = False, **kwargs):
    if 'fantasy.tv' not in url:
        raise Exception('Wrong place!')
    
    
def capture_events(callable, p=None):
    if p is None:
        p = HookWatcher()
    # Disable the garbage collector. This prevents __del__s from showing up in
    # traces.
    old_gc = gc.isenabled()
    gc.disable()
    try:
        sys.setprofile(p.callback)
        protect(callable, p)
        sys.setprofile(None)
    finally:
        if old_gc:
            gc.enable()
    return p.get_events()[1:-1]
    
    def _make_selector(pattern_parts):
    pat = pattern_parts[0]
    child_parts = pattern_parts[1:]
    if pat == '**':
        cls = _RecursiveWildcardSelector
    elif '**' in pat:
        raise ValueError('Invalid pattern: '**' can only be an entire path component')
    elif _is_wildcard_pattern(pat):
        cls = _WildcardSelector
    else:
        cls = _PreciseSelector
    return cls(pat, child_parts)
    
            with open(filename, 'rb', 0) as fp1:
            fd1 = fp1.fileno()
            with open(filename, 'rb', 0) as fp2:
                fd2 = fp2.fileno()
                self.assertTrue(self.pathmodule.sameopenfile(fd1, fd2))
    
        def test_pythonmalloc(self):
        # Test the PYTHONMALLOC environment variable
        pymalloc = support.with_pymalloc()
        if pymalloc:
            default_name = 'pymalloc_debug' if Py_DEBUG else 'pymalloc'
            default_name_debug = 'pymalloc_debug'
        else:
            default_name = 'malloc_debug' if Py_DEBUG else 'malloc'
            default_name_debug = 'malloc_debug'
    
        @unittest.skipIf(sys.flags.optimize >= 2,
                     'Docstrings are omitted with -O2 and above')
    @unittest.skipIf(hasattr(sys, 'gettrace') and sys.gettrace(),
                     'trace function introduces __locals__ unexpectedly')
    @requires_docstrings
    def test_help_output_redirect(self):
        # issue 940286, if output is set in Helper, then all output from
        # Helper.help should be redirected
        old_pattern = expected_text_pattern
        getpager_old = pydoc.getpager
        getpager_new = lambda: (lambda x: x)
        self.maxDiff = None
    
        def testSeekable(self):
        bz2f = BZ2File(BytesIO(self.DATA))
        try:
            self.assertTrue(bz2f.seekable())
            bz2f.read()
            self.assertTrue(bz2f.seekable())
        finally:
            bz2f.close()
        self.assertRaises(ValueError, bz2f.seekable)
    
    
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
    
    from argparse import ArgumentParser
    
    def handleSlideshow(slideshow):
    print('<html>')
    handleSlideshowTitle(slideshow.getElementsByTagName('title')[0])
    slides = slideshow.getElementsByTagName('slide')
    handleToc(slides)
    handleSlides(slides)
    print('</html>')
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
def StopServer( ycm ):
  try:
    ycm.OnVimLeave()
    WaitUntilProcessIsTerminated( ycm._server_popen )
    CloseStandardStreams( ycm._server_popen )
  except Exception:
    pass
    
    
def FilterToCompletedCompletions_ShortTextDoesntRaise_test():
  completions = [ BuildCompletion( insertion_text = 'AAA' ) ]
  result = _FilterToMatchingCompletions( CompleteItemIs( 'A' ), completions )
  eq_( list( result ), [] )
    
    
def ExtractKeywordsFromGroup_KeywordStarts_test():
  assert_that( syntax_parse._ExtractKeywordsFromGroup(
                 syntax_parse.SyntaxGroup( '', [
                   'foo bar',
                   'contained boo baa',
                   'zoo goo',
                 ] ) ),
               contains_inanyorder( 'foo', 'bar', 'boo', 'baa', 'zoo', 'goo' ) )