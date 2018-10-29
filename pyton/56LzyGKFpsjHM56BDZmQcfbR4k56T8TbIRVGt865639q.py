
        
            return out
    
    
class RequestsWarning(Warning):
    '''Base warning for Requests.'''
    pass
    
    
class CaseInsensitiveDict(MutableMapping):
    '''A case-insensitive ``dict``-like object.
    
    # Set default logging handler to avoid 'No handler found' warnings.
import logging
from logging import NullHandler
    
    import os
import re
import time
import hashlib
import threading
import warnings
    
    - name: obtain all facts for a single WAF
  aws_waf_facts:
    name: test_waf
'''
    
        module.exit_json(changed=False, addresses=get_eips_details(module))
    
        if instance_id:
        try:
            volumes = ec2.get_all_volumes(filters={'attachment.instance-id': instance_id, 'attachment.device': device_name})
        except boto.exception.BotoServerError as e:
            module.fail_json(msg='%s: %s' % (e.error_code, e.error_message))
    
        def extract_service_from(self, service):
        # some fields are datetime which is not JSON serializable
        # make them strings
        if 'deployments' in service:
            for d in service['deployments']:
                if 'createdAt' in d:
                    d['createdAt'] = str(d['createdAt'])
                if 'updatedAt' in d:
                    d['updatedAt'] = str(d['updatedAt'])
        if 'events' in service:
            if not self.module.params['events']:
                del service['events']
            else:
                for e in service['events']:
                    if 'createdAt' in e:
                        e['createdAt'] = str(e['createdAt'])
        return service
    
    
def copy(module, connection, name, target, bucket):
    ''' Copy an Elasticache backup. '''
    try:
        response = connection.copy_snapshot(SourceSnapshotName=name,
                                            TargetSnapshotName=target,
                                            TargetBucket=bucket)
        changed = True
    except botocore.exceptions.ClientError as e:
        module.fail_json(msg='Unable to copy the snapshot.', exception=traceback.format_exc())
    return response, changed
    
    
def load_data(cert, key, cert_chain):
    # if paths are provided rather than lookups read the files and return the contents
    if cert and os.path.isfile(cert):
        cert = open(cert, 'r').read().rstrip()
    if key and os.path.isfile(key):
        key = open(key, 'r').read().rstrip()
    if cert_chain and os.path.isfile(cert_chain):
        cert_chain = open(cert_chain, 'r').read()
    return cert, key, cert_chain
    
        if dataset_name == 'SA':
        lb = LabelBinarizer()
        x1 = lb.fit_transform(X[:, 1].astype(str))
        x2 = lb.fit_transform(X[:, 2].astype(str))
        x3 = lb.fit_transform(X[:, 3].astype(str))
        X = np.c_[X[:, :1], x1, x2, x3, X[:, 4:]]
        y = (y != b'normal.').astype(int)
    
                gc.collect()
            print('benchmarking lars_path (with Gram):', end='')
            sys.stdout.flush()
            tstart = time()
            G = np.dot(X.T, X)  # precomputed Gram matrix
            Xy = np.dot(X.T, y)
            lars_path(X, y, Xy=Xy, Gram=G, method='lasso')
            delta = time() - tstart
            print('%0.3fs' % delta)
            results['lars_path (with Gram)'].append(delta)
    
                gc.collect()
            print('benchmarking scikit-learn randomized_svd: n_iter=0')
            tstart = time()
            randomized_svd(X, rank, n_iter=0)
            results['scikit-learn randomized_svd (n_iter=0)'].append(
                time() - tstart)
    
        # Print results
    ###########################################################################
    print('Script arguments')
    print('===========================')
    arguments = vars(opts)
    print('%s \t | %s ' % ('Arguments'.ljust(16),
                           'Value'.center(12),))
    print(25 * '-' + ('|' + '-' * 14) * 1)
    for key, value in arguments.items():
        print('%s \t | %s ' % (str(key).ljust(16),
                               str(value).strip().center(12)))
    print('')
    
        print('============================================')
    print('Warning: this is going to take a looong time')
    print('============================================')
    
    __all__ = ['normcase','isabs','join','splitdrive','split','splitext',
           'basename','dirname','commonprefix','getsize','getmtime',
           'getatime','getctime', 'islink','exists','lexists','isdir','isfile',
           'expanduser','expandvars','normpath','abspath',
           'curdir','pardir','sep','pathsep','defpath','altsep','extsep',
           'devnull','realpath','supports_unicode_filenames']
    
    import os
