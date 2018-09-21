
        
          it 'has no effect on immediate values' do
    [nil, true, false].each do |v|
      v.taint
      v.tainted?.should == false
    end
  end
    
            -> { w.f4('foo', 0) }.should output(nil, %r|core/kernel/fixtures/classes.rb:#{w.warn_call_lineno}: warning: foo|)
        -> { w.f4('foo', 1) }.should output(nil, %r|core/kernel/fixtures/classes.rb:#{w.f1_call_lineno}: warning: foo|)
        -> { w.f4('foo', 2) }.should output(nil, %r|core/kernel/fixtures/classes.rb:#{w.f2_call_lineno}: warning: foo|)
        -> { w.f4('foo', 3) }.should output(nil, %r|core/kernel/fixtures/classes.rb:#{w.f3_call_lineno}: warning: foo|)
      end