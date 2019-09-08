
        
            def _real_extract(self, url):
        display_id = self._match_id(url)
    
            subtitles = {}
        for resource in video.get('resources', []):
            if resource.startswith('closed_caption_'):
                splitted_resource = resource.split('_')
                if splitted_resource[2]:
                    subtitles.setdefault('en', []).append({
                        'url': 'https://resources.redbull.tv/%s/%s' % (video_id, resource),
                        'ext': splitted_resource[2],
                    })
    
                    for caption in asset.get('caption_metadata', []):
                    caption_url = caption.get('source_url')
                    if not caption_url:
                        continue
                    subtitles.setdefault(caption.get('language', 'en'), []).append({
                        'url': caption_url,
                        'ext': determine_ext(caption_url, 'vtt'),
                    })
            elif asset.get('type') == 'image':
                asset_location = asset.get('location')
                if not asset_location:
                    continue
                thumbnails.append({
                    'url': asset_location,
                    'width': int_or_none(asset.get('width')),
                    'height': int_or_none(asset.get('height')),
                })
        self._sort_formats(formats)
    
    import codecs
import subprocess
    
    header = oldreadme[:oldreadme.index('# OPTIONS')]
footer = oldreadme[oldreadme.index('# CONFIGURATION'):]
    
    sys.path.insert(0, dirn(dirn((os.path.abspath(__file__)))))
