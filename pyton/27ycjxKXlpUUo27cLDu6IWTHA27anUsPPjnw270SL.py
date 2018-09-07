
        
        
def history_not_changed(proc, TIMEOUT):
    '''Ensures that history not changed.'''
    proc.send('\033[A')
    assert proc.expect([TIMEOUT, u'fuck'])
    
    match_output = '''
Listing... Done
heroku/stable 6.15.2-1 amd64 [upgradable from: 6.14.43-1]
resolvconf/zesty-updates,zesty-updates 1.79ubuntu4.1 all [upgradable from: 1.79ubuntu4]
squashfs-tools/zesty-updates 1:4.3-3ubuntu2.17.04.1 amd64 [upgradable from: 1:4.3-3ubuntu2]
unattended-upgrades/zesty-updates,zesty-updates 0.93.1ubuntu2.4 all [upgradable from: 0.93.1ubuntu2.3]
'''
    
      * scan
'''
    
        def test_revert_challenge_config(self):
        mock_load = mock.Mock()
        self.config.aug.load = mock_load
    
        def test_nonexistent_generic(self):
        with mock.patch('certbot.util.get_os_info') as mock_info:
            mock_info.return_value = ('nonexistent', 'irrelevant')
            with mock.patch('certbot.util.get_systemd_os_like') as mock_like:
                mock_like.return_value = ['unknonwn']
                self.assertEqual(entrypoint.get_configurator(),
                                 configurator.ApacheConfigurator)
    
        def setUp(self):
        from certbot_apache.obj import Addr
        from certbot_apache.obj import VirtualHost
    
        def test_input_strip(self):
        missing_module = ' test.i_am_not_here '
        result = str(run_pydoc(missing_module), 'ascii')
        expected = missing_pattern % missing_module.strip()
        self.assertEqual(expected, result)
    
    extensions = ['sphinx.ext.coverage', 'sphinx.ext.doctest',
              'pyspecific', 'c_annotations']
    
    '''Send the contents of a directory as a MIME message.'''
    
    DB_FILE = 'mydb'
    
    
class Person(object):
    
    ### OUTPUT ###
# jim got cartoon
# jack got music
# gee got movie
# jim got cartoon
# jim got cartoon
# gee got movie

    
    
class Specification(object):
    
        def __init__(self):
        '''We have an AM state and an FM state'''
        self.amstate = AmState(self)
        self.fmstate = FmState(self)
        self.state = self.amstate
    
    *TL;DR80
Defines the skeleton of an algorithm, deferring steps to subclasses.
'''
    
    *TL;DR80
Separates an algorithm from an object structure on which it operates.
'''
    
    
class ComplexBuilding(object):
    def __repr__(self):
        return 'Floor: {0.floor} | Size: {0.size}'.format(self)
    
    '''
*What is this pattern about?
This patterns aims to reduce the number of classes required by an
application. Instead of relying on subclasses it creates objects by
copying a prototypical instance at run-time.
    
    production code which is untestable:
    
    '''
Reference: https://en.wikipedia.org/wiki/Delegation_pattern
Author: https://github.com/IuryAlves
    
        def speak(self):
        return ''hello''