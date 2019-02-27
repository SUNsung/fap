
        
            def lanes
      @lanes ||= {}
    end
    
          it 'adds docset_feed_name param to command' do
        result = Fastlane::FastFile.new.parse('lane :test do
          appledoc(
            project_name: 'Project Name',
            project_company: 'Company',
            input: 'input/dir',
            docset_feed_name: 'DocSet feed name'
          )
        end').runner.execute(:test)
    
            expect(result.size).to eq(4)
        expect(result[0]).to eq('security create-keychain -p testpassword ~/Library/Keychains/test.keychain')
    
              result = Fastlane::FastFile.new.parse('lane :test do
            swiftlint(
              strict: true,
              executable: '#{CUSTOM_EXECUTABLE_NAME}'
            )
          end').runner.execute(:test)
    
          if data_type == Array
        return value.split(',') if value.kind_of?(String)
      elsif data_type == Integer
        return value.to_i if value.to_i.to_s == value.to_s
      elsif data_type == Float
        return value.to_f if value.to_f.to_s == value.to_s
      elsif allow_shell_conversion
        return value.shelljoin if value.kind_of?(Array)
        return value.map { |k, v| '#{k.to_s.shellescape}=#{v.shellescape}' }.join(' ') if value.kind_of?(Hash)
      elsif data_type != String
        # Special treatment if the user specified true, false or YES, NO
        # There is no boolean type, so we just do it here
        if %w(YES yes true TRUE).include?(value)
          return true
        elsif %w(NO no false FALSE).include?(value)
          return false
        end
      end
    
    # The * turns the array into a parameter list
# This is using the form of exec which takes a variable parameter list, e.g. `exec(command, param1, param2, ...)`
# We need to use that, because otherwise invocations like
# `spaceauth -u user@fastlane.tools` would recognize '-u user@fastlane.tools' as a single parameter and throw errors
exec(*exec_arr)

    
        def initialize(machine, guests, capabilities)
      @capabilities = capabilities
      @guests       = guests
      @machine      = machine
    end
    
            # Executes a command and returns true if the command succeeded,
        # and false otherwise. By default, this executes as a normal user,
        # and it is up to the communicator implementation if they expose an
        # option for running tests as an administrator.
        #
        # @see #execute
        def test(command, opts=nil)
        end
      end
    end
  end
end

    
            # Allows setting options from a hash. By default this simply calls
        # the `#{key}=` method on the config class with the value, which is
        # the expected behavior most of the time.
        #
        # This is expected to mutate itself.
        #
        # @param [Hash] options A hash of options to set on this configuration
        #   key.
        def set_options(options)
          options.each do |key, value|
            send('#{key}=', value)
          end
        end
    
            # This is called early, before a machine is instantiated, to check
        # if this provider is usable. This should return true or false.
        #
        # If raise_error is true, then instead of returning false, this
        # should raise an error with a helpful message about why this
        # provider cannot be used.
        #
        # @param [Boolean] raise_error If true, raise exception if not usable.
        # @return [Boolean]
        def self.usable?(raise_error=false)
          # Return true by default for backwards compat since this was
          # introduced long after providers were being written.
          true
        end
    
            it 'does not leave a space at the start of negative numbers' do
          format('% b', -10).should == '-1010'
          format('% B', -10).should == '-1010'
          format('% d', -112).should == '-112'
          format('% i', -112).should == '-112'
          format('% o', -87).should == '-127'
          format('% u', -112).should == '-112'
          format('% x', -196).should == '-c4'
          format('% X', -196).should == '-C4'
    
      it 'raises a TypeError when passed a String' do
    lambda { srand('7') }.should raise_error(TypeError)
  end
end
    
      platform_is :windows do
    it 'runs commands starting with any number of @ using shell' do
      `#{ruby_cmd('p system 'does_not_exist'')} 2>NUL`.chomp.should == 'nil'
      @object.system('@does_not_exist 2>NUL').should == false
      @object.system('@@@#{ruby_cmd('exit 0')}').should == true
    end
  end
end
    
        $Kernel_trace_var_global = 'foo'
    
    require 'bundler/cli'
require 'bundler/friendly_errors'
    
    if $0 == __FILE__
  begin
    LogStash::PluginManager::Main.run('bin/logstash-plugin', ARGV)
  rescue LogStash::PluginManager::Error => e
    $stderr.puts(e.message)
    exit(1)
  end
end

    
        desc 'Bootstrap all the VM's used for this tests'
    task :setup, :platform do |t, args|
      config   = PlatformConfig.new
      experimental = (ENV['LS_QA_EXPERIMENTAL_OS'].to_s.downcase || 'false') == 'true'
      machines = config.select_names_for(args[:platform], {'experimental' => experimental})
    
        context 'with a specific plugin' do
      let(:plugin_name) { 'logstash-input-stdin' }
      it 'list the plugin and display the plugin name' do
        result = logstash.run_command_in_path('bin/logstash-plugin list #{plugin_name}')
        expect(result).to run_successfully_and_output(/^#{plugin_name}$/)
      end
    
    require_relative 'lib/spree/core/version.rb'
    
    desc 'Generates a dummy app for testing for every Spree engine'
task :test_app do
  SPREE_GEMS.each do |gem_name|
    Dir.chdir('#{File.dirname(__FILE__)}/#{gem_name}') do
      sh 'rake test_app'
    end
  end
end
    
            def address_params
          params.require(:address).permit(permitted_address_attributes)
        end
    
              unless inventory_unit.respond_to?(can_event) &&
              inventory_unit.send(can_event)
            render plain: { exception: 'cannot transition to #{@event}' }.to_json,
                   status: 200
            false
          end
        end
    
        while readable_io = IO.select([self_read])
      signal = readable_io.first[0].gets.strip
      handle_signal(launcher, signal)
    end
  #end
rescue SystemExit => e
  #Sidekiq.logger.error('Profiling...')
  #result = RubyProf.stop
  #printer = RubyProf::GraphHtmlPrinter.new(result)
  #printer.print(File.new('output.html', 'w'), :min_percent => 1)
  # normal
rescue => e
  raise e if $DEBUG
  STDERR.puts e.message
  STDERR.puts e.backtrace.join('\n')
  exit 1
end

    
        ##
    # Define client-side middleware:
    #
    #   client = Sidekiq::Client.new
    #   client.middleware do |chain|
    #     chain.use MyClientMiddleware
    #   end
    #   client.push('class' => 'SomeWorker', 'args' => [1,2,3])
    #
    # All client instances default to the globally-defined
    # Sidekiq.client_middleware but you can change as necessary.
    #
    def middleware(&block)
      @chain ||= Sidekiq.client_middleware
      if block_given?
        @chain = @chain.dup
        yield @chain
      end
      @chain
    end
    
        def fire_event(event, options={})
      reverse = options[:reverse]
      reraise = options[:reraise]
    
        def _erb(file, locals)
      locals.each {|k, v| define_singleton_method(k){ v } unless (singleton_methods.include? k)} if locals