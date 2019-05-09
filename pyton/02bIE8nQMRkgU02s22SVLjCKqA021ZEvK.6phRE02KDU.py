
        
            def get_formatters_grouped(self):
        groups = {}
        for group_name, group in groupby(
                self.get_formatters(),
                key=lambda p: getattr(p, 'group_name', 'format')):
            groups[group_name] = list(group)
        return groups
    
    
def test_credentials_in_url(httpbin_both):
    url = add_auth(httpbin_both.url + '/basic-auth/user/password',
                   auth='user:password')
    r = http('GET', url)
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
    
@pytest.mark.skipif(not has_docutils(), reason='docutils not installed')
@pytest.mark.parametrize('filename', filenames)
def test_rst_file_syntax(filename):
    p = subprocess.Popen(
        ['rst2pseudoxml.py', '--report=1', '--exit-status=1', filename],
        stderr=subprocess.PIPE,
        stdout=subprocess.PIPE
    )
    err = p.communicate()[1]
    assert p.returncode == 0, err.decode('utf8')

    
    
def test_follow_redirect_output_options(httpbin):
    r = http('--check-status',
             '--follow',
             '--all',
             '--print=h',
             '--history-print=H',
             httpbin.url + '/redirect/2')
    assert r.count('GET /') == 2
    assert 'HTTP/1.1 302 FOUND' not in r
    assert HTTP_OK in r
    
    '''
from utils import http, HTTP_OK
from fixtures import UNICODE
    
    from httpie.input import ParseError
from utils import MockEnvironment, http, HTTP_OK
from fixtures import FILE_PATH_ARG, FILE_PATH, FILE_CONTENT
    
        def backwards(self, orm):
        # Removing unique constraint on 'GroupCommitResolution', fields ['group_id', 'commit_id']
        db.delete_unique('sentry_groupcommitresolution', ['group_id', 'commit_id'])
    
            # Deleting field 'ApiAuthorization.scope_list'
        db.delete_column('sentry_apiauthorization', 'scope_list')
    
            # Deleting field 'CommitAuthor.external_id'
        db.delete_column('sentry_commitauthor', 'external_id')