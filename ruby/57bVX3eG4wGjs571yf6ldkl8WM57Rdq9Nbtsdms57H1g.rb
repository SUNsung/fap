
        
            # test only
    def stopped?
      !@thread&.alive?
    end
    
      def initialize(app, options = nil)
    @app = app
    if GlobalSetting.enable_cors && GlobalSetting.cors_origin.present?
      @global_origins = GlobalSetting.cors_origin.split(',').map(&:strip)
    end
  end
    
      def self.cleanup!
    DB.exec(<<~SQL)
      DELETE FROM drafts
       WHERE sequence < (
        SELECT MAX(s.sequence)
          FROM draft_sequences s
         WHERE s.draft_key = drafts.draft_key
           AND s.user_id = drafts.user_id
      )
    SQL
    
          @directives[directive].delete(:none) if @directives[directive].count > 1
    end
    
              extension[directive] ||= []
          extension[directive] << source
        end
      end
    end
  end
end

    
          theme.destroy!
    
        cookies.delete('authentication_data')
    cookies.delete(TOKEN_COOKIE)
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

    
              # Persist through the set of invalid methods
          this_invalid  = @__invalid_methods || Set.new
          other_invalid = other.instance_variable_get(:'@__invalid_methods') || Set.new
          result.instance_variable_set(:'@__invalid_methods', this_invalid + other_invalid)
    
            # This returns all registered pushes.
        #
        # @return [Registry]
        def pushes
          Registry.new.tap do |result|
            @registered.each do |plugin|
              result.merge!(plugin.components.pushes)
            end
          end
        end
    
            # This should return an action callable for the given name.
        #
        # @param [Symbol] name Name of the action.
        # @return [Object] A callable action sequence object, whether it
        #   is a proc, object, etc.
        def action(name)
          nil
        end
    
      # An irb inspector
  #
  # In order to create your own custom inspector there are two things you
  # should be aware of:
  #
  # Inspector uses #inspect_value, or +inspect_proc+, for output of return values.
  #
  # This also allows for an optional #init+, or +init_proc+, which is called
  # when the inspector is activated.
  #
  # Knowing this, you can create a rudimentary inspector as follows:
  #
  #     irb(main):001:0> ins = IRB::Inspector.new(proc{ |v| 'omg! #{v}' })
  #     irb(main):001:0> IRB.CurrentContext.inspect_mode = ins # => omg! #<IRB::Inspector:0x007f46f7ba7d28>
  #     irb(main):001:0> 'what?' #=> omg! what?
  #
  class Inspector
    # Default inspectors available to irb, this includes:
    #
    # +:pp+::       Using Kernel#pretty_inspect
    # +:yaml+::     Using YAML.dump
    # +:marshal+::  Using Marshal.dump
    INSPECTORS = {}
    
    # File.open('ao.ppm', 'w') do |fp|
  # $fp = fp
  printf('P6\n')
  printf('%d %d\n', IMAGE_WIDTH, IMAGE_HEIGHT)
  printf('255\n')
  Scene.new.render(IMAGE_WIDTH, IMAGE_HEIGHT, NSUBSAMPLES)
# end
    
      config.vm.define 'freebsd10' do |freebsd10|
    freebsd10.vm.box = 'tjay/freebsd-10.1'
  end
    
    # Add our files (should be in the current directory):
package.input('my-executable=/usr/bin/')
package.input('my-library.so=/usr/lib/')
    
        logger.info('Installing pear package', :package => input_package,
                  :directory => staging_path)
    ::Dir.chdir(staging_path) do
      safesystem('pear', '-c', config, 'install', '-n', '-f', input_package)
    end
    
        cleanup_staging
    # Tell 'dir' to input '.' and chdir/prefix will help it figure out the
    # rest.
    dir.input('.')
    @staging_path = dir.staging_path
    dir.cleanup_build
  end # def input
    
        task(options.name) do |_, task_args|
      block.call(*[options, task_args].first(block.arity)) if block_given?
      abort('Must specify args') unless options.respond_to?(:args)
      @args = options.delete_field(:args)
      run_cli
    end
  end