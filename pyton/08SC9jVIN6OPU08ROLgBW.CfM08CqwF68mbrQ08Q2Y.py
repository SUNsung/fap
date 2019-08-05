
        
        
class LinkedList(object):
    
    
class GroupChat(Chat):
    
    from mrjob.job import MRJob
    
        def __init__(self, MAX_SIZE):
        self.MAX_SIZE = MAX_SIZE
        self.size = 0
        self.lookup = {}
        self.linked_list = LinkedList()
    
        def test_guess_when_method_set_and_valid(self):
        self.parser.args = argparse.Namespace()
        self.parser.args.method = 'GET'
        self.parser.args.url = 'http://example.com/'
        self.parser.args.items = []
        self.parser.args.ignore_stdin = False
    
            # Keyword arguments > stream.encoding > default utf8
        if self.stdin_encoding is None:
            self.stdin_encoding = getattr(
                self.stdin, 'encoding', None) or 'utf8'
        if self.stdout_encoding is None:
            actual_stdout = self.stdout
            if is_windows:
                # noinspection PyUnresolvedReferences
                from colorama import AnsiToWin32
                if isinstance(self.stdout, AnsiToWin32):
                    actual_stdout = self.stdout.wrapped
            self.stdout_encoding = getattr(
                actual_stdout, 'encoding', None) or 'utf8'
    
    
def write_stream(stream, outfile, flush):
    '''Write the output stream.'''
    try:
        # Writing bytes so we use the buffer interface (Python 3).
        buf = outfile.buffer
    except AttributeError:
        buf = outfile
    
        @classmethod
    def supports(cls, mime):
        raise NotImplementedError
    
    
@pytest.mark.parametrize('argument_name', ['--auth-type', '-A'])
def test_digest_auth(httpbin_both, argument_name):
    r = http(argument_name + '=digest', '--auth=user:password',
             'GET', httpbin_both.url + '/digest-auth/auth/user/password')
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
            # Removing unique constraint on 'GroupTagKey', fields ['project_id',
        # 'group_id', 'environment_id', '_key']
        db.delete_unique(
            u'tagstore_grouptagkey', [
                'project_id', 'group_id', 'environment_id', 'key_id'])
    
            # Deleting model 'TagKey'
        db.delete_table(u'tagstore_tagkey')
    
    
class Migration(SchemaMigration):