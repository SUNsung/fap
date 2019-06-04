
        
        errors = []
title_links = []
previous_links = []
anchor_re = re.compile(anchor + '\s(.+)')
section_title_re = re.compile('\*\s\[(.*)\]')
link_re = re.compile('\[(.+)\]\((http.*)\)')
    
        def decode(self, value):
        if value != self.resource_type:
            raise jose.DeserializationError(
                'Wrong resource type: {0} instead of {1}'.format(
                    value, self.resource_type))
        return value

    
            self.addr1 = Addr.fromstring('127.0.0.1')
        self.addr2 = Addr.fromstring('127.0.0.1:443')
        self.addr_default = Addr.fromstring('_default_:443')
    
       certbot certonly \\
     --dns-cloudflare \\
     --dns-cloudflare-credentials ~/.secrets/certbot/cloudflare.ini \\
     --dns-cloudflare-propagation-seconds 60 \\
     -d example.com
    
    
def cityscapes_to_coco_all_random(cityscapes_id):
    lookup = {
        0: -1,  # ... background
        1: -1,  # bicycle
        2: -1,  # car
        3: -1,  # person (ignore)
        4: -1,  # train
        5: -1,  # truck
        6: -1,  # motorcycle
        7: -1,  # bus
        8: -1,  # rider (ignore)
    }
    return lookup[cityscapes_id]

    
        num = len(roidb)
    filtered_roidb = [entry for entry in roidb if is_valid(entry)]
    num_after = len(filtered_roidb)
    logger.info('Filtered {} roidb entries: {} -> {}'.
                format(num - num_after, num, num_after))
    return filtered_roidb
    
    import logging
import numpy as np
import os
import shutil
import uuid
    
    
def _mkanchors(ws, hs, x_ctr, y_ctr):
    '''Given a vector of widths (ws) and heights (hs) around a center
    (x_ctr, y_ctr), output a set of anchors (windows).
    '''
    ws = ws[:, np.newaxis]
    hs = hs[:, np.newaxis]
    anchors = np.hstack(
        (
            x_ctr - 0.5 * (ws - 1),
            y_ctr - 0.5 * (hs - 1),
            x_ctr + 0.5 * (ws - 1),
            y_ctr + 0.5 * (hs - 1)
        )
    )
    return anchors
    
        if cfg.KRCNN.USE_DECONV_OUTPUT:
        # Use ConvTranspose to predict heatmaps; results in 2x upsampling
        blob_out = model.ConvTranspose(
            blob_in,
            blob_name,
            dim,
            cfg.KRCNN.NUM_KEYPOINTS,
            kernel=cfg.KRCNN.DECONV_KERNEL,
            pad=int(cfg.KRCNN.DECONV_KERNEL / 2 - 1),
            stride=2,
            weight_init=(cfg.KRCNN.CONV_INIT, {'std': 0.001}),
            bias_init=const_fill(0.0)
        )
    else:
        # Use Conv to predict heatmaps; does no upsampling
        blob_out = model.Conv(
            blob_in,
            blob_name,
            dim,
            cfg.KRCNN.NUM_KEYPOINTS,
            kernel=1,
            pad=0,
            stride=1,
            weight_init=(cfg.KRCNN.CONV_INIT, {'std': 0.001}),
            bias_init=const_fill(0.0)
        )
    
    import numpy as np
import logging
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
# This class can be used to keep the ycmd server alive for the duration of the
# life of the client. By default, ycmd shuts down if it doesn't see a request in
# a while.
class YcmdKeepalive( object ):
  def __init__( self, ping_interval_seconds = 60 * 10 ):
    self._keepalive_thread = Thread( target = self._ThreadMain )
    self._keepalive_thread.daemon = True
    self._ping_interval_seconds = ping_interval_seconds
    
    
def _GetAllDescendentats( root_group ):
  descendants = []
  for child in root_group.children:
    descendants.append( child )
    descendants.extend( _GetAllDescendentats( child ) )
  return descendants
    
    # General information about the project.
project = u'futures'
copyright = u'2009-2011, Brian Quinlan'
    
    
def make_color_fn(code):
    return lambda s: ansi_color(code, s)
    
    
def get_source_name_from_network_mode(network_mode, source_type):
    if not network_mode:
        return
    
    
def timeparse(sval):
    '''Parse a time expression, returning it as a number of seconds.  If
    possible, the return value will be an `int`; if this is not
    possible, the return will be a `float`.  Returns `None` if a time
    expression cannot be parsed from the given string.
    
        def test_unicode_path_from_options(self):
        paths = [b'\xe5\xb0\xb1\xe5\x90\x83\xe9\xa5\xad/docker-compose.yml']
        opts = {'--file': paths}
        environment = Environment.from_env_file('.')
        assert get_config_path_from_options(
            '.', opts, environment
        ) == ['就吃饭/docker-compose.yml']
    
        def test_api_error_version_other(self, mock_logging):
        msg = b'Something broke!'
        with pytest.raises(errors.ConnectionError):
            with handle_connection_errors(mock.Mock(api_version='1.22')):
                raise APIError(None, None, msg)
    
        def test_sort_service_dicts_3(self):
        services = [
            {
                'name': 'child'
            },
            {
                'name': 'parent',
                'links': ['child']
            },
            {
                'links': ['parent'],
                'name': 'grandparent'
            },
        ]
    
        def test_parse_v2_from_service(self):
        volume_from = VolumeFromSpec.parse('servicea', self.services, V2_0)
        assert volume_from == VolumeFromSpec('servicea', 'rw', 'service')
    
    
def test_invalid_with_space():
    assert timeparse.timeparse('5h 34m 56s') is None