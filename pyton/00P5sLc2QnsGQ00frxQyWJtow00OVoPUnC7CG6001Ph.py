
def test_regularization_shared_model():
    dense_layer = Dense(num_classes,
                        kernel_regularizer=regularizers.l1(),
                        activity_regularizer=regularizers.l1())
    
            You can specify the initial state of RNN layers numerically by
        calling `reset_states` with the keyword argument `states`. The value of
        `states` should be a numpy array or list of numpy arrays representing
        the initial state of the RNN layer.
    
    
def mean_squared_logarithmic_error(y_true, y_pred):
    first_log = K.log(K.clip(y_pred, K.epsilon(), None) + 1.)
    second_log = K.log(K.clip(y_true, K.epsilon(), None) + 1.)
    return K.mean(K.square(first_log - second_log), axis=-1)
    
            firewall_policy = oneandone_conn.add_firewall_policy_rule(
            firewall_id=firewall_id,
            firewall_policy_rules=firewall_rules
        )
        return firewall_policy
    except Exception as e:
        module.fail_json(msg=str(e))
    
    
def _modify_process(module, oneandone_conn, monitoring_policy_id, process_id, process):
    '''
    Modifies a monitoring policy process.
    '''
    try:
        if module.check_mode:
            cm_process = oneandone_conn.get_monitoring_policy_process(
                monitoring_policy_id=monitoring_policy_id,
                process_id=process_id)
            if cm_process:
                return True
            return False
    
    
def validate_fw_rules(fw_rules):
    for rule in fw_rules:
        for k in rule.keys():
            if k not in VALID_RULE_KEYS:
                raise VcaError('%s is not a valid key in fw rules, please '
                               'check above..' % k, valid_keys=VALID_RULE_KEYS)
    
        def hbacrule_add(self, name, item):
        return self._post_json(method='hbacrule_add', name=name, item=item)
    
    
# ===========================================
# Module execution.
#
    
            # If feature is already in good state, just exit
        if (re.search('Disabled features:.* %s[ \n]' % self.feature_name, out) and self.state == 'absent') or \
                (re.search('Enabled features:.* %s[ \n]' % self.feature_name, out) and self.state == 'present'):
            self.module.exit_json(changed=False)
    
    from ansible.module_utils.basic import AnsibleModule
    
    def generateLargePrime(keysize = 1024):
    while True:
        num = random.randrange(2 ** (keysize - 1), 2 ** (keysize))
        if isPrime(num):
            return num
    
    class Decision_Tree:
    def __init__(self, depth = 5, min_leaf_size = 5):
        self.depth = depth
        self.decision_boundary = 0
        self.left = None
        self.right = None
        self.min_leaf_size = min_leaf_size
        self.prediction = None
    
    def englishFreqMatchScore(message):
    '''
    >>> englishFreqMatchScore('Hello World')
    1
    '''
    freqOrder = getFrequencyOrder(message)
    matchScore = 0
    for commonLetter in ETAOIN[:6]:
        if commonLetter in freqOrder[:6]:
            matchScore += 1
    
    
def random_characters(ctbi, i):
  pass  # Put your code here...

    
    
def test_fixraw():
    check_raw(1, 0)
    check_raw(1, (1 << 5) - 1)
    
    
def testSignedInt():
    check(b'\x99\xd0\x00\xd0\x80\xd0\xff\xd1\x00\x00\xd1\x80\x00'
          b'\xd1\xff\xff\xd2\x00\x00\x00\x00\xd2\x80\x00\x00\x00'
          b'\xd2\xff\xff\xff\xff', (0,
                                    -128,
                                    -1,
                                    0,
                                    -32768,
                                    -1,
                                    0,
                                    -2147483648,
                                    -1, ))
    
        files = [x for x in root.xpath('//a/text()')
             if x.startswith('pandas-{}'.format(version))
             and not dest.joinpath(x).exists()]
    
    #
# Licensed to the Apache Software Foundation (ASF) under one or more
# contributor license agreements.  See the NOTICE file distributed with
# this work for additional information regarding copyright ownership.
# The ASF licenses this file to You under the Apache License, Version 2.0
# (the 'License'); you may not use this file except in compliance with
# the License.  You may obtain a copy of the License at
#
#    http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an 'AS IS' BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
    
    ax = fig.add_axes((0.63, 0.1, 0.16, 0.8))
for i in range(4):
    ax.plot(np.random.rand(8))
ax.set_xticks([])
ax.set_yticks([])
    
            try:
            # qtpy is a small abstraction layer that lets you write
            # applications using a single api call to either PyQt or PySide
            # https://pypi.org/project/QtPy
            import qtpy  # noqa
        except ImportError:
            # If qtpy isn't installed, fall back on importing PyQt5, or PyQt5
            try:
                import PyQt5  # noqa
            except ImportError:
                try:
                    import PyQt4  # noqa
                except ImportError:
                    pass  # fail fast for all non-ImportError exceptions.
                else:
                    return init_qt_clipboard()
            else:
                return init_qt_clipboard()
            pass
        else:
            return init_qt_clipboard()
    
    dump = pack
dumps = packb

    
    if args.dict:
    jieba.initialize(args.dict)
else:
    jieba.initialize()
if args.user_dict:
    jieba.load_userdict(args.user_dict)
    
    
def __cut(sentence):
    global emit_P
    prob, pos_list = viterbi(sentence, 'BMES', start_P, trans_P, emit_P)
    begin, nexti = 0, 0
    # print pos_list, sentence
    for i, char in enumerate(sentence):
        pos = pos_list[i]
        if pos == 'B':
            begin = i
        elif pos == 'E':
            yield sentence[begin:i + 1]
            nexti = i + 1
        elif pos == 'S':
            yield char
            nexti = i + 1
    if nexti < len(sentence):
        yield sentence[nexti:]
    
            return self.state
    
        def reset(self):
        super(SingleByteCharSetProber, self).reset()
        # char order of last character
        self._last_order = 255
        self._seq_counters = [0] * SequenceLikelihood.get_num_categories()
        self._total_seqs = 0
        self._total_char = 0
        # characters that fall in our sampling range
        self._freq_char = 0
    
        def reset(self):
        super(SJISProber, self).reset()
        self.context_analyzer.reset()
    
            # If we have seen non-ASCII, return the best that met MINIMUM_THRESHOLD
        elif self._input_state == InputState.HIGH_BYTE:
            prober_confidence = None
            max_prober_confidence = 0.0
            max_prober = None
            for prober in self._charset_probers:
                if not prober:
                    continue
                prober_confidence = prober.get_confidence()
                if prober_confidence > max_prober_confidence:
                    max_prober_confidence = prober_confidence
                    max_prober = prober
            if max_prober and (max_prober_confidence > self.MINIMUM_THRESHOLD):
                charset_name = max_prober.charset_name
                lower_charset_name = max_prober.charset_name.lower()
                confidence = max_prober.get_confidence()
                # Use Windows encoding name instead of ISO-8859 if we saw any
                # extra Windows-specific bytes
                if lower_charset_name.startswith('iso-8859'):
                    if self._has_win_bytes:
                        charset_name = self.ISO_WIN_MAP.get(lower_charset_name,
                                                            charset_name)
                self.result = {'encoding': charset_name,
                               'confidence': confidence,
                               'language': max_prober.language}
    
    