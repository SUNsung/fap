
        
        module Commander
  # This class override the run method with our custom stack trace handling
  # In particular we want to distinguish between user_error! and crash! (one with, one without stack trace)
  class Runner
    # Code taken from https://github.com/commander-rb/commander/blob/master/lib/commander/runner.rb#L50
    
        it 'adds an environment Hash at the beginning' do
      message = 'A message'
      command = command_from_args({ 'PATH' => '/usr/local/bin' }, 'git', 'commit', '-m', message)
      expect(command).to eq('PATH=/usr/local/bin git commit -m #{message.shellescape}')
    end
    
        def initialize(machine, guests, capabilities)
      @capabilities = capabilities
      @guests       = guests
      @machine      = machine
    end
    
            # Returns the instance variables as a hash of key-value pairs.
        def instance_variables_hash
          instance_variables.inject({}) do |acc, iv|
            acc[iv.to_s[1..-1]] = instance_variable_get(iv)
            acc
          end
        end
    
              @registered.each do |plugin|
            providers.merge!(plugin.provider.to_hash)
          end
    
            # Defines a capability for the given guest. The block should return
        # a class/module that has a method with the capability name, ready
        # to be executed. This means that if it is an instance method,
        # the block should return an instance of the class.
        #
        # @param [String] guest The name of the guest
        # @param [String] cap The name of the capability
        def self.guest_capability(guest, cap, &block)
          components.guest_capabilities[guest.to_sym].register(cap.to_sym, &block)
          nil
        end
    
        def silence_log
      @silence = true
      yield
    ensure
      @silence = false
    end
  end
end

    
      # Disable request forgery protection in test environment.
  config.action_controller.allow_forgery_protection = false
    
      def test_font_helper_with_suffix_sharp
    assert_match %r(url\(['']?/assets/.*svg#.+['']?\)), @css
  end
    
        remove_duplicates
    remove_index :share_visibilities, name: :shareable_and_user_id
    add_index :share_visibilities, %i(shareable_id shareable_type user_id), name: :shareable_and_user_id, unique: true
    
      def confirm_on_page(page_name)
    if page_name == 'my profile page'
      expect(page).to have_path_in([person_path(@me.person), user_profile_path(@me.username)])
    else
      expect(page).to have_path(path_to(page_name))
    end
  end
end
    
    module RuboCop
  module AST
    # A node extension for `hash` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `hash` nodes within RuboCop.
    class HashNode < Node
      # Returns an array of all the key value pairs in the `hash` literal.
      #
      # @return [Array<PairNode>] an array of `pair` nodes
      def pairs
        each_pair.to_a
      end
    
              raise ArgumentError unless valid_argument_types?
        end
    
          def unprocessable_entity(message)
        render plain: { exception: message }.to_json, status: 422
      end
    
            # Should be overriden if you have areas of your checkout that don't match
        # up to a step within checkout_steps, such as a registration step
        def skip_state_validation?
          false
        end
    
            # Takes besides the products attributes either an array of variants or
        # an array of option types.
        #
        # By submitting an array of variants the option types will be created
        # using the *name* key in options hash. e.g
        #
        #   product: {
        #     ...
        #     variants: {
        #       price: 19.99,
        #       sku: 'hey_you',
        #       options: [
        #         { name: 'size', value: 'small' },
        #         { name: 'color', value: 'black' }
        #       ]
        #     }
        #   }
        #
        # Or just pass in the option types hash:
        #
        #   product: {
        #     ...
        #     option_types: ['size', 'color']
        #   }
        #
        # By passing the shipping category name you can fetch or create that
        # shipping category on the fly. e.g.
        #
        #   product: {
        #     ...
        #     shipping_category: 'Free Shipping Items'
        #   }
        #
        def new; end
    
            def scope
          if params[:country_id]
            @country = Country.accessible_by(current_ability, :read).find(params[:country_id])
            @country.states.accessible_by(current_ability, :read).order('name ASC')
          else
            State.accessible_by(current_ability, :read).order('name ASC')
          end
        end
      end
    end
  end
end

    
        module ActionMailer
      def sidekiq_delay(options={})
        Proxy.new(DelayedMailer, self, options)
      end
      def sidekiq_delay_for(interval, options={})
        Proxy.new(DelayedMailer, self, options.merge('at' => Time.now.to_f + interval.to_f))
      end
      def sidekiq_delay_until(timestamp, options={})
        Proxy.new(DelayedMailer, self, options.merge('at' => timestamp.to_f))
      end
      alias_method :delay, :sidekiq_delay
      alias_method :delay_for, :sidekiq_delay_for
      alias_method :delay_until, :sidekiq_delay_until
    end
    
        # Creating the Redis#brpop command takes into account any
    # configured queue weights. By default Redis#brpop returns
    # data from the first queue that has pending elements. We
    # recreate the queue command each time we invoke Redis#brpop
    # to honor weights and avoid queue starvation.
    def queues_cmd
      if @strictly_ordered_queues
        @queues
      else
        queues = @queues.shuffle.uniq
        queues << TIMEOUT
        queues
      end
    end
    
        class WithoutTimestamp < Pretty
      def call(severity, time, program_name, message)
        '#{::Process.pid} TID-#{Sidekiq::Logging.tid}#{context} #{severity}: #{message}\n'
      end
    end
    
          def default_tabs
        DEFAULT_TABS
      end