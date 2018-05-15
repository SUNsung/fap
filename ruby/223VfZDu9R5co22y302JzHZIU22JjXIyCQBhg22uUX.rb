    projects
  end
end

    
        if registration
      u2f.authenticate!(challenges, response, Base64.decode64(registration.public_key), registration.counter)
      registration.update(counter: response.counter)
      true
    end
  rescue JSON::ParserError, NoMethodError, ArgumentError, U2F::Error
    false
  end
end

    
        assert_equal(6, e.size)
    set << 42
    assert_equal(7, e.size)
  end
    
      it 'decodes the number of shorts requested by the count modifier' do
    'badcfe'.unpack(unpack_format(3)).should == [25185, 25699, 26213]
  end
    
      it 'decodes the number of bytes specified by the count modifier' do
    'abc'.unpack(unpack_format(3)).should == ['abc']
  end
    
      require 'sass/plugin/rack'
  class Sass::Plugin::MerbBootLoader < Merb::BootLoader
    after Merb::BootLoader::RackUpApplication