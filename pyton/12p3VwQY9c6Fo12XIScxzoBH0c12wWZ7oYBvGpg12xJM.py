
        
        
# context locals
_request_ctx_stack = LocalStack()
_app_ctx_stack = LocalStack()
current_app = LocalProxy(_find_app)
request = LocalProxy(partial(_lookup_req_object, 'request'))
session = LocalProxy(partial(_lookup_req_object, 'session'))
g = LocalProxy(partial(_lookup_app_object, 'g'))

    
        #: Tag classes to bind when creating the serializer. Other tags can be
    #: added later using :meth:`~register`.
    default_tags = [
        TagDict,
        PassDict,
        TagTuple,
        PassList,
        TagBytes,
        TagMarkup,
        TagUUID,
        TagDateTime,
    ]
    
        preserve_context = False
    
        @bp.route('/bar', endpoint='bar')
    def foo_bar():
        return flask.request.endpoint
    
    
async def test_duplicate_error(hass):
    '''Test that errors are shown when duplicates are added.'''
    conf = {
        CONF_IP_ADDRESS: '192.168.1.100',
        CONF_PASSWORD: 'password',
        CONF_PORT: 8080,
        CONF_SSL: True,
    }
    
        try:
        await hass.async_add_job(auth.login)
        return await result
    except AuthorizationError as err:
        if err.response.status_code == 401:
            raise config_flow.CodeInvalid()
        raise config_flow.NestAuthError('Unknown error: {} ({})'.format(
            err, err.response.status_code))

    
    
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
    
            self.hass.states.set('test.indoorhumidity', 'A',
                             {ATTR_UNIT_OF_MEASUREMENT: '%'})
        self.hass.block_till_done()
        moldind = self.hass.states.get('sensor.mold_indicator')
        assert moldind
        assert moldind.state == 'unavailable'
        assert moldind.attributes.get(ATTR_DEWPOINT) is None
        assert moldind.attributes.get(ATTR_CRITICAL_TEMP) is None
    
        with patch.dict(discovery.CONFIG_ENTRY_HANDLERS, {
        'mock-service': 'mock-component'}), patch(
            'homeassistant.data_entry_flow.FlowManager.async_init') as m_init:
        await mock_discovery(hass, discover)
    
            # 更新聚类中心
        log.info(centers)
        for i in range(k):
            data_i = data[ret[:, 0] == i]  # 标签为 i 的样本
            centers[i, :] = np.mean(data_i, axis=0)  # 按类别过滤样本
    
    
    
    
def print_params_dict():
    ''''''
    print(SPLIT_LINE)
    print('params_dict')
    param_dict = get_params_dict()
    # pprint(param_dict, indent=2)
    for k, v in param_dict.items():
        print('   ', k, '\t', end='')
        pprint(v, indent=2)
        # for vk, vv in v.items():
        #     print(vk, '-', vv, '\t', end='')
        # print()