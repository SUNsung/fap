
        
            def test_b_observers_shall_be_attachable(cls):
        cls.s.attach(cls.dec_obs)
        cls.assertEqual(isinstance(cls.s._observers[0], DecimalViewer), True)
        cls.assertEqual(len(cls.s._observers), 1)
        cls.s.attach(cls.hex_obs)
        cls.assertEqual(isinstance(cls.s._observers[1], HexViewer), True)
        cls.assertEqual(len(cls.s._observers), 2)
    
        def test_extended_property_values_cloning(self):
        sample_object_1 = self.prototype.clone()
        sample_object_1.some_value = 'test string'
        sample_object_2 = self.prototype.clone()
        self.assertRaises(AttributeError, lambda: sample_object_2.some_value)
    
    
class OutOfData(UnpackException):
    pass
    
    
# List of frequently used SAS date and datetime formats
# http://support.sas.com/documentation/cdl/en/etsug/60372/HTML/default/viewer.htm#etsug_intervals_sect009.htm
# https://github.com/epam/parso/blob/master/src/main/java/com/epam/parso/impl/SasFileConstants.java
sas_date_formats = ('DATE', 'DAY', 'DDMMYY', 'DOWNAME', 'JULDAY', 'JULIAN',
                    'MMDDYY', 'MMYY', 'MMYYC', 'MMYYD', 'MMYYP', 'MMYYS',
                    'MMYYN', 'MONNAME', 'MONTH', 'MONYY', 'QTR', 'QTRR',
                    'NENGO', 'WEEKDATE', 'WEEKDATX', 'WEEKDAY', 'WEEKV',
                    'WORDDATE', 'WORDDATX', 'YEAR', 'YYMM', 'YYMMC', 'YYMMD',
                    'YYMMP', 'YYMMS', 'YYMMN', 'YYMON', 'YYMMDD', 'YYQ',
                    'YYQC', 'YYQD', 'YYQP', 'YYQS', 'YYQN', 'YYQR', 'YYQRC',
                    'YYQRD', 'YYQRP', 'YYQRS', 'YYQRN',
                    'YYMMDDP', 'YYMMDDC', 'E8601DA', 'YYMMDDN', 'MMDDYYC',
                    'MMDDYYS', 'MMDDYYD', 'YYMMDDS', 'B8601DA', 'DDMMYYN',
                    'YYMMDDD', 'DDMMYYB', 'DDMMYYP', 'MMDDYYP', 'YYMMDDB',
                    'MMDDYYN', 'DDMMYYC', 'DDMMYYD', 'DDMMYYS',
                    'MINGUO')
    
    
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
    
    print('\n=== Pull Request #%s ===' % pr_num)
    
            # 3. TODO: resolve other font-relative units
        for side in self.SIDES:
            prop = 'border-{side}-width'.format(side=side)
            if prop in props:
                props[prop] = self.size_to_pt(
                    props[prop], em_pt=font_size,
                    conversions=self.BORDER_WIDTH_RATIOS)
            for prop in ['margin-{side}'.format(side=side),
                         'padding-{side}'.format(side=side)]:
                if prop in props:
                    # TODO: support %
                    props[prop] = self.size_to_pt(
                        props[prop], em_pt=font_size,
                        conversions=self.MARGIN_RATIOS)
    
            exp = pd.Index([pd.Timestamp('2011-01-01 09:00', tz=tz),
                        pd.Timestamp('2011-01-01 10:00'),
                        pd.Timestamp('2011-01-01 11:00', tz=tz)],
                       dtype=object)
        tm.assert_index_equal(
            idx.fillna(pd.Timestamp('2011-01-01 10:00')), exp)
    
    seg_list = jieba.cut('我来到北京清华大学', cut_all=True)
print('Full Mode: ' + '/ '.join(seg_list))  # 全模式
    
    print('speed' , len(content)/tm_cost, ' bytes/second')