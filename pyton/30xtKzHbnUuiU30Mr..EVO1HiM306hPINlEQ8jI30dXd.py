
        
            def _wait_for_requests_to_complete(self, request_lst):
        '''
        Waits until the CLC requests are complete if the wait argument is True
        :param request_lst: The list of CLC request objects
        :return: none
        '''
        if not self.module.params['wait']:
            return
        for request in request_lst:
            request.WaitUntilComplete()
            for request_details in request.requests:
                if request_details.Status() != 'succeeded':
                    self.module.fail_json(
                        msg='Unable to process package install request')
    
        def ensure_lbpool_nodes_absent(self, alias, location, name, port, nodes):
        '''
        Checks to see if the provided list of nodes exist for the pool and removes them if found any
        :param alias: The account alias
        :param location: the datacenter the load balancer resides in
        :param name: the name of the load balancer
        :param port: the port that the load balancer will listen on
        :param nodes: the list of nodes to be removed
        :return: (changed, result) -
            changed: Boolean whether a change was made
            result: The result from the CLC API call
        '''
        changed = False
        lb_exists = self._loadbalancer_exists(name=name)
        if lb_exists:
            lb_id = self._get_loadbalancer_id(name=name)
            pool_id = self._loadbalancerpool_exists(
                alias=alias,
                location=location,
                port=port,
                lb_id=lb_id)
            if pool_id:
                changed, result = self.remove_lbpool_nodes(alias=alias,
                                                           location=location,
                                                           lb_id=lb_id,
                                                           pool_id=pool_id,
                                                           nodes_to_remove=nodes)
            else:
                result = 'Pool doesn't exist'
        else:
            result = 'Load balancer doesn't Exist'
        return changed, result
    
        @staticmethod
    def _set_user_agent(clc):
        if hasattr(clc, 'SetRequestsSession'):
            agent_string = 'ClcAnsibleModule/' + __version__
            ses = requests.Session()
            ses.headers.update({'Api-Client': agent_string})
            ses.headers['User-Agent'] += ' ' + agent_string
            clc.SetRequestsSession(ses)
    
    
