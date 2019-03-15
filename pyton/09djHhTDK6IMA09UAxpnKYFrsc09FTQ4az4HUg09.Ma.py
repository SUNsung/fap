
        
        
    {    # Options that need a file parameter
    'download-archive': ['--require-parameter'],
    'cookies': ['--require-parameter'],
    'load-info': ['--require-parameter'],
    'batch-file': ['--require-parameter'],
}
    
        # Get the version from youtube_dl/version.py without importing the package
    exec(compile(open('youtube_dl/version.py').read(),
                 'youtube_dl/version.py', 'exec'))
    
    
class TestAES(unittest.TestCase):
    def setUp(self):
        self.key = self.iv = [0x20, 0x15] + 14 * [0]
        self.secret_msg = b'Secret message goes here'
    
    
class TestExecution(unittest.TestCase):
    def test_import(self):
        subprocess.check_call([sys.executable, '-c', 'import youtube_dl'], cwd=rootDir)
    
    # Allow direct execution
import os
import sys
import unittest
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
    
        if not HAS_BOTO3:
        module.fail_json(msg='boto3 required for this module')
    
    try:
    from pyvcloud.schema.vcd.v1_5.schemas.vcloud.networkType import FirewallRuleType
    from pyvcloud.schema.vcd.v1_5.schemas.vcloud.networkType import ProtocolsType
except ImportError:
    # normally set a flag here but it will be caught when testing for
    # the existence of pyvcloud (see module_utils/vca.py).  This just
    # protects against generating an exception at runtime
    pass
    
        module_hbacrule = get_hbacrule_dict(description=module.params['description'],
                                        hostcategory=hostcategory,
                                        ipaenabledflag=ipaenabledflag,
                                        servicecategory=servicecategory,
                                        sourcehostcategory=sourcehostcategory,
                                        usercategory=usercategory)
    ipa_hbacrule = client.hbacrule_find(name=name)
    
    
if __name__ == '__main__':
    main()

    
    # Stop tracking nginx logs
- logentries:
    path: /var/log/nginx/error.log
    state: absent
'''
    
    from __future__ import absolute_import, division, print_function
__metaclass__ = type
    
        if event == 'annotation':
        if not msg:
            module.fail_json(msg='msg required for annotation events')
        try:
            send_annotation_event(module, key, msg, annotated_by, level, instance_id, event_epoch)
        except Exception as e:
            module.fail_json(msg='unable to sent annotation event: %s' % to_native(e),
                             exception=traceback.format_exc())