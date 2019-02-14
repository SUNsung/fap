
        
        
def make_setting_element(setting_data, app, fromdocname):
    refnode = make_refnode(app.builder, fromdocname,
                           todocname=setting_data['docname'],
                           targetid=setting_data['refid'],
                           child=nodes.Text(setting_data['setting_name']))
    p = nodes.paragraph()
    p += refnode
    
        def run(self, args, opts):
        if len(args) != 1:
            raise UsageError()
        filename = args[0]
        if not os.path.exists(filename):
            raise UsageError('File not found: %s\n' % filename)
        try:
            module = _import_file(filename)
        except (ImportError, ValueError) as e:
            raise UsageError('Unable to load %r: %s\n' % (filename, e))
        spclasses = list(iter_spider_classes(module))
        if not spclasses:
            raise UsageError('No spider found in file: %s\n' % filename)
        spidercls = spclasses.pop()
    
        def syntax(self):
        return '[options]'
    
    else:
    
        from twisted.internet.ssl import AcceptableCiphers
    from twisted.internet._sslverify import (ClientTLSOptions,
                                             verifyHostname,
                                             VerificationError)
    try:
        # XXX: this import would fail on Debian jessie with system installed
        # service_identity library, due to lack of cryptography.x509 dependency
        # See https://github.com/pyca/service_identity/issues/21
        from service_identity.exceptions import CertificateError
        verification_errors = (CertificateError, VerificationError)
    except ImportError:
        verification_errors = VerificationError
    
            dfd.addBoth(lambda _: logger.info('Spider closed (%(reason)s)',
                                          {'reason': reason},
                                          extra={'spider': spider}))
    
    
class Signature(jose.Signature):
    '''ACME-specific Signature. Uses ACME-specific Header for customer fields.'''
    __slots__ = jose.Signature._orig_slots  # pylint: disable=no-member
    
    
# If extensions (or modules to document with autodoc) are in another directory,
# add these directories to sys.path here. If the directory is relative to the
# documentation root, use os.path.abspath to make it absolute, like shown here.
sys.path.insert(0, os.path.abspath(os.path.join(here, '..')))
    
            self.config = util.get_apache_configurator(
            self.config_path, self.vhost_path, self.config_dir, self.work_dir)
    
            with mock.patch('certbot.util.get_os_info') as mock_info:
            for distro in entrypoint.OVERRIDE_CLASSES.keys():
                mock_info.return_value = (distro, 'whatever')
                self.assertEqual(entrypoint.get_configurator(),
                                 entrypoint.OVERRIDE_CLASSES[distro])
    
            # Check to make sure challenge config path is included in apache config
        self.assertEqual(
            len(self.sni.configurator.parser.find_dir(
                'Include', self.sni.challenge_conf)), 1)
        self.assertEqual(len(responses), 1)
        self.assertEqual(responses[0], response)
    
    # If true, links to the reST sources are added to the pages.
#html_show_sourcelink = True
    
      Args:
    clean_lines: A CleansedLines instance containing the file.
    linenum: The number of the line to check.
  Returns:
    True if current line contains a function with 'override'
    virt-specifier.
  '''
  # Scan back a few lines for start of current function
  for i in xrange(linenum, max(-1, linenum - 10), -1):
    match = Match(r'^([^()]*\w+)\(', clean_lines.elided[i])
    if match:
      # Look for 'override' after the matching closing parenthesis
      line, _, closing_paren = CloseExpression(
          clean_lines, i, len(match.group(1)))
      return (closing_paren >= 0 and
              Search(r'\boverride\b', line[closing_paren:]))
  return False
    
    import os
import sys
import codecs
import re
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
  def Done( self ):
    return bool( self._response_future ) and self._response_future.done()
    
      # Start the next poll (only if the last poll didn't raise an exception)
  return True

    
    
  def _ThreadMain( self ):
    while True:
      time.sleep( self._ping_interval_seconds )
    
      python_interpreter = _PathToPythonUsedDuringBuild()
  if python_interpreter and utils.GetExecutable( python_interpreter ):
    return python_interpreter
    
      AddToGroupMap( 'Include'  , preproc_group )
  AddToGroupMap( 'Define'   , preproc_group )
  AddToGroupMap( 'Macro'    , preproc_group )
  AddToGroupMap( 'PreCondit', preproc_group )
    
      # 0 is not False
  assert_that( _HandlePollResponse( 0, None ), equal_to( True ) )
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
        return result

    
    def main():
    for name, fn in [('sequential',
                      functools.partial(download_urls_sequential, URLS)),
                     ('processes',
                      functools.partial(download_urls_with_executor,
                                        URLS,
                                        ProcessPoolExecutor(10))),
                     ('threads',
                      functools.partial(download_urls_with_executor,
                                        URLS,
                                        ThreadPoolExecutor(10)))]:
        sys.stdout.write('%s: ' % name.ljust(12))
        start = time.time()
        url_map = fn()
        sys.stdout.write('%.2f seconds (%d of %d downloaded)\n' %
                         (time.time() - start, len(url_map), len(URLS)))
    
    # Grouping the document tree into LaTeX files. List of tuples
# (source start file, target name, title, author, documentclass [howto/manual]).
latex_documents = [
  ('index', 'futures.tex', u'futures Documentation',
   u'Brian Quinlan', 'manual'),
]
    
    
def test_raw16():
    check_raw(3, 1 << 5)
    check_raw(3, (1 << 16) - 1)