
        
            with patch('regenmaschine.login', return_value=mock_coro(True)):
        result = await flow.async_step_user(user_input=conf)
    
        if CONF_CONDITION in action:
        return ACTION_CHECK_CONDITION
    
        def __init__(self, api_key):
        '''Initialize the BookSky.'''
        self._api_key = api_key
        self.devices = {}
        _LOGGER.debug('Initial BloomSky device load...')
        self.refresh_devices()
    
    from homeassistant.core import callback
from . import config_flow
from .const import DOMAIN
    
    
async def test_if_fires_on_event_with_data(hass, calls):
    '''Test the firing of events with data.'''
    assert await async_setup_component(hass, automation.DOMAIN, {
        automation.DOMAIN: {
            'trigger': {
                'platform': 'event',
                'event_type': 'test_event',
                'event_data': {'some_attr': 'some_value'}
            },
            'action': {
                'service': 'test.automation',
            }
        }
    })
    
    
    {
    {
    {            }
        }
    })
    
    
async def test_setup_defined_accesspoint(hass):
    '''Test we initiate config entry for the accesspoint.'''
    with patch.object(hass, 'config_entries') as mock_config_entries, \
            patch.object(hmipc, 'configured_haps', return_value=[]):
        mock_config_entries.flow.async_init.return_value = mock_coro()
        assert await async_setup_component(hass, hmipc.DOMAIN, {
            hmipc.DOMAIN: {
                hmipc.CONF_ACCESSPOINT: 'ABC123',
                hmipc.CONF_AUTHTOKEN: '123',
                hmipc.CONF_NAME: 'hmip',
            }
        }) is True
    
    
def conv2d(x, kernel_size, out_channels,
           act_fn=relu,
           strides=1,
           padding='SAME',
           name=None,
           reuse=None):
    '''2-D 卷积层
    Input shape:  [batch_size, in_h, in_w, in_channels]
    Output shape: [batch_size, out_h, out_w, out_channels]
    
            return self._call(x)

    
    
def multi_highway_conv2d(x, kernel_size, n_layer,
                         act_fn=relu,
                         strides=1,
                         padding='SAME',
                         carry_bias=-1.0,
                         name=None):
    '''多层 highway_conv2d'''
    if isinstance(kernel_size, int):
        kernel_size = [kernel_size] * n_layer
    
    
'''预定义好的正则化器
'''
l1_regularizer = L1L2Regularizer(l1=0.01)
    
    from __future__ import print_function
from socket import timeout