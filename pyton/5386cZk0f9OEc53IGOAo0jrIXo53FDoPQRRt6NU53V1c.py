
        
            @staticmethod
    def import_windows_ca(certfile):
        xlog.debug('Begin to import Windows CA')
        with open(certfile, 'rb') as fp:
            certdata = fp.read()
            if certdata.startswith(b'-----'):
                begin = b'-----BEGIN CERTIFICATE-----'
                end = b'-----END CERTIFICATE-----'
                certdata = base64.b64decode(b''.join(certdata[certdata.find(begin)+len(begin):certdata.find(end)].strip().splitlines()))
        try:
            common_name = OpenSSL.crypto.load_certificate(OpenSSL.crypto.FILETYPE_ASN1, certdata).get_subject().CN
        except Exception as e:
            logging.error('load_certificate(certfile=%r) 失败：%s', certfile, e)
            return -1
    
                if fail or self.network_stat != 'OK':
                # Fail or unknown
                if time_now - self.last_check_time < 3:
                    return
            else:
                if time_now - self.last_check_time < 10:
                    return
    
        for qualified, server, _, _ in server_list:
        if qualified:
            best_server = server[0]
            break
    log = Log()
    if best_server:
        log.write('best server is: %s.' % best_server)
    else:
        xlog.warning('no server detected, return default: teredo.remlab.net.')
        log.write('no server detected, return default: teredo.remlab.net.')
        best_server = 'teredo.remlab.net'
    log.close()
    return best_server
    
    noarch_lib = os.path.abspath( os.path.join(python_path, 'lib', 'noarch'))
sys.path.append(noarch_lib)
    
            p = random.choice(self.plus)
    
    
    def specialStateTransition(self, s, input):
        return -1
    
    # Other resources excluded from --use=all:
#
# - extralagefile (ex: test_zipfile64): really too slow to be enabled
#   'by default'
# - tzdata: while needed to validate fully test_datetime, it makes
#   test_datetime too slow (15-20 min on some buildbots) and so is disabled by
#   default (see bpo-30822).
RESOURCE_NAMES = ALL_RESOURCES + ('extralargefile', 'tzdata')
    
            if not self.ns.fromfile:
            self.selected = self.tests or self.ns.args or alltests
        else:
            self.selected = self.tests
        if self.ns.single:
            self.selected = self.selected[:1]
            try:
                pos = alltests.index(self.selected[0])
                self.next_single_test = alltests[pos + 1]
            except IndexError:
                pass
    
            - encoding_details: EncodingDetails for eager decoding
        - stderr_lines: result of calling splitlines() on the stderr output
    
            out = self.get_output('-c', code, PYTHONUTF8='1')
        self.assertEqual(out, '1')
    
    The special characters are:
    '.'      Matches any character except a newline.
    '^'      Matches the start of the string.
    '$'      Matches the end of the string or just before the newline at
             the end of the string.
    '*'      Matches 0 or more (greedy) repetitions of the preceding RE.
             Greedy means that it will match as many repetitions as possible.
    '+'      Matches 1 or more (greedy) repetitions of the preceding RE.
    '?'      Matches 0 or 1 (greedy) of the preceding RE.
    *?,+?,?? Non-greedy versions of the previous three special characters.
    {m,n}    Matches from m to n repetitions of the preceding RE.
    {m,n}?   Non-greedy version of the above.
    '\\'     Either escapes special characters or signals a special sequence.
    []       Indicates a set of characters.
             A '^' as the first character indicates a complementing set.
    '|'      A|B, creates an RE that will match either A or B.
    (...)    Matches the RE inside the parentheses.
             The contents can be retrieved or matched later in the string.
    (?aiLmsux) Set the A, I, L, M, S, U, or X flag for the RE (see below).
    (?:...)  Non-grouping version of regular parentheses.
    (?P<name>...) The substring matched by the group is accessible by name.
    (?P=name)     Matches the text matched earlier by the group named name.
    (?#...)  A comment; ignored.
    (?=...)  Matches if ... matches next, but doesn't consume the string.
    (?!...)  Matches if ... doesn't match next.
    (?<=...) Matches if preceded by ... (must be fixed length).
    (?<!...) Matches if not preceded by ... (must be fixed length).
    (?(id/name)yes|no) Matches yes pattern if the group with id/name matched,
                       the (optional) no pattern otherwise.
    
    
def split(s):
    '''Split a pathname into two parts: the directory leading up to the final
    bit, and the basename (the filename, without colons, in that directory).
    The result (s, t) is such that join(s, t) yields the original argument.'''
    
        '''
    if not module or not isinstance(module, types.ModuleType):
        raise TypeError('reload() argument must be a module')
    try:
        name = module.__spec__.name
    except AttributeError:
        name = module.__name__
    
        return result
    
        complete_apps = ['sentry']
    symmetrical = True

    
            # Adding field 'ApiAuthorization.scope_list'
        db.add_column(
            'sentry_apiauthorization',
            'scope_list',
            self.gf('sentry.db.models.fields.array.ArrayField')(
                of=('django.db.models.fields.TextField', [], {})
            ),
            keep_default=False
        )
    
    
class Migration(SchemaMigration):
    def forwards(self, orm):
        # Adding model 'VersionDSymFile'
        db.create_table(
            'sentry_versiondsymfile', (
                (
                    'id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(
                        primary_key=True
                    )
                ), (
                    'dsym_file', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                        to=orm['sentry.ProjectDSymFile'], null=True
                    )
                ), (
                    'dsym_app', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                        to=orm['sentry.DSymApp']
                    )
                ), ('version', self.gf('django.db.models.fields.CharField')(max_length=32)),
                ('build', self.gf('django.db.models.fields.CharField')(max_length=32, null=True)), (
                    'date_added',
                    self.gf('django.db.models.fields.DateTimeField')()
                ),
            )
        )
        db.send_create_signal('sentry', ['VersionDSymFile'])