
        
            def to_json
      JSON.generate(as_json)
    end
  end
end

    
        private
    
      if respond_to?(:helper_method)
    helpers = %w(resource scope_name resource_name signed_in_resource
                 resource_class resource_params devise_mapping)
    helper_method(*helpers)
  end
    
        def self.check_fields!(klass)
      failed_attributes = []
      instance = klass.new
    
            format('%1$*2$e', 109.52, -20).should == '1.095200e+02        '
        format('%1$*2$E', 109.52, -20).should == '1.095200E+02        '
        format('%1$*2$f', 10.952, -20).should == '10.952000           '
        format('%1$*2$g', 12.1234, -20).should == '12.1234             '
        format('%1$*2$G', 12.1234, -20).should == '12.1234             '
        format('%1$*2$a', 196, -20).should == '0x1.88p+7           '
        format('%1$*2$A', 196, -20).should == '0X1.88P+7           '
    
    describe 'Kernel.throw' do
  it 'transfers control to the end of the active catch block waiting for symbol' do
    catch(:blah) do
      :value
      throw :blah
      fail('throw didn't transfer the control')
    end.should be_nil
  end
    
            -> { w.f4(0.1) }.should output(nil, %r|classes.rb:#{w.warn_call_lineno}:|)
        -> { w.f4(Rational(1, 2)) }.should output(nil, %r|classes.rb:#{w.warn_call_lineno}:|)
      end
    
      it 'creates a public method in script binding' do
    eval @code, script_binding
    Object.should have_method :boom
  end
    
          prepare_package(explicit_plugins_specs, temp_path)
      LogStash::Util::Zip.compress(temp_path, @target)
    ensure
      FileUtils.rm_rf(temp_path)
    end
    
    class LogStash::PluginManager::Pack < LogStash::PluginManager::PackCommand
  option '--tgz', :flag, 'compress package as a tar.gz file', :default => !LogStash::Environment.windows?
  option '--zip', :flag, 'compress package as a zip file', :default => LogStash::Environment.windows?
  option '--[no-]clean', :flag, 'clean up the generated dump of plugins', :default => true
  option '--overwrite', :flag, 'Overwrite a previously generated package file', :default => false
    
        FileUtils.rm_rf(LogStash::Environment::CACHE_PATH)
    validate_cache_location
    archive_manager.extract(package_file, LogStash::Environment::CACHE_PATH)
    puts('Unpacked at #{LogStash::Environment::CACHE_PATH}')
    puts('The unpacked plugins can now be installed in local-only mode using bin/logstash-plugin install --local [plugin name]')
  end
    
      def execute
    # Turn off any jar dependencies lookup when running with `--local`
    ENV['JARS_SKIP'] = 'true' if local?
    
        not_matching_pipeline = described_class.new(source, pipeline_id, [], settings)
    expect(subject).not_to eq(not_matching_pipeline)
    
        desc 'Halt all VM's involved in the acceptance test round'
    task :halt, :platform do |t, args|
      config   = PlatformConfig.new
      experimental = (ENV['LS_QA_EXPERIMENTAL_OS'].to_s.downcase || 'false') == 'true'
      machines = config.select_names_for(args[:platform], {'experimental' => experimental})
    
    module Jekyll
    
        def get_web_content(url)
      raw_uri           = URI.parse url
      proxy             = ENV['http_proxy']
      if proxy
        proxy_uri       = URI.parse(proxy)
        https           = Net::HTTP::Proxy(proxy_uri.host, proxy_uri.port).new raw_uri.host, raw_uri.port
      else
        https           = Net::HTTP.new raw_uri.host, raw_uri.port
      end
      https.use_ssl     = true
      https.verify_mode = OpenSSL::SSL::VERIFY_NONE
      request           = Net::HTTP::Get.new raw_uri.request_uri
      data              = https.request request
    end
  end
    
      # Improved version of Liquid's truncatewords:
  # - Uses typographically correct ellipsis (…) insted of '...'
  def truncatewords(input, length)
    truncate = input.split(' ')
    if truncate.length > length
      truncate[0..length-1].join(' ').strip + ' &hellip;'
    else
      input
    end
  end