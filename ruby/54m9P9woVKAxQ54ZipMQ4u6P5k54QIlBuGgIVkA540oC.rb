
        
            open_dry_run_modal(agent)
    click_on('Dry Run')
    expect(page).to have_text('Dry Run started')
    expect(page).to have_selector(:css, 'li[role='presentation'].active a[href='#tabLog']')
  end
end

    
        it 'can be turned off' do
      stub(DefaultScenarioImporter).seed { fail 'seed should not have been called'}
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('IMPORT_DEFAULT_SCENARIO_FOR_ALL_USERS') { 'false' }
      DefaultScenarioImporter.import(user)
    end
    
          it 'loads only the workers specified in the :only option' do
        agent_runner = AgentRunner.new(only: HuginnScheduler)
        workers = agent_runner.send(:load_workers)
        expect(workers.keys).to eq(['HuginnScheduler'])
        agent_runner.stop
      end
    
      it 'ignores invalid values' do
    location2 = Location.new(
      lat: 2,
      lng: 3,
      radius: -1,
      speed: -1,
      course: -1)
    expect(location2.radius).to be_nil
    expect(location2.speed).to be_nil
    expect(location2.course).to be_nil
  end
    
        it 'should revert extract and template options for an updated WebsiteAgent' do
      expect(agent.options).to include('extract' => new_extract,
                                       'template' => new_template)
      ConvertWebsiteAgentTemplateForMerge.new.down
      agent.reload
      expect(agent.options).to include('extract' => reverted_extract,
                                       'template' => reverted_template)
    end
  end
end

    
    require 'vagrant/capability_host'
    
            # This is called to upgrade this V1 config to V2. The parameter given
        # is the full V2 configuration object, so you can do anything to it
        # that you want.
        #
        # No return value is expected, modifications should be made directly
        # to the new V2 object.
        #
        # @param [V2::Root] new
        def upgrade(new)
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
    
            # This is the method called to when the system is being destroyed
        # and allows the provisioners to engage in any cleanup tasks necessary.
        def cleanup
        end
      end
    end
  end
end

    
                  # Break so we don't find the next non flag and shift our
              # main args.
              break
            end
          end
    
            # Initializes the communicator with the machine that we will be
        # communicating with. This base method does nothing (it doesn't
        # even store the machine in an instance variable for you), so you're
        # expected to override this and do something with the machine if
        # you care about it.
        #
        # @param [Machine] machine The machine this instance is expected to
        #   communicate with.
        def initialize(machine)
        end
    
            # An internal finalize call that no subclass should override.
        def _finalize!
          @__finalized = true
        end
      end
    end
  end
end

    
          # Returns the path to a file for the given key.
      #
      # @param key [String]
      # @return [String] The path to the cache file.
      def path_to(key)
        key = key.gsub(/[<>:\\|?*%]/) {|c| '%%%03d' % c.ord}
        File.join(cache_location, key)
      end
    end
  end
end

    
        # Set an option for specifying `Encoding.default_external`.
    #
    # @param opts [OptionParser]
    def encoding_option(opts)
      encoding_desc = 'Specify the default encoding for input files.'
      opts.on('-E', '--default-encoding ENCODING', encoding_desc) do |encoding|
        Encoding.default_external = encoding
      end
    end
    
    SPREE_GEMS = %w(core api cmd backend frontend sample).freeze
    
            include Spree::Core::ControllerHelpers::Auth
        include Spree::Core::ControllerHelpers::Order
        # This before_action comes from Spree::Core::ControllerHelpers::Order
        skip_before_action :set_current_order
    
            def show
          @image = Image.accessible_by(current_ability, :read).find(params[:id])
          respond_with(@image)
        end
    
            def scope
          @scope ||= if params[:option_type_id]
                       Spree::OptionType.find(params[:option_type_id]).option_values.accessible_by(current_ability, :read)
                     else
                       Spree::OptionValue.accessible_by(current_ability, :read).load
                     end
        end
    
            def void
          perform_payment_action(:void_transaction)
        end
    
            def product_property
          if @product
            @product_property ||= @product.product_properties.find_by(id: params[:id])
            @product_property ||= @product.product_properties.includes(:property).where(spree_properties: { name: params[:id] }).first
            raise ActiveRecord::RecordNotFound unless @product_property
            authorize! :read, @product_property
          end
        end
    
              respond_with(@shipment, default_template: :show)
        end
    
    When /^I append gems from Appraisal Gemfile$/ do
  File.read(ENV['BUNDLE_GEMFILE']).split(/\n/).each do |line|
    if line =~ /^gem '(?!rails|appraisal)/
      append_to_gemfile line.strip
    end
  end
end
    
      def framework_major_version
    framework_version.split('.').first.to_i
  end
end
World(RailsCommandHelpers)

    
        def geometry_string
      begin
        orientation = Paperclip.options[:use_exif_orientation] ?
          '%[exif:orientation]' : '1'
        Paperclip.run(
          Paperclip.options[:is_windows] ? 'magick identify' : 'identify',
          '-format '%wx%h,#{orientation}' :file', {
            :file => '#{path}[0]'
          }, {
            :swallow_stderr => true
          }
        )
      rescue Terrapin::ExitStatusError
        ''
      rescue Terrapin::CommandNotFoundError => e
        raise_because_imagemagick_missing
      end
    end
    
        def define_getters
      define_instance_getter
      define_class_getter
    end