
        
          def testCombineArcAndRootPotentials(self):
    with self.test_session():
      arcs = tf.constant([[[1, 2, 3],
                           [2, 3, 4],
                           [3, 4, 5]],
                          [[3, 4, 5],
                           [2, 3, 4],
                           [1, 2, 3]]], tf.float32)  # pyformat: disable
      roots = tf.constant([[6, 7, 8],
                           [8, 7, 6]], tf.float32)  # pyformat: disable
    
      This method exports a master_spec and associated files into the SavedModel's
  'assets.extra' directory (which is unmanaged). All resources are added to the
  'assets.extra' directory using sanitized paths. The master spec itself is
  located at the base of the assets.extra directory.
    
    _DUMMY_TEST_SENTENCE = '''
token {
  word: 'sentence' start: 0 end: 7 break_level: NO_BREAK
}
token {
  word: '0' start: 9 end: 9 break_level: SPACE_BREAK
}
token {
  word: '.' start: 10 end: 10 break_level: NO_BREAK
}
'''
    
        try:
      with open(FLAGS.actual_file) as actual:
        content_actual = actual.read()
    except IOError as e:
      self.fail('Error opening '%s': %s' % (FLAGS.actual_file, e.strerror))
    
    
def default_hooks():
    return dict((event, []) for event in HOOKS)
    
    
class VersionedPackage(object):
    def __init__(self, version):
        self.__version__ = version
    
        Provide both the name and the version of the Python implementation
    currently running. For example, on CPython 2.7.5 it will return
    {'name': 'CPython', 'version': '2.7.5'}.
    
    # ---------
# Specifics
# ---------
    
        # Sometimes, urllib3 only reports its version as 16.1.
    if len(urllib3_version) == 2:
        urllib3_version.append('0')
    
        return request('post', url, data=data, json=json, **kwargs)
    
            # It's possible that users might accidentally send a Request object.
        # Guard against that specific failure case.
        if isinstance(request, Request):
            raise ValueError('You can only send PreparedRequests.')