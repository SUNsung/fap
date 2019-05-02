
        
        
class Supervisor(Employee):
    
            When updating an entry, updates its position to the front of the LRU list.
        If the entry is new and the cache is at capacity, removes the oldest entry
        before the new entry is added.
        '''
        node = self.lookup.get(query)
        if node is not None:
            # Key exists in cache, update the value
            node.results = results
            self.linked_list.move_to_front(node)
        else:
            # Key does not exist in cache
            if self.size == self.MAX_SIZE:
                # Remove the oldest entry from the linked list and lookup
                self.lookup.pop(self.linked_list.tail.query, None)
                self.linked_list.remove_from_tail()
            else:
                self.size += 1
            # Add the new key and value
            new_node = Node(results)
            self.linked_list.append_to_front(new_node)
            self.lookup[query] = new_node

    
        def __init__(self, message_id, message, timestamp):
        self.message_id = message_id
        self.message = message
        self.timestamp = timestamp
    
            (2016-01, url0), 1
        (2016-01, url0), 1
        (2016-01, url1), 1
        '''
        url = self.extract_url(line)
        period = self.extract_year_month(line)
        yield (period, url), 1
    
        def crawl_page(self, page):
        for url in page.child_urls:
            self.data_store.add_link_to_crawl(url)
        self.reverse_index_queue.generate(page)
        self.doc_index_queue.generate(page)
        self.data_store.remove_link_to_crawl(page.url)
        self.data_store.insert_crawled_link(page.url, page.signature)
    
    
def clean_data_dict(data_dict):
  '''Add some key/value pairs to the data dict, if they are missing.
  Args:
    data_dict - dictionary containing data for LFADS
  Returns:
    data_dict with some keys filled in, if they are absent.
  '''
    
    def get_train_n_valid_inds(num_trials, train_fraction, nreplications):
  '''Split the numbers between 0 and num_trials-1 into two portions for
  training and validation, based on the train fraction.
  Args:
    num_trials: the number of trials
    train_fraction: (e.g. .80)
    nreplications: the number of spiking trials per initial condition
  Returns:
    a 2-tuple of two lists: the training indices and validation indices
    '''
  train_inds = []
  valid_inds = []
  for i in range(num_trials):
    # This line divides up the trials so that within one initial condition,
    # the randomness of spikifying the condition is shared among both
    # training and validation data splits.
    if (i % nreplications)+1 > train_fraction * nreplications:
      valid_inds.append(i)
    else:
      train_inds.append(i)
    
    
def evaluate_ensemble(test_data_name, number_of_lms):
  ensemble = EnsembleLM(test_data_name)
  model_list = ['lm{:02d}'.format(i+1) for i in range(number_of_lms)]
  for model_name in model_list:
    ensemble.add_single_model(model_name)
  accuracy = ensemble.evaluate()
  print('Accuracy of {} LM(s) on {} = {}'.format(
      number_of_lms, test_data_name, accuracy))
    
    
PAD = '<padding>'
    
    
def _read_words(filename, use_prefix=True):
  all_words = []
  sequence_example = tf.train.SequenceExample()
  for r in tf.python_io.tf_record_iterator(filename):
    sequence_example.ParseFromString(r)
    
    
def history_not_changed(proc, TIMEOUT):
    '''Ensures that history not changed.'''
    proc.send('\033[A')
    assert proc.expect([TIMEOUT, u'fuck'])
    
    
@pytest.fixture(params=[(python_3, False),
                        (python_3, True),
                        (python_2, False)])
def proc(request, spawnu, TIMEOUT):
    container, instant_mode = request.param
    proc = spawnu(*container)
    proc.sendline(u'pip install /src')
    assert proc.expect([TIMEOUT, u'Successfully installed'])
    proc.sendline(init_bashrc.format(
        u'--enable-experimental-instant-mode' if instant_mode else ''))
    proc.sendline(u'bash')
    if instant_mode:
        assert proc.expect([TIMEOUT, u'instant mode ready: True'])
    return proc
    
    
@pytest.mark.parametrize('command, new_command, packages', [
    (Command('vim', ''), 'sudo apt-get install vim && vim',
     [('vim', 'main'), ('vim-tiny', 'main')]),
    (Command('convert', ''), 'sudo apt-get install imagemagick && convert',
     [('imagemagick', 'main'),
      ('graphicsmagick-imagemagick-compat', 'universe')]),
    (Command('sudo vim', ''), 'sudo apt-get install vim && sudo vim',
     [('vim', 'main'), ('vim-tiny', 'main')]),
    (Command('sudo convert', ''), 'sudo apt-get install imagemagick && sudo convert',
     [('imagemagick', 'main'),
      ('graphicsmagick-imagemagick-compat', 'universe')])])
def test_get_new_command(mocker, command, new_command, packages):
    mocker.patch('thefuck.rules.apt_get._get_packages',
                 create=True, return_value=packages)
    
    match_output = '''
Hit:1 http://us.archive.ubuntu.com/ubuntu zesty InRelease
Hit:2 http://us.archive.ubuntu.com/ubuntu zesty-updates InRelease
Get:3 http://us.archive.ubuntu.com/ubuntu zesty-backports InRelease [89.2 kB]
Hit:4 http://security.ubuntu.com/ubuntu zesty-security InRelease
Hit:5 http://ppa.launchpad.net/ubuntu-mozilla-daily/ppa/ubuntu zesty InRelease
Hit:6 https://download.docker.com/linux/ubuntu zesty InRelease
Hit:7 https://cli-assets.heroku.com/branches/stable/apt ./ InRelease
Fetched 89.2 kB in 0s (122 kB/s)
Reading package lists... Done
Building dependency tree
Reading state information... Done
8 packages can be upgraded. Run 'apt list --upgradable' to see them.
'''
    
      aws help
  aws <command> help
  aws <command> <subcommand> help
aws: error: argument operation: Invalid choice, valid choices are:
    
    
@pytest.mark.parametrize('command, new_command', [
    (Command('cargo buid', no_such_subcommand_old), 'cargo build'),
    (Command('cargo buils', no_such_subcommand), 'cargo build')])
def test_get_new_command(command, new_command):
    assert get_new_command(command) == new_command

    
            os.chdir(str(tmpdir))
        reset(path)
    
            print('Enter the first string: ', end='')
        S1 = raw_input().strip()
    
    The problem is  :
Given an array, to find the longest and continuous sub array and get the max sum of the sub array in the given array.
'''
from __future__ import print_function
    
        for i in range(1, n+1):
        for j in range(1, s+1):
            dp[i][j]= dp[i][j-1]
    
        def run(self, args, opts):
        if len(args) < 1:
            raise UsageError()
        elif len(args) > 1:
            raise UsageError('running 'scrapy crawl' with more than one spider is no longer supported')
        spname = args[0]
    
        def short_desc(self):
        return 'Edit spider'
    
        def run(self, args, opts):
        if opts.list:
            self._list_templates()
            return
        if opts.dump:
            template_file = self._find_template(opts.dump)
            if template_file:
                with open(template_file, 'r') as f:
                    print(f.read())
            return
        if len(args) != 2:
            raise UsageError()
    
        def short_desc(self):
        return 'Run a self-contained spider (without creating a project)'
    
    
    
            def getCertificateOptions(self):
            # setting verify=True will require you to provide CAs
            # to verify against; in other words: it's not that simple
    
            return response