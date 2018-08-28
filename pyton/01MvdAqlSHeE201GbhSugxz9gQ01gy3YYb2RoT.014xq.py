
        
        
@bp.route('/create', methods=('GET', 'POST'))
@login_required
def create():
    '''Create a new post for the current user.'''
    if request.method == 'POST':
        title = request.form['title']
        body = request.form['body']
        error = None
    
    
def init_app(app):
    '''Register database functions with the Flask app. This is called by
    the application factory.
    '''
    app.teardown_appcontext(close_db)
    app.cli.add_command(init_db_command)

    
    
# Certain versions of pypy have a bug where clearing the exception stack
# breaks the __exit__ function in a very peculiar way.  The second level of
# exception blocks is necessary because pypy seems to forget to check if an
# exception happened until the next bytecode instruction?
#
# Relevant PyPy bugfix commit:
# https://bitbucket.org/pypy/pypy/commits/77ecf91c635a287e88e60d8ddb0f4e9df4003301
# According to ronan on #pypy IRC, it is released in PyPy2 2.3 and later
# versions.
#
# Ubuntu 14.04 has PyPy 2.2.1, which does exhibit this bug.
BROKEN_PYPY_CTXMGR_EXIT = False
if hasattr(sys, 'pypy_version_info'):
    class _Mgr(object):
        def __enter__(self):
            return self
        def __exit__(self, *args):
            if hasattr(sys, 'exc_clear'):
                # Python 3 (PyPy3) doesn't have exc_clear
                sys.exc_clear()
    try:
        try:
            with _Mgr():
                raise AssertionError()
        except:
            raise
    except TypeError:
        BROKEN_PYPY_CTXMGR_EXIT = True
    except AssertionError:
        pass

    
            :param name: the optional name of the filter, otherwise the
                     function name will be used.
        '''
        def decorator(f):
            self.add_app_template_filter(f, name=name)
            return f
        return decorator
    
        1. Single argument: Passed straight through to :func:`dumps`.
    2. Multiple arguments: Converted to an array before being passed to
       :func:`dumps`.
    3. Multiple keyword arguments: Converted to a dict before being passed to
       :func:`dumps`.
    4. Both args and kwargs: Behavior undefined and will throw an exception.
    
        def save_session(self, app, session, response):
        domain = self.get_cookie_domain(app)
        path = self.get_cookie_path(app)
    
    # Use the nodeid specified in the environment to limit the data returned
# or return data for all available nodes
nodeids = []
    
            if self.filter_clusters:
            # Loop through clusters and find hosts:
            hosts = []
            for cluster in ClusterComputeResource.all(self.client):
                if cluster.name in self.filter_clusters:
                    for host in cluster.host:
                        hosts.append(host)
        else:
            # Get list of all physical hosts
            hosts = HostSystem.all(self.client)
    
    import argparse
import sys
import getpass
import keyring
    
    #__requires__ = ['ansible']
try:
    import pkg_resources
except Exception:
    # Use pkg_resources to find the correct versions of libraries and set
    # sys.path appropriately when there are multiversion installs.  But we
    # have code that better expresses the errors in the places where the code
    # is actually used (the deps are optional for many code paths) so we don't
    # want to fail here.
    pass
    
        Print out all the modules that have metadata and all the ones that do not.
    
            def format_group(group):
            results = {}
            results[group.name] = {}
            if group.name != 'all':
                results[group.name]['hosts'] = [h.name for h in sorted(group.hosts, key=attrgetter('name'))]
            results[group.name]['children'] = []
            for subgroup in sorted(group.child_groups, key=attrgetter('name')):
                results[group.name]['children'].append(subgroup.name)
                results.update(format_group(subgroup))
            if self.options.export:
                results[group.name]['vars'] = self._get_group_variables(group)
    
    CLI_DEFAULTS = dict(
    server_root=server_root_tmp,
    ctl='nginx',
)
'''CLI defaults.'''
    
        def test_timeout(self):
        self.assertTrue(self.timeout.timeout)
        self.assertFalse(self.invalid.timeout)
    
        def decode(self, value):
        if value != self.resource_type:
            raise jose.DeserializationError(
                'Wrong resource type: {0} instead of {1}'.format(
                    value, self.resource_type))
        return value

    
        def setUp(self):
        from acme.messages import CertificateResource
        self.certr = CertificateResource(
            body=CERT, uri=mock.sentinel.uri, authzrs=(),
            cert_chain_uri=mock.sentinel.cert_chain_uri)
    
    authzr = acme.request_challenges(
    identifier=messages.Identifier(typ=messages.IDENTIFIER_FQDN, value=DOMAIN))
logging.debug(authzr)
    
        :returns: Dict of Define:Value pairs
    :rtype: `dict`
    
            # Both sets of names are empty.
    
        def test_recovery_routine_error(self):
        self.config.reverter.recovery_routine = mock.Mock(
            side_effect=errors.ReverterError)
    
    import getopt
import os
import platform
import sys
from .version import script_name, __version__
from .util import git, log
    
            for i in link_list:
            self.stream_types.append({'id': str(i[0])})
            self.streams[i[0]] = {'url': i[1]}
    
    
    def extract(self, **kwargs):
        for i in self.streams:
            s = self.streams[i]
            _, s['container'], s['size'] = url_info(s['url'])
            s['src'] = [s['url']]
        if 'stream_id' in kwargs and kwargs['stream_id']:
            # Extract the stream
            stream_id = kwargs['stream_id']
    
            ckplayer_download(another_url, output_dir, merge, info_only, is_xml = True, title = title, headers = headers)
    
    site_info = 'Facebook.com'
download = facebook_download
download_playlist = playlist_not_supported('facebook')

    
    def get_single_photo_url(url):
    page = get_html(url)
    pid = get_photo_id(url, page)
    title = match1(page, pattern_inline_title)
    if match1(page, pattern_inline_video_mark):
        api_key = get_api_key(page)
        reply = get_content(tmpl_api_call_photo_info % (api_key, get_photo_id(url, page)))
        secret = json.loads(reply)['photo']['secret']
        return get_orig_video_source(api_key, pid, secret), title
    #last match always has the best resolution
    match = match1(page, pattern_inline_img_url)
    return 'https:' + match.replace('\\', ''), title