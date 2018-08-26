
        
        def check_with_builtin(content)
  content.include?('{%') || content.include?('{{')
end
    }
    }
    }
    
    if pathutil_relative == native_relative
  Benchmark.ips do |x|
    x.report('pathutil') { pathutil_relative }
    x.report('native')   { native_relative }
    x.compare!
  end
else
  print 'PATHUTIL: '
  puts pathutil_relative
  print 'NATIVE:   '
  puts native_relative
end

    
    Benchmark.ips do |x|
  x.report('no body include?') { CONTENT_NOT_CONTAINING.include?('<body') }
  x.report('no body regexp')   { CONTENT_NOT_CONTAINING =~ /<\s*body/ }
  x.compare!
end
    
        def generate_metadata_files(v, path)
      app_details = v.application.details
    
          expected_options = FastlaneCore::Configuration.create(Deliver::Options.available_options, {
        description: 'My description',
        username: 'me@it.com',
        run_precheck_before_submit: false
      })
    
          def self.available_options
        [
          FastlaneCore::ConfigItem.new(key: :platforms,
                                       optional: false,
                                       type: Array,
                                       default_value: '',
                                       description: 'The optional extra platforms to support')
        ]
      end
    
              # Setup the options hash
          options ||= {}
    
            # This method is automatically called when the system is available (when
        # Vagrant can successfully SSH into the machine) to give the system a chance
        # to determine the distro and return a distro-specific system.
        #
        # If this method returns nil, then this instance is assumed to be
        # the most specific guest implementation.
        def distro_dispatch
        end
    
            # This registers a plugin. This should _NEVER_ be called by the public
        # and should only be called from within Vagrant. Vagrant will
        # automatically register V1 plugins when a name is set on the
        # plugin.
        def register(plugin)
          if !@registered.include?(plugin)
            @logger.info('Registered plugin: #{plugin.name}')
            @registered << plugin
          end
        end
    
            # This contains all the push implementations by name.
        #
        # @return [Registry<Symbol, Array<Class, Hash>>]
        attr_reader :pushes
    
    namespace :bower do
    
        # @include and @extend from LESS:
    #  .mixin()             -> @include mixin()
    #  #scope > .mixin()    -> @include scope-mixin()
    #  &:extend(.mixin all) -> @include mixin()
    def replace_mixins(less, mixin_names)
      mixin_pattern = /(?<=^|\s)((?:[#|\.][\w-]+\s*>\s*)*)\.([\w-]+)\((.*)\)(?!\s\{)/
    }
    
    Then(/^the failure task will not run$/) do
  failed = TestApp.shared_path.join('failed')
  expect { run_vagrant_command(test_file_exists(failed)) }
    .to raise_error(VagrantHelpers::VagrantSSHCommandError)
end
    
      at_exit do
    if ENV['KEEP_RUNNING']
      puts 'Vagrant vm will be left up because KEEP_RUNNING is set.'
      puts 'Rerun without KEEP_RUNNING set to cleanup the vm.'
    else
      vagrant_cli_command('destroy -f')
    end
  end
    
          # Runs all validation rules registered for the given key against the
      # user-supplied value for that variable. If no validator raises an
      # exception, the value is assumed to be valid.
      def assert_valid_now(key, value)
        validators[key].each do |validator|
          validator.call(key, value)
        end
      end