
        
        python_2 = (u'thefuck/python2-bash',
            u'FROM python:2',
            u'sh')
    
    
@pytest.mark.parametrize('command', [
    Command('apt list --upgradable', no_match_output),
    Command('sudo apt list --upgradable', no_match_output)
])
def test_not_match(command):
    assert not match(command)
    
            Did you mean `build`?
'''