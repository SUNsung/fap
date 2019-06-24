
        
            # Example
    #
    #     Inspector.def_inspector(key, init_p=nil){|v| v.inspect}
    #     Inspector.def_inspector([key1,..], init_p=nil){|v| v.inspect}
    #     Inspector.def_inspector(key, inspector)
    #     Inspector.def_inspector([key1,...], inspector)
    def self.def_inspector(key, arg=nil, &block)
      if block_given?
        inspector = IRB::Inspector(block, arg)
      else
        inspector = arg
      end
    
            File.open destination, 'w' do |io|
          io.write metadata
        end
      else
        basename = File.basename path, '.gem'
        target_dir = File.expand_path basename, options[:target]
    
          # Only uses first 72 characters of string
      ('12345678'*9).crypt('$2a$04$0WVaz0pV3jzfZ5G5tpmHWu').should == '$2a$04$0WVaz0pV3jzfZ5G5tpmHWukj/ORBnsMjCGpST/zCJnAypc7eAbutK'
      ('12345678'*10).crypt('$2a$04$0WVaz0pV3jzfZ5G5tpmHWu').should == '$2a$04$0WVaz0pV3jzfZ5G5tpmHWukj/ORBnsMjCGpST/zCJnAypc7eAbutK'
    
        # `#colorize_code` is supported only for Ruby 2.5+. It just returns the original code in 2.4-.
    def colorize_code_supported?
      Gem::Version.new(RUBY_VERSION) >= Gem::Version.new('2.5.0')
    end
    
        assert_equal(true, RespondTo::Sub.new.respond_to?(:foo))
  end
    
    if defined?(RbConfig)
  module RbConfig
    @ruby = EnvUtil.rubybin
    class << self
      undef ruby if method_defined?(:ruby)
      attr_reader :ruby
    end
    dir = File.dirname(ruby)
    CONFIG['bindir'] = dir
    Gem::ConfigMap[:bindir] = dir if defined?(Gem::ConfigMap)
  end
end
    
        mkcdtmpdir do
      assert_not_nil(f = File.open('symbolic', 'w'))
      f.close
      assert_not_nil(f = File.open('numeric',  File::WRONLY|File::TRUNC|File::CREAT))
      f.close
      assert_not_nil(f = File.open('hash-symbolic', :mode => 'w'))
      f.close
      assert_not_nil(f = File.open('hash-numeric', :mode => File::WRONLY|File::TRUNC|File::CREAT), feature4742)
      f.close
      assert_nothing_raised(bug6055) {f = File.open('hash-symbolic', binmode: true)}
      f.close
    end
  end
    
      def test_font_helper_without_suffix
    assert_match %r(url\(['']?/assets/.*eot['']?\)), @css
  end
    
          def page_name
        @name.gsub('-', ' ')
      end
    
          def previous_link
      end
    
          def has_path
        !@path.nil?
      end
    
          def editable
        @editable
      end
    
      def app
    Precious::App
  end
end
    
      # puts '\n== Copying sample files =='
  # unless File.exist?('config/database.yml')
  #   cp 'config/database.yml.sample', 'config/database.yml'
  # end
    
      # In the development environment your application's code is reloaded on
  # every request. This slows down response time but is perfect for development
  # since you don't have to restart the web server when you make code changes.
  config.cache_classes = false