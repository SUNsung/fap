
        
            # process noise
    # pvar = evar / (1- phi^2)
    # logpvar = log ( exp(logevar) / (1 - phi^2) )
    # logpvar = logevar - log(1-phi^2)
    # logpvar = logevar - (log(1-phi) + log(1+phi))
    self.logpvars_1xu = \
        logevars_1xu - tf.log(1.0-phis_1xu) - tf.log(1.0+phis_1xu)
    self.logpvars_bxu = logpvars_bxu = tf.tile(self.logpvars_1xu, size_bx1)
    logpvars_bxu.set_shape(size__xu)
    
    
def write_model_samples(hps, datasets, dataset_name=None, output_fname=None):
  '''Use the prior distribution to generate samples from the model.
  Generates batch_size number of samples (set through FLAGS).
    
      Args:
    data_fname: The filename of teh file in which to write the data.
    data_dict:  The dictionary of data to write. The keys are strings
      and the values are numpy arrays.
    use_json (optional): human readable format for simple items
    compression (optional): The compression to use for h5py (disabled by
      default because the library borks on scalars, otherwise try 'gzip').
  '''
    
    
def create_discriminator(hparams,
                         sequence,
                         is_training,
                         reuse=None,
                         initial_state=None,
                         inputs=None,
                         present=None):
  '''Create the Discriminator model specified by the FLAGS and hparams.
    
        baselines = []
    for t in xrange(FLAGS.sequence_length):
      # Calculate baseline only for missing tokens.
      num_missing = tf.reduce_sum(baseline_missing_list[t])
    
    from flaskr.auth import login_required
from flaskr.db import get_db
    
    from .globals import request
    
            def __init__(self, name, doc=None):
            self.name = name
            self.__doc__ = doc
        def _fail(self, *args, **kwargs):
            raise RuntimeError('signalling support is unavailable '
                               'because the blinker library is '
                               'not installed.')
        send = lambda *a, **kw: None
        connect = disconnect = has_receivers_for = receivers_for = \
            temporarily_connected_to = connected_to = _fail
        del _fail
    
    
@pytest.fixture(scope='session', autouse=True)
def _standard_os_environ():
    '''Set up ``os.environ`` at the start of the test session to have
    standard values. Returns a list of operations that is used by
    :func:`._reset_os_environ` after each test.
    '''
    mp = monkeypatch.MonkeyPatch()
    out = (
        (os.environ, 'FLASK_APP', monkeypatch.notset),
        (os.environ, 'FLASK_ENV', monkeypatch.notset),
        (os.environ, 'FLASK_DEBUG', monkeypatch.notset),
        (os.environ, 'FLASK_RUN_FROM_CLI', monkeypatch.notset),
        (os.environ, 'WERKZEUG_RUN_MAIN', monkeypatch.notset),
    )
    
        :returns True on success, raises ValueError on type error.
    :rtype ``bool``
    '''
    errmsg = ''
    if not isinstance(instance.node_count, int):
        errmsg = 'node_count must be an integer %s (%s)' % (
            instance.node_count, type(instance.node_count))
    if instance.display_name and not isinstance(instance.display_name,
                                                string_types):
        errmsg = 'instance_display_name must be an string %s (%s)' % (
            instance.display_name, type(instance.display_name))
    if errmsg:
        raise ValueError(errmsg)
    
            return (changed, monitoring_policy)
    except Exception as ex:
        module.fail_json(msg=str(ex))
    
        result['delete_rule'] = list()
    result['delete_rule_rc'] = list()
    for rule in current_rules:
        if rule not in desired_rules:
            deletions += 1
            if not module.check_mode:
                result['delete_rule'].append(rule)
                rc = gateway.del_nat_rule(**rule)
                result['delete_rule_rc'].append(rc)
            result['changed'] = True
    result['rules_deleted'] = deletions
    
        client = DNSZoneIPAClient(
        module=module,
        host=module.params['ipa_host'],
        port=module.params['ipa_port'],
        protocol=module.params['ipa_prot']
    )
    
    
if __name__ == '__main__':
    main()

    
    # Create nested groups
- group_by:
    key: el{{ ansible_distribution_major_version }}-{{ ansible_architecture }}
    parents:
      - el{{ ansible_distribution_major_version }}
    
            followed_count += 1
    
    
