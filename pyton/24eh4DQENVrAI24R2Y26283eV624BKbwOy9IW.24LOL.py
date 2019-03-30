
        
            return out
    
    '''
requests.exceptions
~~~~~~~~~~~~~~~~~~~
    
    import pytest
from requests.compat import urljoin
    
    from . import utils
from . import packages
from .models import Request, Response, PreparedRequest
from .api import request, get, head, post, patch, put, delete, options
from .sessions import session, Session
from .status_codes import codes
from .exceptions import (
    RequestException, Timeout, URLRequired,
    TooManyRedirects, HTTPError, ConnectionError,
    FileModeWarning, ConnectTimeout, ReadTimeout
)
    
    
def test_idna_with_version_attribute(mocker):
    '''Verify we're actually setting idna version when it should be available.'''
    mocker.patch('requests.help.idna', new=VersionedPackage('2.6'))
    assert info()['idna'] == {'version': '2.6'}

    
        # Client Error.
    400: ('bad_request', 'bad'),
    401: ('unauthorized',),
    402: ('payment_required', 'payment'),
    403: ('forbidden',),
    404: ('not_found', '-o-'),
    405: ('method_not_allowed', 'not_allowed'),
    406: ('not_acceptable',),
    407: ('proxy_authentication_required', 'proxy_auth', 'proxy_authentication'),
    408: ('request_timeout', 'timeout'),
    409: ('conflict',),
    410: ('gone',),
    411: ('length_required',),
    412: ('precondition_failed', 'precondition'),
    413: ('request_entity_too_large',),
    414: ('request_uri_too_large',),
    415: ('unsupported_media_type', 'unsupported_media', 'media_type'),
    416: ('requested_range_not_satisfiable', 'requested_range', 'range_not_satisfiable'),
    417: ('expectation_failed',),
    418: ('im_a_teapot', 'teapot', 'i_am_a_teapot'),
    421: ('misdirected_request',),
    422: ('unprocessable_entity', 'unprocessable'),
    423: ('locked',),
    424: ('failed_dependency', 'dependency'),
    425: ('unordered_collection', 'unordered'),
    426: ('upgrade_required', 'upgrade'),
    428: ('precondition_required', 'precondition'),
    429: ('too_many_requests', 'too_many'),
    431: ('header_fields_too_large', 'fields_too_large'),
    444: ('no_response', 'none'),
    449: ('retry_with', 'retry'),
    450: ('blocked_by_windows_parental_controls', 'parental_controls'),
    451: ('unavailable_for_legal_reasons', 'legal_reasons'),
    499: ('client_closed_request',),
    
    def check_live_url(url):
    
    
class BufferFull(UnpackException):
    pass
    
    
def match(obj, buf):
    assert packb(obj) == buf
    assert unpackb(buf, use_list=0) == obj
    
            try:
            # qtpy is a small abstraction layer that lets you write
            # applications using a single api call to either PyQt or PySide
            # https://pypi.org/project/QtPy
            import qtpy  # noqa
        except ImportError:
            # If qtpy isn't installed, fall back on importing PyQt5, or PyQt5
            try:
                import PyQt5  # noqa
            except ImportError:
                try:
                    import PyQt4  # noqa
                except ImportError:
                    pass  # fail fast for all non-ImportError exceptions.
                else:
                    return init_qt_clipboard()
            else:
                return init_qt_clipboard()
            pass
        else:
            return init_qt_clipboard()
    
        result = s[lambda x: [True, False, True, True]]
    tm.assert_series_equal(result, s.iloc[[0, 2, 3]])
    
    import random
import signal
import subprocess
    
    
class _IncludeBlock(_Node):
    def __init__(self, name: str, reader: '_TemplateReader', line: int) -> None:
        self.name = name
        self.template_name = reader.name
        self.line = line