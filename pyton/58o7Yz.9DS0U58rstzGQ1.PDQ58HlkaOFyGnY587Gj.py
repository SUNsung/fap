
        
                (2016-01, shopping), 25
        (2016-01, shopping), 100
        (2016-01, gas), 50
        '''
        timestamp, category, amount = line.split('\t')
        period = self. extract_year_month(timestamp)
        if period == self.current_year_month():
            yield (period, category), amount
    
            (2016-01, url0), 1
        (2016-01, url0), 1
        (2016-01, url1), 1
        '''
        url = self.extract_url(line)
        period = self.extract_year_month(line)
        yield (period, url), 1
    
        def __init__(self, pages, data_store, reverse_index_queue, doc_index_queue):
        self.pages = pages
        self.data_store = data_store
        self.reverse_index_queue = reverse_index_queue
        self.doc_index_queue = doc_index_queue
    
    RETURN = '''
subscriptions:
    description: List of subscriptions.
    returned: When view is set to subscriptions.
    type: list
    sample: ['mysubscription', 'mysubscription2']
topic:
    description: Name of topic. Used to filter subscriptions.
    returned: Always
    type: str
    sample: 'mytopic'
topics:
    description: List of topics.
    returned: When view is set to topics.
    type: list
    sample: ['mytopic', 'mytopic2']
'''
    
    
def protocol_to_string(protocol):
    protocol = protocol_to_tuple(protocol)
    if protocol[0] is True:
        return 'Tcp'
    elif protocol[1] is True:
        return 'Udp'
    elif protocol[2] is True:
        return 'Icmp'
    elif protocol[3] is True:
        return 'Other'
    elif protocol[4] is True:
        return 'Any'
    
            if service is not None:
            changed = client.modify_if_diff(name, ipa_hbacrule.get('memberservice_hbacsvc', []), service,
                                            client.hbacrule_add_service,
                                            client.hbacrule_remove_service, 'hbacsvc') or changed
    
    # Copyright 2013 Bruce Pennypacker <bruce@pennypacker.org>
# GNU General Public License v3.0+ (see COPYING or https://www.gnu.org/licenses/gpl-3.0.txt)
    
    
DOCUMENTATION = '''
---
module: bigpanda
author: 'Hagai Kariti (@hkariti)'
short_description: Notify BigPanda about deployments
version_added: '1.8'
description:
   - Notify BigPanda when deployments start and end (successfully or not). Returns a deployment object containing all the parameters for future module calls.
options:
  component:
    description:
      - 'The name of the component being deployed. Ex: billing'
    required: true
    aliases: ['name']
  version:
    description:
      - The deployment version.
    required: true
  token:
    description:
      - API token.
    required: true
  state:
    description:
      - State of the deployment.
    required: true
    choices: ['started', 'finished', 'failed']
  hosts:
    description:
      - Name of affected host name. Can be a list.
    required: false
    default: machine's hostname
    aliases: ['host']
  env:
    description:
      - The environment name, typically 'production', 'staging', etc.
    required: false
  owner:
    description:
      - The person responsible for the deployment.
    required: false
  description:
    description:
      - Free text description of the deployment.
    required: false
  url:
    description:
      - Base URL of the API server.
    required: False
    default: https://api.bigpanda.io
  validate_certs:
    description:
      - If C(no), SSL certificates for the target url will not be validated. This should only be used
        on personally controlled sites using self-signed certificates.
    required: false
    default: 'yes'
    type: bool
    
    # Copyright (c) 2016, Loic Blot <loic.blot@unix-experience.fr>
# Copyright (c) 2018, Ansible Project
# Sponsored by Infopro Digital. http://www.infopro-digital.com/
# Sponsored by E.T.A.I. http://www.etai.fr/
#
# GNU General Public License v3.0+ (see COPYING or https://www.gnu.org/licenses/gpl-3.0.txt)
    
        for log in logs:
        if query_log_status(module, le_path, log):
            continue
    
        if state == 'reloaded':
        if module.check_mode:
            module.exit_json(changed=True)
        rc, out, err = module.run_command('%s reload' % MONIT)
        if rc != 0:
            module.fail_json(msg='monit reload failed', stdout=out, stderr=err)
        wait_for_monit_to_stop_pending()
        module.exit_json(changed=True, name=name, state=state)
    
    
def post(resource, xml=None):
    return request(resource, xml=xml, method='POST')
    
    from scrapy.utils.conf import arglist_to_dict
from scrapy.exceptions import UsageError
    
        def __exit__(self, exc_type, exc_value, traceback):
        self.proc.kill()
        self.proc.wait()
        time.sleep(0.2)
    
                tested_methods = conman.tested_methods_from_spidercls(spidercls)
            if opts.list:
                for method in tested_methods:
                    contract_reqs[spidercls.name].append(method)
            elif tested_methods:
                self.crawler_process.crawl(spidercls)
    
        def _print_bytes(self, bytes_):
        bytes_writer = sys.stdout if six.PY2 else sys.stdout.buffer
        bytes_writer.write(bytes_ + b'\n')
    
        requires_project = False
    default_settings = {'LOG_ENABLED': False}
    
        def run(self, args, opts):
        settings = self.crawler_process.settings
        if opts.get:
            s = settings.get(opts.get)
            if isinstance(s, BaseSettings):
                print(json.dumps(s.copy_to_dict()))
            else:
                print(s)
        elif opts.getbool:
            print(settings.getbool(opts.getbool))
        elif opts.getint:
            print(settings.getint(opts.getint))
        elif opts.getfloat:
            print(settings.getfloat(opts.getfloat))
        elif opts.getlist:
            print(settings.getlist(opts.getlist))

    
            try:
            self.max_bound = int(self.args[2])
        except IndexError:
            self.max_bound = float('inf')
    
            # If no credentials could be found anywhere,
        # consider this an anonymous connection request by default;
        # unless 'anon' was set explicitly (True/False).
        anon = kw.get('anon')
        if anon is None and not aws_access_key_id and not aws_secret_access_key:
            kw['anon'] = True
        self.anon = kw.get('anon')
    
        def _download(self, request, spider):
        slot = self.slot
        slot.add_request(request)
        def _on_success(response):
            assert isinstance(response, (Response, Request))
            if isinstance(response, Response):
                response.request = request # tie request to response received
                logkws = self.logformatter.crawled(request, response, spider)
                logger.log(*logformatter_adapter(logkws), extra={'spider': spider})
                self.signals.send_catch_log(signal=signals.response_received, \
                    response=response, request=request, spider=spider)
            return response
    
            cookies = [self._format_cookie(x) for x in cookie_list]
        headers = {'Set-Cookie': cookies}
        response = Response(request.url, headers=headers)
    
    
if __name__ == '__main__':
    unittest.main()  # pragma: no cover

    
    
# -- Options for Texinfo output -------------------------------------------
    
    Use of this plugin requires a configuration file containing DigitalOcean API
credentials, obtained from your DigitalOcean account's `Applications & API
Tokens page <https://cloud.digitalocean.com/settings/api/tokens>`_.
    
    For example, for x = 10, we start with an array of x / 2 - 1 = 4
[1, 1, 1, 1]
 3  5  7  9
    
            if col_begin <= col_end:
            for i in range(row_end, row_begin-1, -1):
                res.append(matrix[i][col_begin])
        col_begin += 1