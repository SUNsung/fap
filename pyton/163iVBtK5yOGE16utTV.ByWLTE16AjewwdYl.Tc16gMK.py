
        
        '''
    The approach taken is explained below. I decided to do it simply.
    Initially I was considering parsing the data into some sort of
    structure and then generating an appropriate README. I am still
    considering doing it - but for now this should work. The only issue
    I see is that it only sorts the entries at the lowest level, and that
    the order of the top-level contents do not match the order of the actual
    entries.
    
    '''
requests.hooks
~~~~~~~~~~~~~~
    
    
class RequestsDependencyWarning(RequestsWarning):
    '''An imported dependency doesn't match the expected version range.'''
    pass

    
    # Grouping the document tree into Texinfo files. List of tuples
# (source start file, target name, title, author,
#  dir menu entry, description, category)
texinfo_documents = [
    (master_doc, 'Requests', u'Requests Documentation',
     author, 'Requests', 'One line description of project.',
     'Miscellaneous'),
]
    
        def __ne__(self, other):
        return not self == other

    
            # This MUST go after prepare_auth. Authenticators could add a hook
        self.prepare_hooks(hooks)
    
    
def print_list():
    data = get_landscape_members_data()
    nodes = get_nodes(data)
    groups = get_groups(data)
    meta = get_meta(data)
    inventory_data = {_key: nodes, '_meta': meta}
    inventory_data.update(groups)
    print(json.dumps(inventory_data))
    
        parser = argparse.ArgumentParser(description='Start a new Shippable run.')
    
        def on_open_shell(self):
        try:
            for cmd in (b'set terminal length 0', b'set terminal width 512'):
                self._exec_cli_command(cmd)
            self._exec_cli_command(b'set terminal length %d' % self.terminal_length)
        except AnsibleConnectionFailure:
            raise AnsibleConnectionFailure('unable to set terminal parameters')

    
        results = {}
    for group in sort_groups(groups):
        results = combine_vars(results, group.get_vars())
    
    del sys

    
    
class _BenchSpider(scrapy.Spider):
    '''A spider that follows all links'''
    name = 'follow'
    total = 10000
    show = 20
    baseurl = 'http://localhost:8998'
    link_extractor = LinkExtractor()
    
        def process_request(self, request, spider):
        for k, v in self._headers:
            request.headers.setdefault(k, v)

    
        def spider_opened(self, spider):
        self._timeout = getattr(spider, 'download_timeout', self._timeout)
    
    See documentation in docs/topics/downloader-middleware.rst
'''
    
        def spider_opened(self, spider):
        self.user_agent = getattr(spider, 'user_agent', self.user_agent)
    
    
if __name__ == '__main__':
    RemoveDuplicateUrls.run()

    
    
class CallState(Enum):
    
        def test_from_bytes(self):
        def check(tests, byteorder, signed=False):
            for test, expected in tests.items():
                try:
                    self.assertEqual(
                        int.from_bytes(test, byteorder, signed=signed),
                        expected)
                except Exception as err:
                    raise AssertionError(
                        'failed to convert {0} with byteorder={1!r} and signed={2}'
                        .format(test, byteorder, signed)) from err
    
        def test_bp_after_last_statement(self):
        code = '''
            def main():
                lno = 3
        '''
        modules = { TEST_MODULE: code }
        with create_modules(modules):
            self.expect_set = [
                ('line', 2, 'tfunc_import'), ('break', (TEST_MODULE_FNAME, 4))
            ]
            with TracerRun(self) as tracer:
                self.assertRaises(BdbError, tracer.runcall, tfunc_import)
    
    
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
    
        def get_agent_and_url(self, url):
        if isinstance(url, tuple):
            agent, url = url
            return agent, url
        return self.agent, url
    
    _system_limits_checked = False
_system_limited = None
def _check_system_limits():
    global _system_limits_checked, _system_limited
    if _system_limits_checked:
        if _system_limited:
            raise NotImplementedError(_system_limited)
    _system_limits_checked = True
    try:
        import os
        nsems_max = os.sysconf('SC_SEM_NSEMS_MAX')
    except (AttributeError, ValueError):
        # sysconf not available or setting not available
        return
    if nsems_max == -1:
        # indetermine limit, assume that limit is determined
        # by available memory only
        return
    if nsems_max >= 256:
        # minimum number of semaphores available
        # according to POSIX
        return
    _system_limited = 'system provides too few semaphores (%d available, 256 necessary)' % nsems_max
    raise NotImplementedError(_system_limited)
    
    try:
    import queue
except ImportError:
    import Queue as queue
    
      def __init__( self, all_filters ):
    self._all_filters = all_filters
    self._cache = {}
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
        @classmethod
    def setUpClass(self):
        '''
        - Create a temporary directory and file
        /test_command
           /foo.txt
        - get the temporary test directory
        - and initializes the command stack.
        '''
        os.mkdir('tests/test_command')
        open('tests/test_command/foo.txt', 'w').close()
        self.__get_test_directory()
        self.command_stack = []
        self.command_stack.append(MoveFileCommand(os.path.join(
            self.test_dir, 'foo.txt'), os.path.join(self.test_dir, 'bar.txt')))
        self.command_stack.append(MoveFileCommand(os.path.join(
            self.test_dir, 'bar.txt'), os.path.join(self.test_dir, 'baz.txt')))
    
        fftv.publish('cartoon')
    fftv.publish('music')
    fftv.publish('ads')
    fftv.publish('movie')
    fftv.publish('cartoon')
    fftv.publish('cartoon')
    fftv.publish('movie')
    fftv.publish('blank')
    
        def test_items_recoil(self):
        with ObjectPool(self.sample_queue, True) as pool:
            self.assertEqual(pool, 'first')
        self.assertTrue(self.sample_queue.get() == 'second')
        self.assertFalse(self.sample_queue.empty())
        self.assertTrue(self.sample_queue.get() == 'first')
        self.assertTrue(self.sample_queue.empty())
    
        def test_am_station_overflow_after_scan(self):
        self.radio.scan()
        station = self.radio.state.stations[self.radio.state.pos]
        expected_station = '1250'
        self.assertEqual(station, expected_station)
    
    '''
http://ginstrom.com/scribbles/2007/10/08/design-patterns-python-style/
Implementation of the iterator pattern with a generator
    
    
### OUTPUT ###
# Specification
# False
# True
# False
