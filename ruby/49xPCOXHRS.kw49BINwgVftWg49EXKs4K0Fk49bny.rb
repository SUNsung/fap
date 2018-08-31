
        
                  # Add the help option, which must be on every command.
          opts.on_tail('-h', '--help', 'Print this help') do
            safe_puts(opts.help)
            return nil
          end
    
            # Initializes the system. Any subclasses MUST make sure this
        # method is called on the parent. Therefore, if a subclass overrides
        # `initialize`, then you must call `super`.
        def initialize(vm)
          @vm = vm
        end
    
            # This method is expected to return a class that is used for
        # configuring the provisioner. This return value is expected to be
        # a subclass of {Config}.
        #
        # @return [Config]
        def self.config_class
        end
    
            # Executes a command on the remote machine with administrative
        # privileges. See {#execute} for documentation, as the API is the
        # same.
        #
        # @see #execute
        def sudo(command, opts=nil)
        end
    
            # This contains all the hosts and their parents.
        #
        # @return [Registry<Symbol, Array<Class, Symbol>>]
        attr_reader :hosts
    
              result
        end
    
    Then(/^the specified stage files are created$/) do
  qa = TestApp.test_app_path.join('config/deploy/qa.rb')
  production = TestApp.test_app_path.join('config/deploy/production.rb')
  expect(File.exist?(qa)).to be true
  expect(File.exist?(production)).to be true
end
    
    Given(/^file '(.*?)' exists in shared path$/) do |file|
  file_shared_path = TestApp.shared_path.join(file)
  run_vagrant_command('mkdir -p #{file_shared_path.dirname}')
  run_vagrant_command('touch #{file_shared_path}')
end
    
          super
    end
    
          def initialize(values={})
        @trusted_keys = []
        @fetched_keys = []
        @locations = {}
        @values = values
        @trusted = true
      end
    
                respond_with(@order, default_template: :show, status: 201)
          else
            @order = Spree::Order.create!(user: current_api_user, store: current_store)
            if Cart::Update.call(order: @order, params: order_params).success?
              respond_with(@order, default_template: :show, status: 201)
            else
              invalid_resource!(@order)
            end
          end
        end
    
            def capture
          perform_payment_action(:capture)
        end
    
            def property_params
          params.require(:property).permit(permitted_property_attributes)
        end
      end
    end
  end
end

    
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

    
            def index
          authorize! :read, StockMovement
          @stock_movements = scope.ransack(params[:q]).result.page(params[:page]).per(params[:per_page])
          respond_with(@stock_movements)
        end
    
          if !debug?
        # Will deal with transient network errors
        execute_bundler_with_retry(options)
      else
        options[:verbose] = true
        execute_bundler(options)
      end
    end
    
                              specs
                        end
  end
end # class Logstash::PluginManager

    
          PluginManager.ui.info('Install successful')
    rescue ::Bundler::BundlerError => e
      raise PluginManager::InstallError.new(e), 'An error occurred went installing plugins'
    ensure
      FileUtils.rm_rf(uncompressed_path) if uncompressed_path && Dir.exist?(uncompressed_path)
    end
    
          include_examples('safe URI')
    end
    
              it 'successfully install the plugin' do
            command = logstash.run_command_in_path('bin/logstash-plugin install logstash-filter-qatest')
            expect(command).to install_successfully
            expect(logstash).to have_installed?('logstash-filter-qatest')
          end