import sys
import stat
import genericpath
from genericpath import *
    
        def test_chmod(self):
        p = self.cls(BASE) / 'fileA'
        mode = p.stat().st_mode
        # Clear writable bit
        new_mode = mode & ~0o222
        p.chmod(new_mode)
        self.assertEqual(p.stat().st_mode, new_mode)
        # Set writable bit
        new_mode = mode | 0o222
        p.chmod(new_mode)
        self.assertEqual(p.stat().st_mode, new_mode)
    
                with support.change_cwd(ABSTFN + '/k'):
                self.assertEqual(realpath('a'), ABSTFN + '/y/a')
        finally:
            support.unlink(ABSTFN + '/k')
            safe_rmdir(ABSTFN + '/y')
            safe_rmdir(ABSTFN)
    
        def testMixedIterationAndReads(self):
        self.createTempFile()
        linelen = len(self.TEXT_LINES[0])
        halflen = linelen // 2
        with BZ2File(self.filename) as bz2f:
            bz2f.read(halflen)
            self.assertEqual(next(bz2f), self.TEXT_LINES[0][halflen:])
            self.assertEqual(bz2f.read(), self.TEXT[linelen:])
        with BZ2File(self.filename) as bz2f:
            bz2f.readline()
            self.assertEqual(next(bz2f), self.TEXT_LINES[1])
            self.assertEqual(bz2f.readline(), self.TEXT_LINES[2])
        with BZ2File(self.filename) as bz2f:
            bz2f.readlines()
            self.assertRaises(StopIteration, next, bz2f)
            self.assertEqual(bz2f.readlines(), [])
    
    # Make a local copy of what we are going to send.
with open('outgoing.msg', 'wb') as f:
    f.write(bytes(msg))
    
        for filename in os.listdir(directory):
        path = os.path.join(directory, filename)
        if not os.path.isfile(path):
            continue
        # Guess the content type based on the file's extension.  Encoding
        # will be ignored, although we should check for simple things like
        # gzip'd or compressed files.
        ctype, encoding = mimetypes.guess_type(path)
        if ctype is None or encoding is not None:
            # No guess could be made, or the file is encoded (compressed), so
            # use a generic bag-of-bits type.
            ctype = 'application/octet-stream'
        maintype, subtype = ctype.split('/', 1)
        with open(path, 'rb') as fp:
            msg.add_attachment(fp.read(),
                               maintype=maintype,
                               subtype=subtype,
                               filename=filename)
    # Now send or store the message
    if args.output:
        with open(args.output, 'wb') as fp:
            fp.write(msg.as_bytes(policy=SMTP))
    else:
        with smtplib.SMTP('localhost') as s:
            s.send_message(msg)
    
    ##
    
    #
# Function run by worker processes
#
    
    def clean_pdf_link(link):
    if 'arxiv' in link:
        link = link.replace('abs', 'pdf')   
        if not(link.endswith('.pdf')):
            link = '.'.join((link, 'pdf'))
    
    
class CompleterAvailableRequest( BaseRequest ):
  def __init__( self, filetypes ):
    super( CompleterAvailableRequest, self ).__init__()
    self.filetypes = filetypes
    self._response = None
    
    
  def Poll( self, diagnostics_handler ):
    '''This should be called regularly to check for new messages in this buffer.
    Returns True if Poll should be called again in a while. Returns False when
    the completer or server indicated that further polling should not be done
    for the requested file.'''
    
    
  def IsAllowed( self, diagnostic ):
    # NOTE: a diagnostic IsAllowed() ONLY if NO filters match it
    for filterMatches in self._filters:
      if filterMatches( diagnostic ):
        return False
    
      # On UNIX platforms, we use sys.executable as the Python interpreter path.
  # We cannot use sys.executable on Windows because for unknown reasons, it
  # returns the Vim executable. Instead, we use sys.exec_prefix to deduce the
  # interpreter path.
  python_interpreter = ( WIN_PYTHON_PATH if utils.OnWindows() else
                         sys.executable )
  if _EndsWithPython( python_interpreter ):
    return python_interpreter
    
    from ycm.tests.test_utils import MockVimModule
MockVimModule()
    
        with patch.object( ycm._message_poll_request,
                       '_response_future',
                       new = MockAsyncServerResponseDone( [] ) ) as mock_future:
      ycm.OnPeriodicTick() # Uses ycm._message_poll_request ...
  '''
  return mock.MagicMock( wraps = FakeFuture( True, response ) )
    
    
@patch( 'ycm.vimsupport.CurrentFiletypes', return_value = [ 'java' ] )
def GetCompleteDoneHooks_ResultOnJava_test( *args ):
  request = CompletionRequest( None )
  result = list( request._GetCompleteDoneHooks() )
  eq_( result, [ request._OnCompleteDone_FixIt ] )
    
    
def BuildYcmdLibs( args ):
  if not args.skip_build:
    subprocess.check_call( [
      sys.executable,
      p.join( DIR_OF_THIS_SCRIPT, 'third_party', 'ycmd', 'build.py' )
    ] )