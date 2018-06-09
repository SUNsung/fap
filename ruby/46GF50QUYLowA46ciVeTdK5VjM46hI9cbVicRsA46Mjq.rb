
        
        module Jobs
    
      it 'decodes the remaining floats when passed the '*' modifier after another directive' do
    array = '@\xa9\x99\x9aA\x1333'.unpack(unpack_format()+unpack_format('*'))
    array.should == [5.300000190734863, 9.199999809265137]
  end
    
      it 'decodes the number of bytes specified by the count modifier including whitespace bytes' do
    [ ['a bc',  ['a b', 'c']],
      ['a\fbc', ['a\fb', 'c']],
      ['a\nbc', ['a\nb', 'c']],
      ['a\rbc', ['a\rb', 'c']],
      ['a\tbc', ['a\tb', 'c']],
      ['a\vbc', ['a\vb', 'c']]
    ].should be_computed_by(:unpack, unpack_format(3)+unpack_format)
  end
    
        run.should be_true
  end
    
        10.times { sleep 0.1 if after_sleep1 != true }
    10.times { sleep 0.1 if t.status and t.status != 'sleep' }
    after_sleep2.should == false # t should be blocked on the second sleep
    t.send(@method)
    
      it 'handles fractional usec close to rounding limit' do
    time = Time.send(@method, 2000, 1, 1, 12, 30, 0, 9999r/10000)