class PollErrorTest(unittest.TestCase):
    '''Tests for acme.errors.PollError.'''
    
        # TODO: decoder/encoder should accept cls? Otherwise, subclassing
    # JSONObjectWithFields is tricky...
    header_cls = Header
    header = jose.Field(
        'header', omitempty=True, default=header_cls(),
        decoder=header_cls.from_json)
    
        # Wrapper functions for Reverter class
    def recovery_routine(self):
        '''Revert all previously modified files.
    
    import mock
    
        def test_conflicts(self):
        # Note: Defined IP is more important than defined port in match
        self.assertTrue(self.addr.conflicts(self.addr1))
        self.assertTrue(self.addr.conflicts(self.addr2))
        self.assertTrue(self.addr.conflicts(self.addr_defined))
        self.assertFalse(self.addr.conflicts(self.addr_default))
    
            self.assertEqual(mock_setup_cert.call_count, 2)
    
    PYTHON2_EXCEPTIONS = (
    'ArithmeticError',
    'AssertionError',
    'AttributeError',
    'BaseException',
    'BufferError',
    'BytesWarning',
    'DeprecationWarning',
    'EOFError',
    'EnvironmentError',
    'Exception',
    'FloatingPointError',
    'FutureWarning',
    'GeneratorExit',
    'IOError',
    'ImportError',
    'ImportWarning',
    'IndentationError',
    'IndexError',
    'KeyError',
    'KeyboardInterrupt',
    'LookupError',
    'MemoryError',
    'NameError',
    'NotImplementedError',
    'OSError',
    'OverflowError',
    'PendingDeprecationWarning',
    'ReferenceError',
    'RuntimeError',
    'RuntimeWarning',
    # StandardError is gone in Python 3, so we map it to Exception
    'StopIteration',
    'SyntaxError',
    'SyntaxWarning',
    'SystemError',
    'SystemExit',
    'TabError',
    'TargetScopeError',
    'TypeError',
    'UnboundLocalError',
    'UnicodeDecodeError',
    'UnicodeEncodeError',
    'UnicodeError',
    'UnicodeTranslateError',
    'UnicodeWarning',
    'UserWarning',
    'ValueError',
    'Warning',
    'ZeroDivisionError',
)
    
        def _convert_(cls, name, module, filter, source=None):
        '''
        Create a new Enum subclass that replaces a collection of global constants
        '''
        # convert all constants from source (or module) that pass filter() to
        # a new Enum called name, and export the enum and its members back to
        # module;
        # also, replace the __reduce_ex__ method so unpickling works in
        # previous Python versions
        module_globals = vars(sys.modules[module])
        if source:
            source = vars(source)
        else:
            source = module_globals
        # _value2member_map_ is populated in the same order every time
        # for a consistent reverse mapping of number to name when there
        # are multiple names for the same number.
        members = [
                (name, value)
                for name, value in source.items()
                if filter(name)]
        try:
            # sort by value
            members.sort(key=lambda t: (t[1], t[0]))
        except TypeError:
            # unless some values aren't comparable, in which case sort by name
            members.sort(key=lambda t: t[0])
        cls = cls(name, members, module=module)
        cls.__reduce_ex__ = _reduce_ex_by_name
        module_globals.update(cls.__members__)
        module_globals[name] = cls
        return cls
    
            def _c(d):
            if d.is_dir():
                return d in TOOLS_DIRS
            return d in TOOLS_FILES
    
    has_cmdline_bunzip2 = None
    
    # In a real program you'd get the filename from the arguments.
with open('outgoing.msg', 'rb') as fp:
    msg = BytesParser(policy=policy.default).parse(fp)
    
            for project in RangeQuerySetWrapperWithProgressBar(orm.Project.objects.all()):
            orm.Environment.objects.filter(
                project_id=project.id, organization_id__isnull=True
            ).update(organization_id=project.organization_id)
    
            # The following code is provided here to aid in writing a correct migration
        # Changing field 'ReleaseEnvironment.project_id'
        db.alter_column(
            'sentry_environmentrelease', 'project_id',
            self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')()
        )
    
        def backwards(self, orm):
        # Removing unique constraint on 'DSymApp', fields ['project', 'platform', 'app_id']
        db.delete_unique('sentry_dsymapp', ['project_id', 'platform', 'app_id'])
    
            # Deleting model 'ReleaseHeadCommit'
        db.delete_table('sentry_releaseheadcommit')
    
            # Adding field 'ReleaseFile.dist'
        db.add_column(
            'sentry_releasefile',
            'dist',
            self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                to=orm['sentry.Distribution'], null=True
            ),
            keep_default=False
        )