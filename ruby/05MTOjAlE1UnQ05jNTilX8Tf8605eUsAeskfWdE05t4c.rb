
        
            DOCUMENT_RGX = /\A(?:\s|(?:<!--.*?-->))*<(?:\!doctype|html)/i
    
        def effective_url
      @effective_url ||= URL.parse super
    end
    
          def additional_options
        super.merge! redirections: self.class.redirections
      end
    end
    
        def origin
      if scheme && host
        origin = '#{scheme}://#{host}'
        origin.downcase!
        origin << ':#{port}' if port
        origin
      else
        nil
      end
    end
    
    module Vagrant
  module Plugin
    module V1
      # This class maintains a list of all the registered plugins as well
      # as provides methods that allow querying all registered components of
      # those plugins as a single unit.
      class Manager
        attr_reader :registered
    
          context 'applies to gG' do
        it 'does not remove trailing zeros' do
          format('%#g', 123.4).should == '123.400'
          format('%#g', 123.4).should == '123.400'
        end
      end
    end
    
      it 'raises an ArgumentError when passed a negative duration' do
    lambda { sleep(-0.1) }.should raise_error(ArgumentError)
    lambda { sleep(-1) }.should raise_error(ArgumentError)
  end
    
            -> { w.f4('', 0) }.should output(nil, %r|core/kernel/fixtures/classes.rb:#{w.warn_call_lineno}: warning: \n$|)
        -> { w.f4(nil, 0) }.should output(nil, %r|core/kernel/fixtures/classes.rb:#{w.warn_call_lineno}: warning: \n$|)
      end
    
          File.open('bower.json', 'w') do |f|
        f.puts JSON.pretty_generate(spec)
      end
    end
  end
end

    
        def initialize(*args)
      @s = StringScanner.new(*args)
    end
    
      # Send deprecation notices to registered listeners.
  config.active_support.deprecation = :notify