        (2016-01, url0), 1
        (2016-01, url0), 1
        (2016-01, url1), 1
        '''
        url = self.extract_url(line)
        period = self.extract_year_month(line)
        yield (period, url), 1
    
        def __init__(self, id, name):
        self.id = id
        self.name = name
        self.friend_ids = []
    
        def __init__(self, pages, data_store, reverse_index_queue, doc_index_queue):
        self.pages = pages
        self.data_store = data_store
        self.reverse_index_queue = reverse_index_queue
        self.doc_index_queue = doc_index_queue
    
      if input_magnitude > 0.0:
    # time of 'hits' randomly chosen between [1/4 and 3/4] of total time
    input_times = rng.choice(int(ntime_steps/2), size=[E]) + int(ntime_steps/4)
  else:
    input_times = None
    
    
data = { 'train_truth': data_train_truth,
         'valid_truth': data_valid_truth,
         'train_data' : data_train_spiking,
         'valid_data' : data_valid_spiking,
         'train_percentage' : train_percentage,
         'nreplications' : nreplications,
         'dt' : FLAGS.dt,
         'u_std' : FLAGS.u_std,
         'max_firing_rate': FLAGS.max_firing_rate,
         'train_inputs_u': train_inputs_u,
         'valid_inputs_u': valid_inputs_u,
         'train_outputs_u': train_outputs_u,
         'valid_outputs_u': valid_outputs_u,
         'conversion_factor' : FLAGS.max_firing_rate/(1.0/FLAGS.dt) }
    
        # Add 'lstm/lstm_0/control_dependency' if you want to dump previous layer
    # LSTM.
    lstm_emb = sess.run(t['lstm/lstm_1/control_dependency'],
                        feed_dict={t['char_inputs_in']: char_ids_inputs,
                                   t['inputs_in']: inputs,
                                   t['targets_in']: targets,
                                   t['target_weights_in']: weights})
    
      assert sent1 or sent2, 'Two sentences are identical.'
  return (mask1_start + [1.] * len(sent1) + mask1_end,
          mask2_start + [1.] * len(sent2) + mask2_end)
    
    
# TODO(adai): IMDB labels placeholder to model.
def create_generator(hparams,
                     inputs,
                     targets,
                     present,
                     is_training,
                     is_validating,
                     reuse=None):
  '''Create the Generator model specified by the FLAGS and hparams.
    
      for _, value in gen_ngrams_dict.iteritems():
    total_ngrams_produced += value
    
      Returns:
    variable_mapping:  Dictionary with Key: ckpt_name, Value: model_var.
  '''
  # This logic is only valid for cnn
  assert FLAGS.discriminator_model == 'cnn'
    
    # (c) 2012, Michael DeHaan <michael.dehaan@gmail.com>
#
# This file is part of Ansible
#
# Ansible is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# Ansible is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with Ansible.  If not, see <http://www.gnu.org/licenses/>.
    
                if item.get('extattrs'):
                for key, value in iteritems(flatten_extattrs(item['extattrs'])):
                    if key.startswith('ansible_'):
                        hostvars[name][key] = value
                    else:
                        if 'extattrs' not in hostvars[name]:
                            hostvars[name]['extattrs'] = {}
                        hostvars[name]['extattrs'][key] = value
    
    
if len(sys.argv) == 2 and sys.argv[1] == '--list':
    inv_json = get_guests()
    print(json.dumps(inv_json, sort_keys=True))
elif len(sys.argv) == 3 and sys.argv[1] == '--host':
    print(json.dumps({}))
else:
    print('Need an argument, either --list or --host <host>')

    
        def _format_output(self, nodeid, info):
        try:
            node_info = json.loads(info['lookup'])
            ipaddress = ''
            if len(node_info) > 0:
                ipaddress = node_info[0]['ipAddress']
            output = {'hosts': [ipaddress], 'vars': {}}
            for (key, result) in info.items():
                output['vars'][key] = json.loads(result)
            output['vars']['ansible_ssh_user'] = 'monorail'
        except KeyError:
            pass
        return output
    
    Host and authentication parameters may be specified via the `VMWARE_HOST`,
`VMWARE_USER` and `VMWARE_PASSWORD` environment variables; these options will
take precedence over options present in the INI file.  An INI file is not
required if these options are specified using environment variables.
'''
    
        opts = []
    for opt in optlist:
        res = {
            'desc': opt.help,
            'options': opt._short_opts + opt._long_opts
        }
        if opt.action == 'store':
            res['arg'] = opt.dest.upper()
        opts.append(res)
    
    # The basename for the epub file. It defaults to the project name.
# epub_basename = project
    
    target = sys.argv.pop(1)
myclass = '%sCLI' % target.capitalize()
    
            if opts.loglevel:
            self.settings.set('LOG_ENABLED', True, priority='cmdline')
            self.settings.set('LOG_LEVEL', opts.loglevel, priority='cmdline')
    
            infos = []
        if not self.wasSuccessful():
            write('FAILED')
            failed, errored = map(len, (self.failures, self.errors))
            if failed:
                infos.append('failures=%d' % failed)
            if errored:
                infos.append('errors=%d' % errored)
        else:
            write('OK')
    
    from scrapy.utils.spider import iter_spider_classes
from scrapy.commands import ScrapyCommand
from scrapy.exceptions import UsageError
from scrapy.utils.conf import arglist_to_dict
from scrapy.utils.python import without_none_values
    
        def short_desc(self):
        return 'Interactive scraping console'
    
            def finish_transferring(_):
            slot.transferring.remove(request)
            self._process_queue(spider, slot)
            return _
    
        def reset_appid(self):
        # called by web_control
        with self.lock:
            self.working_appid_list = list()
            for appid in self.config.GAE_APPIDS:
                if not appid:
                    self.config.GAE_APPIDS.remove(appid)
                    continue
                self.working_appid_list.append(appid)
            self.not_exist_appids = []
            self.out_of_quota_appids = []
        self.last_reset_time = time.time()
    
            return True
    
    
if __name__ == '__main__':
    main()

    
    ##
    
        # Get and print some more results
    for i in range(len(TASKS2)):
        print('\t', done_queue.get())
    
    con = sqlite3.connect(':memory:')
con.isolation_level = None
cur = con.cursor()
    
    #######################
# 1) Using column names
con = sqlite3.connect(':memory:', detect_types=sqlite3.PARSE_COLNAMES)
cur = con.cursor()
cur.execute('create table test(p)')