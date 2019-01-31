
        
                        raise Errors::VMNoMatchError if vms.empty?
              else
                # String name, just look for a specific VM
                vms << @env.vms[name.to_sym]
                raise Errors::VMNotFoundError, name: name if !vms[0]
              end
            end
          else
            vms = @env.vms_ordered
          end
    
            # Returns the instance variables as a hash of key-value pairs.
        def instance_variables_hash
          instance_variables.inject({}) do |acc, iv|
            acc[iv.to_s[1..-1]] = instance_variable_get(iv)
            acc
          end
        end
    
            # Registers a callback to be called when a specific action sequence
        # is run. This allows plugin authors to hook into things like VM
        # bootup, VM provisioning, etc.
        #
        # @param [Symbol] name Name of the action.
        # @return [Array] List of the hooks for the given action.
        def self.action_hook(name, &block)
          # Get the list of hooks for the given hook name
          data[:action_hooks] ||= {}
          hooks = data[:action_hooks][name.to_sym] ||= []
    
            def initialize(env, config)
          @env    = env
          @config = config
        end
    
            # Capture all bad configuration calls and save them for an error
        # message later during validation.
        def method_missing(name, *args, &block)
          return super if @__finalized
    
            # Set the name of the plugin. The moment that this is called, the
        # plugin will be registered and available. Before this is called, a
        # plugin does not exist. The name must be unique among all installed
        # plugins.
        #
        # @param [String] name Name of the plugin.
        # @return [String] The name of the plugin.
        def self.name(name=UNSET_VALUE)
          # Get or set the value first, so we have a name for logging when
          # we register.
          result = get_or_set(:name, name)
    
      failure_message_for_should do |actual|
    'expected #{actual.inspect} to have path in #{expected.inspect} but was #{actual.current_path.inspect}'
  end
  failure_message_for_should_not do |actual|
    'expected #{actual.inspect} to not have path in #{expected.inspect} but it had'
  end
end
    
        it 'should return a dummy value in the json version' do
      FactoryGirl.create(:notification, recipient: alice, target: post)
      get :read_all, format: :json
      expect(response).not_to be_redirect
    end
  end
end

    
        shared_examples 'on a visible post' do
      it 'creates the participation' do
        post :create, params: {post_id: @post.id}
        expect(alice.participations.where(:target_id => @post.id)).to exist
        expect(response.code).to eq('201')
      end
    end
    
          it 'keeps invalid params in form' do
        get :create, params: invalid_params
        expect(response.body).to match /jdoe@example.com/m
      end
    end
  end
end

    
            it 'doesn\'t allow the user to reshare the post again' do
          post_request!
          expect(response.code).to eq('422')
          expect(response.body).to eq(I18n.t('reshares.create.error'))
        end
      end
    
            expect(cop.offenses.size).to eq(1)
        expect(cop.highlights).to eq([close])
        expect(cop.messages).to eq([described_class::ALWAYS_NEW_LINE_MESSAGE])
      end
    
          # Checks whether any of the key value pairs in the `hash` literal are on
      # the same line.
      #
      # @note A multiline `pair` is considered to be on the same line if it
      #       shares any of its lines with another `pair`
      #
      # @return [Boolean] whether any `pair` nodes are on the same line
      def pairs_on_same_line?
        pairs.each_cons(2).any? { |first, second| first.same_line?(second) }
      end
    
          # Custom destructuring method. This is used to normalize the branches
      # for `pair` and `kwsplat` nodes, to add duck typing to `hash` elements.
      #
      # @return [Array<KeywordSplatNode>] the different parts of the `kwsplat`
      def node_parts
        [self, self]
      end
    end
  end
end

    
          # A shorthand for getting the first argument of the node.
      # Equivalent to `arguments.first`.
      #
      # @return [Node, nil] the first argument of the node,
      #                     or `nil` if there are no arguments
      def first_argument
        arguments[0]
      end