import youtube_dl
    
        def process_body(self, chunk: Union[str, bytes]) -> bytes:
        if not isinstance(chunk, str):
            # Text when a converter has been used,
            # otherwise it will always be bytes.
            chunk = chunk.decode(self.msg.encoding, 'replace')
        chunk = self.formatting.format_body(content=chunk, mime=self.mime)
        return chunk.encode(self.output_encoding, 'replace')
    
        def test_download_with_redirect_original_url_used_for_filename(self, httpbin):
        # Redirect from `/redirect/1` to `/get`.
        expected_filename = '1.json'
        orig_cwd = os.getcwd()
        os.chdir(tempfile.mkdtemp(prefix='httpie_download_test_'))
        try:
            assert os.listdir('.') == []
            http('--download', httpbin.url + '/redirect/1')
            assert os.listdir('.') == [expected_filename]
        finally:
            os.chdir(orig_cwd)

    
            # Adding index on 'EventTag', fields ['environment_id', 'key', 'value']
        db.create_index(u'tagstore_eventtag', ['environment_id', 'key_id', 'value_id'])
    
        def backwards(self, orm):
        # Adding model 'TagKey'
        db.create_table(u'tagstore_tagkey', (
            ('status', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(default=0)),
            ('environment_id', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(null=True)),
            ('values_seen', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(default=0)),
            ('key', self.gf('django.db.models.fields.CharField')(max_length=32)),
            ('project_id', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(db_index=True)),
            ('id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(primary_key=True)),
        ))
        db.send_create_signal('tagstore', ['TagKey'])
    
            # Adding unique constraint on 'EventTag', fields ['project_id', 'event_id', 'key', 'value']
        db.create_unique(u'tagstore_eventtag', ['project_id', 'event_id', 'key_id', 'value_id'])
    
            # Adding unique constraint on 'Association', fields ['handle', 'server_url']
        db.create_unique('social_auth_association', ['handle', 'server_url'])
    
            # Adding model 'Association'
        db.create_table(u'social_auth_association', (
            ('secret', self.gf('django.db.models.fields.CharField')(max_length=255)),
            ('handle', self.gf('django.db.models.fields.CharField')(max_length=255)),
            ('lifetime', self.gf('django.db.models.fields.IntegerField')()),
            ('issued', self.gf('django.db.models.fields.IntegerField')(db_index=True)),
            ('id', self.gf('django.db.models.fields.AutoField')(primary_key=True)),
            ('assoc_type', self.gf('django.db.models.fields.CharField')(max_length=64)),
            ('server_url', self.gf('django.db.models.fields.CharField')(max_length=255)),
        ))
        db.send_create_signal('social_auth', ['Association'])
    
        for i in range(len(s)):
        result = s.iloc[i]
        exp = s[s.index[i]]
        assert_almost_equal(result, exp)
    
    
def rmod(left, right):
    # check if right is a string as % is the string
    # formatting operation; this is a TypeError
    # otherwise perform the op
    if isinstance(right, str):
        raise TypeError(
            '{typ} cannot perform the operation mod'.format(typ=type(left).__name__)
        )
    
    
    {
    {    df = DataFrame([['foo}', 'bar'], ['foo'', 'bar']], columns=['a', 'b'])
    result = df.to_json(orient='records', lines=True)
    expected = '{'a':'foo}','b':'bar'}\n{'a':'foo\\'','b':'bar'}'
    assert result == expected
    assert_frame_equal(read_json(result, lines=True), df)
    
    import pandas as pd
from pandas import DataFrame, Series
import pandas.util.testing as tm
from pandas.util.testing import (
    assert_almost_equal,
    assert_frame_equal,
    assert_series_equal,
    ensure_clean,
)
    
            Returns
        -------
        str
        '''
        output = '{type}\nFile path: {path}\n'.format(
            type=type(self), path=pprint_thing(self._path)
        )
        if self.is_open:
            lkeys = sorted(list(self.keys()))
            if len(lkeys):
                keys = []
                values = []
    
            pat = re.compile(r'\s+')
        column_names = [col_name for col_name, _, _ in column_names_and_types]
        if any(map(pat.search, column_names)):
            warnings.warn(_SAFE_NAMES_WARNING, stacklevel=6)
    
    default_encoding = sys.getfilesystemencoding()
    
    import jieba
import jieba.analyse
from optparse import OptionParser
    
    

    
        # create notification on bucket
    queue_url = queue_info['QueueUrl']
    queue_arn = aws_stack.sqs_queue_arn(TEST_QUEUE_NAME_FOR_S3)
    events = ['s3:ObjectCreated:*', 's3:ObjectRemoved:Delete']
    filter_rules = {
        'FilterRules': [{
            'Name': 'prefix',
            'Value': 'testupload/'
        }, {
            'Name': 'suffix',
            'Value': 'testfile.txt'
        }]
    }
    s3_client.put_bucket_notification_configuration(
        Bucket=TEST_BUCKET_NAME_WITH_NOTIFICATIONS,
        NotificationConfiguration={
            'QueueConfigurations': [{
                'Id': 'id123456',
                'QueueArn': queue_arn,
                'Events': events,
                'Filter': {
                    'Key': filter_rules
                }
            }]
        }
    )
    
        def test_delivery_stream_tags(self):
        result = firehose_api.get_delivery_stream_tags(TEST_STREAM_NAME)
        self.assertEquals(TEST_TAGS, result['Tags'])
        result = firehose_api.get_delivery_stream_tags(TEST_STREAM_NAME, exclusive_start_tag_key='MyTag')
        self.assertEquals([TEST_TAG_2], result['Tags'])
        result = firehose_api.get_delivery_stream_tags(TEST_STREAM_NAME, limit=1)
        self.assertEquals([TEST_TAG_1], result['Tags'])
        self.assertEquals(True, result['HasMore'])

    
            # run state machine
        state_machines = self.sfn_client.list_state_machines()['stateMachines']
        sm_arn = [m['stateMachineArn'] for m in state_machines if m['name'] == STATE_MACHINE_NAME][0]
        result = self.sfn_client.start_execution(stateMachineArn=sm_arn)
        self.assertTrue(result.get('executionArn'))
    
        if filename is None:
        # Found nothing, return unaltered
        return data
    
        # make sure we can fake adding tags to a domain
    response = es_client.add_tags(ARN='string', TagList=[{'Key': 'SOME_TAG', 'Value': 'SOME_VALUE'}])
    assert_equal(200, response['ResponseMetadata']['HTTPStatusCode'])
    
    
def publish_lambda_result(time_before, result, kwargs):
    if isinstance(result, Response) and result.status_code >= 400:
        return publish_lambda_error(time_before, kwargs)
    publish_lambda_metric('Invocations', 1, kwargs)