
        
            HEART = 0
    DIAMOND = 1
    CLUBS = 2
    SPADE = 3
    
    
class State(Enum):
    unvisited = 0
    visited = 1
    
        @property
    def origin_req_host(self):
        return self.get_origin_req_host()
    
        return {
        'platform': platform_info,
        'implementation': implementation_info,
        'system_ssl': system_ssl_info,
        'using_pyopenssl': pyopenssl is not None,
        'pyOpenSSL': pyopenssl_info,
        'urllib3': urllib3_info,
        'chardet': chardet_info,
        'cryptography': cryptography_info,
        'idna': idna_info,
        'requests': {
            'version': requests_version,
        },
    }
    
    
def test_idna_without_version_attribute(mocker):
    '''Older versions of IDNA don't provide a __version__ attribute, verify
    that if we have such a package, we don't blow up.
    '''
    mocker.patch('requests.help.idna', new=None)
    assert info()['idna'] == {'version': ''}
    
        close_server = threading.Event()
    server = Server(response_handler, wait_to_close_event=close_server)
    
    
class TestSuperLen:
    
                        new_fields.append(
                        (field.decode('utf-8') if isinstance(field, bytes) else field,
                         v.encode('utf-8') if isinstance(v, str) else v))
    
    import josepy as jose
    
    # If extensions (or modules to document with autodoc) are in another directory,
# add these directories to sys.path here. If the directory is relative to the
# documentation root, use os.path.abspath to make it absolute, like shown here.
#
import os
# import sys
# sys.path.insert(0, os.path.abspath('.'))
    
    
def im_conv_body_only(model, im, target_scale, target_max_size):
    '''Runs `model.conv_body_net` on the given image `im`.'''
    im_blob, im_scale, _im_info = blob_utils.get_image_blob(
        im, target_scale, target_max_size
    )
    workspace.FeedBlob(core.ScopedName('data'), im_blob)
    workspace.RunNet(model.conv_body_net.Proto().name)
    return im_scale