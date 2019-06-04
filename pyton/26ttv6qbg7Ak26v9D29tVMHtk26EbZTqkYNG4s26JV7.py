
        
        
pteredor_is_running = False
    
    import sys
import os
import re
import time
import struct
import zlib
import base64
import logging
import httplib
import urlparse
import errno
import string
    
    from antlr3.constants import EOF
from antlr3.exceptions import NoViableAltException, BacktrackingFailed
    
    <slide><title>Another demo slide</title>
<point>It is important</point>
<point>To have more than</point>
<point>one slide</point>
</slide>
</slideshow>
'''
    
    # register the Foo class; make `g()` and `_h()` accessible via proxy
MyManager.register('Foo2', Foo, exposed=('g', '_h'))
    
    
if __name__ == '__main__':
    multiprocessing.freeze_support()
    test()

    
        # Add more tasks using `put()`
    for task in TASKS2:
        task_queue.put(task)
    
    while True:
    line = input()
    if line == '':
        break
    buffer += line
    if sqlite3.complete_statement(buffer):
        try:
            buffer = buffer.strip()
            cur.execute(buffer)
    
        The last action (38) stops the rollout for a return of 0 (walking away)
    '''
    def __init__(self, spots=37):
        self.n = spots + 1
        self.action_space = spaces.Discrete(self.n)
        self.observation_space = spaces.Discrete(1)
        self.seed()
    
    class ResetNeeded(Exception):
    '''When the monitor is active, raised when the user tries to step an
    environment that's already done.
    '''
    pass
    
        # Close the env and write monitor result info to disk
    env.close()

    
        Included are base test cases that should be common to all controllers
    which use r2.lib.controlers.login as part of the flow.
    '''
    def do_login(self, user='test', passwd='test123', **kw):
        return self.do_post('login', {'user': user, 'passwd': passwd}, **kw)
    
        def test_mixed_experiment_disable(self, num_users=2000):
        '''Test a combination of loggedin/out users disables properly.'''
        self.assert_no_experiment(
            (
                self.get_loggedin_users(num_users / 2) +
                self.get_loggedout_users(num_users / 2)
            ),
            experiment={
                'loggedin': True,
                'loggedout': True,
                'variants': {'larger': 5, 'smaller': 10},
                'enabled': False,
            }
        )

    
        def test_image_link(self):
        post = Link(is_self=True, selftext='''
Some text here.
https://example.com
https://reddit.com/a.jpg''')
        url = _get_scrape_url(post)
        self.assertEqual(url, 'https://reddit.com/a.jpg')
    
    
class ModeratorPermissionSetTest(unittest.TestCase):
    def test_loads(self):
        self.assertTrue(ModeratorPermissionSet.loads(None).is_superuser())
        self.assertFalse(ModeratorPermissionSet.loads('').is_superuser())
    
            for width in (108, 216, 320, 640, 960, 1080):
            url = self.provider.resize_image(image, width)
            self.assertEqual(url, 'https://unsplash.it/%d/%d' % (width,
                width*2))

    
        def test_mcreddit_detector(self):
        user_agent = 'McReddit - Reddit Client for iOS'
        outs = detect(user_agent)
        self.assertEqual(outs['browser']['name'], McRedditDetector.name)
    
        def test_garbage_header(self):
        body = '{'user': 'reddit', 'password': 'hunter2'}'
        self.assert_invalid(
            body,
            header='idontneednosignature',
            error=signing.ERRORS.INVALID_FORMAT,
        )