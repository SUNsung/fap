
        
                    if lines and lines[-1] and chunk and lines[-1][-1] == chunk[-1]:
                pending = lines.pop()
            else:
                pending = None
    
    import collections
    
    from requests.structures import CaseInsensitiveDict, LookupDict
    
            if algorithm is None:
            _algorithm = 'MD5'
        else:
            _algorithm = algorithm.upper()
        # lambdas assume digest modules are imported at the top level
        if _algorithm == 'MD5' or _algorithm == 'MD5-SESS':
            def md5_utf8(x):
                if isinstance(x, str):
                    x = x.encode('utf-8')
                return hashlib.md5(x).hexdigest()
            hash_utf8 = md5_utf8
        elif _algorithm == 'SHA':
            def sha_utf8(x):
                if isinstance(x, str):
                    x = x.encode('utf-8')
                return hashlib.sha1(x).hexdigest()
            hash_utf8 = sha_utf8
    
    This module contains the set of Requests' exceptions.
'''
from urllib3.exceptions import HTTPError as BaseHTTPError
    
            errno = pytest.main(self.pytest_args)
        sys.exit(errno)
    
    # begin[licence]
#
# [The 'BSD licence']
# Copyright (c) 2005-2008 Terence Parr
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
# 1. Redistributions of source code must retain the above copyright
#    notice, this list of conditions and the following disclaimer.
# 2. Redistributions in binary form must reproduce the above copyright
#    notice, this list of conditions and the following disclaimer in the
#    documentation and/or other materials provided with the distribution.
# 3. The name of the author may not be used to endorse or promote products
#    derived from this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
# IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
# OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
# IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
# INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
# NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
# DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
# THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
# THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
#
# end[licence]
    
    MIN_TOKEN_TYPE = UP+1
    
        def test_conflicts(self):
        # Note: Defined IP is more important than defined port in match
        self.assertTrue(self.addr.conflicts(self.addr1))
        self.assertTrue(self.addr.conflicts(self.addr2))
        self.assertTrue(self.addr.conflicts(self.addr_defined))
        self.assertFalse(self.addr.conflicts(self.addr_default))
    
    
# http://docs.readthedocs.org/en/latest/faq.html#i-get-import-errors-on-libraries-that-depend-on-c-modules
# c.f. #262
sys.modules.update(
    (mod_name, mock.MagicMock()) for mod_name in ['augeas'])
    
    # Add any extra paths that contain custom files (such as robots.txt or
# .htaccess) here, relative to this directory. These files are copied
# directly to the root of the documentation.
#html_extra_path = []
    
    # Documents to append as an appendix to all manuals.
#texinfo_appendices = []
    
        def tearDown(self):
        logging.disable(logging.NOTSET)
    
    import mock
    
        '''def test_object(queue):
           queue_object = QueueObject(queue, True)
           print('Inside func: {}'.format(queue_object.object))'''
    
        def test_display_current_time_at_midnight(self):
        '''
        Will almost always fail (despite of right at/after midnight).
        '''
        time_provider_stub = MidnightTimeProvider()
        class_under_test = TimeDisplay(time_provider_stub)
        expected_time = '<span class=\'tinyBoldText\'>24:01</span>'
        self.assertEqual(class_under_test.get_current_time_as_html_fragment(), expected_time)
    
        def __init__(self):
        self.time_provider = datetime.datetime
    
        def __init__(self, src, dest):
        self.src = src
        self.dest = dest
    
        That is, standard diff tools should be able to identify new or fixed
    violations by comparing results of this function
    
    def get_api_subtype():
    if is_api() and c.render_style.startswith('api-'):
        return c.render_style[4:]
    
    # class specific overrides
api('link',          LinkJsonTemplate)
api('promotedlink',  PromotedLinkJsonTemplate)
api('message',       MessageJsonTemplate)
api('subreddit',     SubredditJsonTemplate)
api('labeledmulti',  LabeledMultiJsonTemplate)
api('reddit',        RedditJsonTemplate)
api('panestack',     PanestackJsonTemplate)
api('htmlpanestack', NullJsonTemplate)
api('listing',       ListingJsonTemplate)
api('searchlisting', SearchListingJsonTemplate)
api('userlisting',   UserListingJsonTemplate)
api('usertableitem', UserTableItemJsonTemplate)
api('account',       AccountJsonTemplate)
    
        def GET_button_demo_page(self):
        # no buttons for domain listings -> redirect to top level
        if isinstance(c.site, DomainSR):
            return self.redirect('/buttons')
        return BoringPage(_('reddit buttons'),
                          show_sidebar = False, 
                          content=ButtonDemoPanel()).render()
    
    from r2.controllers.api_docs import api_doc, api_section
from r2.controllers.oauth2 import allow_oauth2_access
    
    
    def send400(self):
        if 'usable_error_content' in request.environ:
            return request.environ['usable_error_content']
        else:
            res = pages.RedditError(
                title=_('bad request (%(domain)s)') % dict(domain=g.domain),
                message=_('you sent an invalid request'),
                explanation=request.GET.get('explanation'))
            return res.render()