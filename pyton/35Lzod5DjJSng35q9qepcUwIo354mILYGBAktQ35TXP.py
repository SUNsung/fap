
        
        
def init_app(app):
    '''Register database functions with the Flask app. This is called by
    the application factory.
    '''
    app.teardown_appcontext(close_db)
    app.cli.add_command(init_db_command)

    
        def reraise(tp, value, tb=None):
        if value.__traceback__ is not tb:
            raise value.with_traceback(tb)
        raise value
    
            .. versionadded:: 0.11
        '''
        self.record_once(lambda s: s.app._register_error_handler(
            self.name, code_or_exception, f))

    
    This typically means that you attempted to use functionality that needed
an active HTTP request.  Consult the documentation on testing for
information about how to avoid this problem.\
'''
_app_ctx_err_msg = '''\
Working outside of application context.
    
    # The namespace for code signals.  If you are not Flask code, do
# not put signals in here.  Create your own namespace instead.
_signals = Namespace()
    
            # Insert the import statement to setup.py if not present
        with open(setup_path, 'a+') as setup:
            setup.seek(0)
            setup_content = setup.read()
            if not 'import fastentrypoints' in setup_content:
                setup.seek(0)
                setup.truncate()
                setup.write('import fastentrypoints\n' + setup_content)
    
    
@pytest.fixture(autouse=True)
def shell(mocker):
    shell = mocker.patch('thefuck.entrypoints.not_configured.shell',
                         new_callable=MagicMock)
    shell.get_history.return_value = []
    shell.how_to_configure.return_value = ShellConfiguration(
        content='eval $(thefuck --alias)',
        path='/tmp/.bashrc',
        reload='bash',
        can_configure_automatically=True)
    return shell
    
        assert proc.expect([TIMEOUT, u'Aborted'])
    
    
@pytest.mark.functional
def test_how_to_configure_alias(proc, TIMEOUT):
    proc.sendline('unset -f fuck')
    how_to_configure(proc, TIMEOUT)

    
    
@pytest.mark.parametrize('before, after', [
    ('brew install sshfs',
     'brew cask install osxfuse && brew install sshfs')])
def test_get_new_command(before, after):
    command = Command(before, output)
    assert get_new_command(command) == after

    
    
class CryptoExtension(CreateExtension):
    
    
class RedirectFallbackMiddleware(MiddlewareMixin):
    # Defined as class-level attributes to be subclassing-friendly.
    response_gone_class = HttpResponseGone
    response_redirect_class = HttpResponsePermanentRedirect
    
    
class SessionStore(SessionBase):
    '''
    A cache-based session store.
    '''
    cache_key_prefix = KEY_PREFIX
    
        def items(self):
        return []
    
        if section is not None:
        if section not in sitemaps:
            raise Http404('No sitemap available for section: %r' % section)
        maps = [sitemaps[section]]
    else:
        maps = sitemaps.values()
    page = request.GET.get('p', 1)
    
    # Check imported dependencies for compatibility.
try:
    check_compatibility(urllib3.__version__, chardet.__version__)
except (AssertionError, ValueError):
    warnings.warn('urllib3 ({0}) or chardet ({1}) doesn't match a supported '
                  'version!'.format(urllib3.__version__, chardet.__version__),
                  RequestsDependencyWarning)
    
        builtin_str = str
    bytes = str
    str = unicode
    basestring = basestring
    numeric_types = (int, long, float)
    integer_types = (int, long)
    
        # OPENSSL_VERSION_NUMBER doesn't exist in the Python 2.6 ssl module.
    system_ssl = getattr(ssl, 'OPENSSL_VERSION_NUMBER', None)
    system_ssl_info = {
        'version': '%x' % system_ssl if system_ssl is not None else ''
    }
    
        def redirect_resp_handler(sock):
        consume_socket_content(sock, timeout=0.5)
        location = u'//{0}:{1}/{2}'.format(host, port, path)
        sock.send(
            b'HTTP/1.1 301 Moved Permanently\r\n'
            b'Content-Length: 0\r\n'
            b'Location: ' + location.encode('utf8') + b'\r\n'
            b'\r\n'
        )
        redirect_request.append(consume_socket_content(sock, timeout=0.5))
        sock.send(b'HTTP/1.1 200 OK\r\n\r\n')
    
    import pytest
    
        def __enter__(self):
        self.start()
        self.ready_event.wait(self.WAIT_EVENT_TIMEOUT)
        return self.host, self.port
    
            :param request: The :class:`PreparedRequest <PreparedRequest>` being sent.
        :param proxies: A dictionary of schemes or schemes and hosts to proxy URLs.
        :rtype: str
        '''
        proxy = select_proxy(request.url, proxies)
        scheme = urlparse(request.url).scheme
    
        result.pop('ResponseMetadata', None)
    
            if tags_to_add:
            try:
                connection.create_tags(Resources=[image_id], Tags=ansible_dict_to_boto3_tag_list(tags_to_add))
                changed = True
            except (botocore.exceptions.BotoCoreError, botocore.exceptions.ClientError) as e:
                module.fail_json_aws(e, msg='Error updating tags')
    
        module = AnsibleAWSModule(argument_spec=argument_spec,
                              mutually_exclusive=[['customer_gateway_ids', 'filters']],
                              supports_check_mode=True)
    
        raise EIPException('could not find instance' + device_id)
    
    
if __name__ == '__main__':
    main()

    
        except WaiterError as we:
        module.fail_json(msg='An error occurred waiting for the snapshot to become available. (%s)' % str(we), exception=traceback.format_exc())
    except ClientError as ce:
        module.fail_json(msg=str(ce), exception=traceback.format_exc(), **camel_dict_to_snake_dict(ce.response))
    
    
def Main():
  build_file = p.join( DIR_OF_THIS_SCRIPT, 'third_party', 'ycmd', 'build.py' )
    
    
class ShutdownRequest( BaseRequest ):
  def __init__( self ):
    super( ShutdownRequest, self ).__init__()
    
      raise RuntimeError( 'Cannot find Python 2.7 or 3.4+. '
                      'Set the 'g:ycm_server_python_interpreter' option '
                      'to a Python interpreter path.' )
    
    
def OverlapLength_EmptyInput_test():
  eq_( 0, base.OverlapLength( '', 'goobar' ) )
  eq_( 0, base.OverlapLength( 'foobar', '' ) )
  eq_( 0, base.OverlapLength( '', '' ) )
    
    
# This file provides an UnsafeThreadPoolExecutor, which operates exactly like
# the upstream Python version of ThreadPoolExecutor with one exception: it
# doesn't wait for worker threads to finish before shutting down the Python
# interpreter.
#
# This is dangerous for many workloads, but fine for some (like when threads
# only send network requests). The YCM workload is one of those workloads where
# it's safe (the aforementioned network requests case).
    
    # The model was trained in a way that faces with a distance of 0.6 or less should be a match. But if you want to
# be more strict, you can look for a smaller face distance. For example, using a 0.55 cutoff would reduce false
# positive matches at the risk of more false negatives.
    
    face_detector = dlib.get_frontal_face_detector()
    
            if len(encodings) == 0:
            click.echo('WARNING: No faces found in {}. Ignoring file.'.format(file))
        else:
            known_names.append(basename)
            known_face_encodings.append(encodings[0])
    
    Tests for `face_recognition` module.
'''