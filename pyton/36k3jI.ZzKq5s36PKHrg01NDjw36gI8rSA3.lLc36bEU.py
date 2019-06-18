
        
            # test that the user was inserted into the database
    with app.app_context():
        assert (
            get_db().execute('select * from user where username = 'a'').fetchone()
            is not None
        )
    
    
@pytest.mark.parametrize('path', ('/2/update', '/2/delete'))
def test_exists_required(client, auth, path):
    auth.login()
    assert client.post(path).status_code == 404
    
    
def display_temp(hass: HomeAssistant, temperature: float, unit: str,
                 precision: float) -> float:
    '''Convert temperature into preferred units/precision for display.'''
    temperature_unit = unit
    ha_unit = hass.config.units.temperature_unit
    
    from fire import testutils
    
        Args:
      arg1: arg1_description
      arg2: arg2_description
    '''
    docstring_info = docstrings.parse(docstring)
    expected_docstring_info = DocstringInfo(
        summary='One line description.',
        args=[
            ArgInfo(name='arg1', description='arg1_description'),
            ArgInfo(name='arg2', description='arg2_description'),
        ]
    )
    self.assertEqual(docstring_info, expected_docstring_info)
    
    import difflib
import os
import time
    
    from fire.console import encoding
    
        for option in options_map[command].union(global_options):
      check_needed = command != name
      fish_source += flag_template.format(
          name=name,
          command=command,
          prev_global_check=prev_global_check if check_needed else '',
          option=option.lstrip('--'),
      )