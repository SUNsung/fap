
        
                # put all lines in the file into a Python list
        strings = f.readlines()
        
        # above line leaves trailing newline characters; strip them out
        strings = [x.strip(u'\n') for x in strings]
        
        # remove empty-lines and comments
        strings = [x for x in strings if x and not x.startswith(u'#')]
        
        # insert empty string since all are being removed
        strings.insert(0, u'')
    
    

    
        这里实际上没有用到 J 和 d 这个参数，保留是为了与 `attention_flow()` 的参数兼容
    
    
class PipenvUsageError(UsageError):
    
        with monkeypatch.context() as m:
        cerberus = __import__('cerberus')
        m.setattr('pkg_resources.get_distribution', raise_distribution_not_found)
        reload(cerberus)
        assert cerberus.__version__ == 'unknown'
    
    
# TODO remove 'validator' as rule parameter with the next major release
@mark.parametrize('rule', ('check_with', 'validator'))
def test_check_with_method(rule):
    # https://github.com/pyeve/cerberus/issues/265
    class MyValidator(cerberus.Validator):
        def _check_with_oddity(self, field, value):
            if not value & 1:
                self._error(field, 'Must be an odd number')
    
        def _drop_remaining_rules(self, *rules):
        ''' Drops rules from the queue of the rules that still need to be
            evaluated for the currently processed field.
            If no arguments are given, the whole queue is emptied.
        '''
        if rules:
            for rule in rules:
                try:
                    self._remaining_rules.remove(rule)
                except ValueError:
                    pass
        else:
            self._remaining_rules = []
    
        def get_missing_message(self, param):
        formated_choices = ['{:<12} {}'.format(k, self.choices[k] or '') for k in sorted(self.choices.keys())]
        return 'Choose from\n  ' + '\n  '.join(formated_choices)