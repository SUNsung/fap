
        
            def test_inline_change_fk_change_perm(self):
        permission = Permission.objects.get(codename='change_inner2', content_type=self.inner_ct)
        self.user.user_permissions.add(permission)
        response = self.client.get(self.holder_change_url)
        # Change permission on inner2s, so we can change existing but not add new
        self.assertContains(response, '<h2>Inner2s</h2>', count=2)
        # Just the one form for existing instances
        self.assertContains(
            response, '<input type='hidden' id='id_inner2_set-TOTAL_FORMS' value='1' name='inner2_set-TOTAL_FORMS'>',
            html=True
        )
        self.assertContains(
            response,
            '<input type='hidden' id='id_inner2_set-0-id' value='%i' name='inner2_set-0-id'>' % self.inner2.id,
            html=True
        )
        # max-num 0 means we can't add new ones
        self.assertContains(
            response,
            '<input type='hidden' id='id_inner2_set-MAX_NUM_FORMS' value='0' name='inner2_set-MAX_NUM_FORMS'>',
            html=True
        )
        # TabularInline
        self.assertContains(response, '<th class='column-dummy required'>Dummy</th>', html=True)
        self.assertContains(
            response,
            '<input type='number' name='inner2_set-2-0-dummy' value='%s' '
            'class='vIntegerField' id='id_inner2_set-2-0-dummy'>' % self.inner2.dummy,
            html=True,
        )
    
            response = RedirectView.as_view(url='/bar/', query_string=True)(self.rf.get('/foo/?pork=spam'))
        self.assertEqual(response.status_code, 302)
        self.assertEqual(response.url, '/bar/?pork=spam')
    
    
# For more information, see the OGR C API source code:
#  https://www.gdal.org/ogr__api_8h.html
#
# The OGR_DS_* routines are relevant here.
class DataSource(GDALBase):
    'Wraps an OGR Data Source object.'
    destructor = capi.destroy_ds
    
                # For out of memory drivers, check filename argument
            if driver.name != 'MEM' and 'name' not in ds_input:
                raise GDALException('Specify name for creation of raster with driver '{}'.'.format(driver.name))
    
        def import_user_input(self, user_input):
        'Import the Spatial Reference from the given user input string.'
        capi.from_user_input(self.ptr, force_bytes(user_input))
    
    def shorten_title(title):
    m1 = re.search('[[0-9]*]', title)
    m2 = re.search(''.*'', title)
    if m1:
        title = m1.group(0)
    if m2:
        title = ' '.join((title, m2.group(0)))   
    return title[:50] + ' [...]'    
    
            self.assertFalse(sns_listener.get_topic_by_arn(topic_arn))
        sns_listener.do_create_topic(topic_arn)
        self.assertTrue(sns_listener.get_topic_by_arn(topic_arn) is not None)
        sns_listener.do_subscribe(
            topic_arn,
            'http://localhost:1234/listen',
            'http',
            sub_arn,
            {}
        )
        self.assertTrue(sns_listener.get_subscription_by_arn(sub_arn))
        sns_listener.do_unsubscribe(sub_arn)
        self.assertFalse(sns_listener.get_subscription_by_arn(sub_arn))
    
        dynamodb = aws_stack.connect_to_resource('dynamodb')
    # create table with stream forwarding config
    aws_stack.create_dynamodb_table(TEST_TABLE_NAME, partition_key=PARTITION_KEY)
    table = dynamodb.Table(TEST_TABLE_NAME)
    
        def test_delivery_stream_tags(self):
        result = firehose_api.get_delivery_stream_tags(TEST_STREAM_NAME)
        self.assertEquals(TEST_TAGS, result['Tags'])
        result = firehose_api.get_delivery_stream_tags(TEST_STREAM_NAME, exclusive_start_tag_key='MyTag')
        self.assertEquals([TEST_TAG_2], result['Tags'])
        result = firehose_api.get_delivery_stream_tags(TEST_STREAM_NAME, limit=1)
        self.assertEquals([TEST_TAG_1], result['Tags'])
        self.assertEquals(True, result['HasMore'])

    
            assert 'Parameters' in response
        assert len(response['Parameters']) > 0
        assert response['Parameters'][0]['Name'] == 'test_put'
        assert response['Parameters'][0]['Value'] == '1'

    
        def _replace(self, response, pattern, replacement):
        content = to_str(response.content)
        response._content = re.sub(pattern, replacement, content)
    
    
def publish_event(time_before, result, kwargs):
    event_publisher.fire_event(
        event_publisher.EVENT_LAMBDA_INVOKE_FUNC,
        payload={'f': _func_name(kwargs), 'd': now_utc() - time_before, 'r': result[0]})
    
        def test_put_rule(self):
        self.events_client.put_rule(Name='test_rule', EventPattern=json.dumps(TEST_EVENT_PATTERN))
        rules = self.events_client.list_rules(NamePrefix='test_rule')['Rules']
    
            super(HandEnv, self).__init__(
            model_path=model_path, n_substeps=n_substeps, n_actions=20,
            initial_qpos=initial_qpos)
    
        def step(self, a):
        posbefore = self.sim.data.qpos[0]
        self.do_simulation(a, self.frame_skip)
        posafter, height, ang = self.sim.data.qpos[0:3]
        alive_bonus = 1.0
        reward = ((posafter - posbefore) / self.dt)
        reward += alive_bonus
        reward -= 1e-3 * np.square(a).sum()
        done = not (height > 0.8 and height < 2.0 and
                    ang > -1.0 and ang < 1.0)
        ob = self._get_obs()
        return ob, reward, done, {}
    
            self.fd_polygon = fixtureDef(
                        shape = polygonShape(vertices=
                        [(0, 0),
                         (1, 0),
                         (1, -1),
                         (0, -1)]),
                        friction = FRICTION)
    
    from gym.utils import colorize
    
    bogus_mnist = \
[[
' **** ',
'*    *',
'*    *',
'*    *',
'*    *',
' **** '
], [
'  **  ',
' * *  ',
'   *  ',
'   *  ',
'   *  ',
'  *** '
], [
' **** ',
'*    *',
'     *',
'  *** ',
'**    ',
'******'
], [
' **** ',
'*    *',
'   ** ',
'     *',
'*    *',
' **** '
], [
' *  * ',
' *  * ',
' *  * ',
' **** ',
'    * ',
'    * '
], [
' **** ',
' *    ',
' **** ',
'    * ',
'    * ',
' **** '
], [
'  *** ',
' *    ',
' **** ',
' *  * ',
' *  * ',
' **** '
], [
' **** ',
'    * ',
'   *  ',
'   *  ',
'  *   ',
'  *   '
], [
' **** ',
'*    *',
' **** ',
'*    *',
'*    *',
' **** '
], [
' **** ',
'*    *',
'*    *',
' *****',
'     *',
' **** '
]]