DOCUMENTATION = '''
---
module: taiga_issue
short_description: Creates/deletes an issue in a Taiga Project Management Platform
description:
  - Creates/deletes an issue in a Taiga Project Management Platform (U(https://taiga.io)).
  - An issue is identified by the combination of project, issue subject and issue type.
  - This module implements the creation or deletion of issues (not the update).
version_added: '2.0'
options:
  taiga_host:
    description:
      - The hostname of the Taiga instance.
    default: https://api.taiga.io
  project:
    description:
      - Name of the project containing the issue. Must exist previously.
    required: True
  subject:
    description:
      - The issue subject.
    required: True
  issue_type:
    description:
      - The issue type. Must exist previously.
    required: True
  priority:
    description:
      - The issue priority. Must exist previously.
    default: Normal
  status:
    description:
      - The issue status. Must exist previously.
    default: New
  severity:
    description:
      - The issue severity. Must exist previously.
    default: Normal
  description:
    description:
      - The issue description.
    default: ''
  attachment:
    description:
      - Path to a file to be attached to the issue.
  attachment_description:
    description:
      - A string describing the file to be attached to the issue.
    default: ''
  tags:
    description:
      - A lists of tags to be assigned to the issue.
    default: []
  state:
    description:
      - Whether the issue should be present or not.
    choices: ['present', 'absent']
    default: present
author: Alejandro Guirao (@lekum)
requirements: [python-taiga]
notes:
- The authentication is achieved either by the environment variable TAIGA_TOKEN or by the pair of environment variables TAIGA_USERNAME and TAIGA_PASSWORD
'''
    
    
def main():
    module = AnsibleModule(
        argument_spec=gen_specs(
            attributes=dict(default={}, type='dict'),
            objectClass=dict(type='raw'),
            params=dict(type='dict'),
            state=dict(default='present', choices=['present', 'absent']),
        ),
        supports_check_mode=True,
    )
    
    notes:
   - Requires pushbullet.py Python package on the remote host.
     You can install it via pip with ($ pip install pushbullet.py).
     See U(https://github.com/randomchars/pushbullet.py)
'''
    
        if not HAS_SENDGRID:
        if info['status'] != 200:
            module.fail_json(msg='unable to send email through SendGrid API: %s' % info['msg'])
    else:
        if response != 200:
            module.fail_json(msg='unable to send email through SendGrid API: %s' % info['message'])
    
        # --- run command ---
    try:
        ipmi_cmd = command.Command(
            bmc=name, userid=user, password=password, port=port
        )
        module.debug('ipmi instantiated - name: '%s'' % name)
        current = ipmi_cmd.get_bootdev()
        # uefimode may not supported by BMC, so use desired value as default
        current.setdefault('uefimode', uefiboot)
        if state == 'present' and current != dict(bootdev=bootdev, persistent=persistent, uefimode=uefiboot):
            request = dict(bootdev=bootdev, uefiboot=uefiboot, persist=persistent)
        elif state == 'absent' and current['bootdev'] == bootdev:
            request = dict(bootdev='default')
        else:
            module.exit_json(changed=False, **current)
    
            module.exit_json(changed=changed, **response)
    except Exception as e:
        module.fail_json(msg=str(e))
    
    
def traverse_objects(module, ucs, managed_object, mo=''):
    props_match = False
    
            fn = os.path.join(current_path, 'appids.txt')
        self.public_appid = RandomGetSlice(fn, 60)
    
            import_command = 'security add-trusted-cert -d -r trustRoot -k /Library/Keychains/System.keychain ../../../../data/gae_proxy/CA.crt'# % certfile.decode('utf-8')
        if exist_ca_sha1:
            delete_ca_command = 'security delete-certificate -Z %s' % exist_ca_sha1
            exec_command = '%s;%s' % (delete_ca_command, import_command)
        else:
            exec_command = import_command
    
            self.last_check_time = time_now
        threading.Thread(target=self._simple_check_worker).start()
    
        deadline = URLFETCH_TIMEOUT
    validate_certificate = bool(int(kwargs.get('validate', 0)))
    accept_encoding = headers.get('Accept-Encoding', '')
    errors = []
    for i in xrange(int(kwargs.get('fetchmax', URLFETCH_MAX))):
        try:
            response = urlfetch.fetch(url, payload, fetchmethod, headers, allow_truncated=False, follow_redirects=False, deadline=deadline, validate_certificate=validate_certificate)
            break
        except apiproxy_errors.OverQuotaError as e:
            time.sleep(5)
        except urlfetch.DeadlineExceededError as e:
            errors.append('%r, deadline=%s' % (e, deadline))
            logging.error('DeadlineExceededError(deadline=%s, url=%r)', deadline, url)
            time.sleep(1)
            deadline = URLFETCH_TIMEOUT * 2
        except urlfetch.DownloadError as e:
            errors.append('%r, deadline=%s' % (e, deadline))
            logging.error('DownloadError(deadline=%s, url=%r)', deadline, url)
            time.sleep(1)
            deadline = URLFETCH_TIMEOUT * 2
        except urlfetch.ResponseTooLargeError as e:
            errors.append('%r, deadline=%s' % (e, deadline))
            response = e.response
            logging.error('ResponseTooLargeError(deadline=%s, url=%r) response(%r)', deadline, url, response)
            m = re.search(r'=\s*(\d+)-', headers.get('Range') or headers.get('range') or '')
            if m is None:
                headers['Range'] = 'bytes=0-%d' % int(kwargs.get('fetchmaxsize', URLFETCH_MAXSIZE))
            else:
                headers.pop('Range', '')
                headers.pop('range', '')
                start = int(m.group(1))
                headers['Range'] = 'bytes=%s-%d' % (start, start+int(kwargs.get('fetchmaxsize', URLFETCH_MAXSIZE)))
            deadline = URLFETCH_TIMEOUT * 2
        except urlfetch.SSLCertificateError as e:
            errors.append('%r, should validate=0 ?' % e)
            logging.error('%r, deadline=%s', e, deadline)
        except Exception as e:
            errors.append(str(e))
            if i == 0 and method == 'GET':
                deadline = URLFETCH_TIMEOUT * 2
    else:
        start_response('500 Internal Server Error', [('Content-Type', 'text/html')])
        error_string = '<br />\n'.join(errors)
        if not error_string:
            logurl = 'https://appengine.google.com/logs?&app_id=%s' % os.environ['APPLICATION_ID']
            error_string = 'Internal Server Error. <p/>try <a href='javascript:window.location.reload(true);'>refresh</a> or goto <a href='%s' target='_blank'>appengine.google.com</a> for details' % logurl
        yield message_html('502 Urlfetch Error', 'Python Urlfetch Error: %r' % method,  error_string)
        raise StopIteration
    
    @section tokenstrees Tokens and Trees
    
    # Predefined token types
EOR_TOKEN_TYPE = 1
    
        long_description = README,
    
            link_list = []
    
        theplatform_download_by_pid(pid, title, output_dir=output_dir, merge=merge, info_only=info_only)
    
    site_info = 'Douban.com'
download = douban_download
download_playlist = playlist_not_supported('douban')

    
    site_info = 'FC2Video'
download = fc2video_download
download_playlist = playlist_not_supported('fc2video')

    
        @classmethod
    def get_cdninfo(cls, hashid):
        url = 'http://jobsfe.funshion.com/query/v1/mp4/{}.json'.format(hashid)
        meta = json.loads(get_content(url, decoded=False).decode('utf8'))
        return meta['playlist'][0]['urls']
    
        title = r1(r'<meta property='og:title' content='(.*?)'>', html)
    
        html = get_content(url)
    uuid_pattern = r''([0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12})''
    id = r1(r'var vid='([0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12})'', html)
    if id is None:
        video_pattern = r''vid'\s*:\s*' + uuid_pattern
        id = match1(html, video_pattern)
    assert id, 'can't find video info'
    return ifeng_download_by_id(id, None, output_dir = output_dir, merge = merge, info_only = info_only)
    
        def forwards(self, orm):
        # Adding model 'EventTag'
        db.create_table(u'tagstore_eventtag', (
            ('id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(primary_key=True)),
            ('project_id', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')()),
            ('environment_id', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')()),
            ('group_id', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')()),
            ('event_id', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')()),
            ('key', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                to=orm['tagstore.TagKey'], db_column='key')),
            ('value', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                to=orm['tagstore.TagValue'], db_column='value')),
            ('date_added', self.gf('django.db.models.fields.DateTimeField')(
                db_index=True)),
        ))
        db.send_create_signal('tagstore', ['EventTag'])
    
    
class Migration(SchemaMigration):
    
        if chunk:
        yield chunk

    
            results = defaultdict(list)
        for worker in self.workers:
            worker.join()
            for k, v in six.iteritems(worker.results):
                results[k].extend(v)
        return results

    
    
class Migration(SchemaMigration):
    
        def forwards(self, orm):
        # Removing unique constraint on 'UserSocialAuth', fields ['provider', 'uid']
        db.delete_unique(u'social_auth_usersocialauth', ['provider', 'uid'])
    
        if debug_on:
        if logging_file:
            if len(_logger.handlers) < 2:
                _logger.addHandler(logging.FileHandler(logging_file))
                _logger.setLevel(logging.DEBUG)
        else:
            raise IOError('SOUTH_LOGGING_ON is True. You also need a SOUTH_LOGGING_FILE setting.')
    
                    if n == self.S3_LOG_DATE_TIME:
                    date, date_time, time_zone_parsed = \
                        self.clean_date_time_zone(group)
                    # Leave the following line of code if 
                    # you want to aggregate by date
                    date_time = date + ' 00:00:00'
                elif n == self.S3_LOG_REQUESTER_ID:
                    requester = group
                elif n == self.S3_LOG_USER_AGENT:
                    user_agent = group
                elif n == self.S3_LOG_OPERATION:
                    operation = group
                else:
                    pass
    
            # Use a lambda to delay the calling of clean_date_time_zone so that
        # assertRaises has enough time to handle it properly
        self.assertRaises(ValueError,
            lambda: self.mr_job.clean_date_time_zone(
                self.DATE_TIME_ZONE_INVALID))