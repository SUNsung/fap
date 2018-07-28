
        
          class FeatureTopicUsers < Jobs::Base
    
        def form_configurable_attributes
      form_configurable_fields.keys
    end
  end
end

    
      def tumblr_oauth_token_secret
    service.secret
  end
    
      it 'evaluates elsif-body in containing scope' do
    a = 123
    if false
      b = a+1
    elsif false
      b = a+2
    elsif true
      b = a+3
    else
      b = a+4
    end
    b.should == 126
  end
end

    
      it 'returns a Time with a UTC offset specified as -HH:MM' do
    t = Time.gm(2007, 1, 9, 12, 0, 0)
    t.localtime('-01:00')
    t.should == Time.new(2007, 1, 9, 11, 0, 0, -3600)
    t.utc_offset.should == -3600
  end
    
        self
  end
    
        Tempfile.create(name.to_s) {|f|
      f.sync = true
      expected = ''
      result = nil
      bytes[0...-1].each do |x|
        f.write x
        f.write ' '
        f.pos -= 1
        expected << x
        assert_nothing_raised(bug6487) {result = File.read(f.path, mode: 'rb:bom|utf-8')}
        assert_equal('#{expected} '.force_encoding('utf-8'), result)
      end
      f.write bytes[-1]
      assert_nothing_raised(bug6487) {result = File.read(f.path, mode: 'rb:bom|utf-8')}
      assert_equal '', result, 'valid bom'
    }
  end
    
      it 'decodes the remaining doubles when passed the '*' modifier' do
    array = '@\x07333333?\xf6ffffff@\x20ffffff'.unpack(unpack_format('*'))
    array.should == [2.9, 1.4, 8.2]
  end
    
    fileOutJar 	= clsFile.new_with_sig('Ljava.lang.String;', 'output.jar')
filesIn		= Array.new