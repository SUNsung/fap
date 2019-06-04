
        
        
def test_getitem_callable():
    # GH 12533
    s = pd.Series(4, index=list('ABCD'))
    result = s[lambda x: 'A']
    assert result == s.loc['A']
    
    
ABCIndex = create_pandas_abc_type('ABCIndex', '_typ', ('index', ))
ABCInt64Index = create_pandas_abc_type('ABCInt64Index', '_typ',
                                       ('int64index', ))
ABCUInt64Index = create_pandas_abc_type('ABCUInt64Index', '_typ',
                                        ('uint64index', ))
ABCRangeIndex = create_pandas_abc_type('ABCRangeIndex', '_typ',
                                       ('rangeindex', ))
ABCFloat64Index = create_pandas_abc_type('ABCFloat64Index', '_typ',
                                         ('float64index', ))
ABCMultiIndex = create_pandas_abc_type('ABCMultiIndex', '_typ',
                                       ('multiindex', ))
ABCDatetimeIndex = create_pandas_abc_type('ABCDatetimeIndex', '_typ',
                                          ('datetimeindex', ))
ABCTimedeltaIndex = create_pandas_abc_type('ABCTimedeltaIndex', '_typ',
                                           ('timedeltaindex', ))
ABCPeriodIndex = create_pandas_abc_type('ABCPeriodIndex', '_typ',
                                        ('periodindex', ))
ABCCategoricalIndex = create_pandas_abc_type('ABCCategoricalIndex', '_typ',
                                             ('categoricalindex', ))
ABCIntervalIndex = create_pandas_abc_type('ABCIntervalIndex', '_typ',
                                          ('intervalindex', ))
ABCIndexClass = create_pandas_abc_type('ABCIndexClass', '_typ',
                                       ('index', 'int64index', 'rangeindex',
                                        'float64index', 'uint64index',
                                        'multiindex', 'datetimeindex',
                                        'timedeltaindex', 'periodindex',
                                        'categoricalindex', 'intervalindex'))
    
    
@pytest.fixture
def df_mixed_floats():
    return DataFrame({'A': ['foo', 'bar', 'foo', 'bar',
                            'foo', 'bar', 'foo', 'foo'],
                      'B': ['one', 'one', 'two', 'three',
                            'two', 'two', 'one', 'three'],
                      'C': np.random.randn(8),
                      'D': np.array(
                          np.random.randn(8), dtype='float32')})
    
        result = False
    try:
        ret = urlopen(url, timeout=2)
        result = (ret.code == 200)
    except HTTPError as e:
        print(e, file=sys.stderr)
    except URLError as e:
        print(e, file=sys.stderr)
    except timeout as e:
        print(e, file=sys.stderr)
    except Exception as e:
        print(e, file=sys.stderr)
    
            # return its order if it is hiragana
        if len(byte_str) > 1:
            second_char = byte_str[1]
            if (first_char == 0xA4) and (0xA1 <= second_char <= 0xF3):
                return second_char - 0xA1, char_len