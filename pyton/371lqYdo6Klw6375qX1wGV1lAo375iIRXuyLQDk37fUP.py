
        
        try:
    from google.cloud import spanner
    from google.gax.errors import GaxError
    HAS_GOOGLE_CLOUD_SPANNER = True
except ImportError as e:
    HAS_GOOGLE_CLOUD_SPANNER = False
    
            if service is not None:
            changed = client.modify_if_diff(name, ipa_hbacrule.get('memberservice_hbacsvc', []), service,
                                            client.hbacrule_add_service,
                                            client.hbacrule_remove_service, 'hbacsvc') or changed
    
    EXAMPLES = '''
- stackdriver:
    key: AAAAAA
    event: deploy
    deployed_to: production
    deployed_by: leeroyjenkins
    repository: MyWebApp
    revision_id: abcd123
    
    def getTestCaseNames(testCaseClass, prefix, sortUsing=util.three_way_cmp, testNamePatterns=None):
    return _makeLoader(prefix, sortUsing, testNamePatterns=testNamePatterns).getTestCaseNames(testCaseClass)
    
        def test_underscore_literals(self):
        def number_token(s):
            f = BytesIO(s.encode('utf-8'))
            for toktype, token, start, end, line in tokenize(f.readline):
                if toktype == NUMBER:
                    return token
            return 'invalid token'
        for lit in VALID_UNDERSCORE_LITERALS:
            if '(' in lit:
                # this won't work with compound complex inputs
                continue
            self.assertEqual(number_token(lit), lit)
        for lit in INVALID_UNDERSCORE_LITERALS:
            self.assertNotEqual(number_token(lit), lit)
    
        def _generate_symbols(self, grammar_file, target_symbol_py_file):
        proc = subprocess.Popen([sys.executable,
                                 GEN_SYMBOL_FILE,
                                 grammar_file,
                                 target_symbol_py_file], stderr=subprocess.PIPE)
        stderr = proc.communicate()[1]
        return proc.returncode, stderr
    
    
def open_text(package: Package,
              resource: Resource,
              encoding: str = 'utf-8',
              errors: str = 'strict') -> TextIO:
    '''Return a file-like object opened for text reading of the resource.'''
    resource = _normalize_path(resource)
    package = _get_package(package)
    reader = _get_resource_reader(package)
    if reader is not None:
        return TextIOWrapper(reader.open_resource(resource), encoding, errors)
    _check_location(package)
    absolute_package_path = os.path.abspath(package.__spec__.origin)
    package_path = os.path.dirname(absolute_package_path)
    full_path = os.path.join(package_path, resource)
    try:
        return open(full_path, mode='r', encoding=encoding, errors=errors)
    except OSError:
        # Just assume the loader is a resource loader; all the relevant
        # importlib.machinery loaders are and an AttributeError for
        # get_data() will make it clear what is needed from the loader.
        loader = cast(ResourceLoader, package.__spec__.loader)
        data = None
        if hasattr(package.__spec__.loader, 'get_data'):
            with suppress(OSError):
                data = loader.get_data(full_path)
        if data is None:
            package_name = package.__spec__.name
            message = '{!r} resource not found in {!r}'.format(
                resource, package_name)
            raise FileNotFoundError(message)
        else:
            return TextIOWrapper(BytesIO(data), encoding, errors)
    
    import pickle
import sqlite3
from collections import namedtuple
    
            try:
            print(pool.apply(f, (5,)))
        except ZeroDivisionError:
            print('\tGot ZeroDivisionError as expected from pool.apply()')
        else:
            raise AssertionError('expected ZeroDivisionError')