
        
                desc 'Requests access for the authenticated user to a #{source_type}.' do
          detail 'This feature was introduced in GitLab 8.11.'
          success Entities::AccessRequester
        end
        post ':id/access_requests' do
          source = find_source(source_type, params[:id])
          access_requester = source.request_access(current_user)
    
              if badge.is_a?(GroupBadge) && source.is_a?(Project)
            error!('To delete a Group badge please use the Group endpoint', 403)
          end
    
          desc 'Get a specific project's deploy keys' do
        success Entities::DeployKeysProject
      end
      params do
        use :pagination
      end
      # rubocop: disable CodeReuse/ActiveRecord
      get ':id/deploy_keys' do
        keys = user_project.deploy_keys_projects.preload(:deploy_key)
    
              if !@run.key?(:privileged)
            @run[:privileged] = false
          end
    
        it 'should raise an exception' do
      expect { subject }.
        to raise_error(Vagrant::Errors::BoxMetadataFileNotFound)
    end
  end
    
            vf_path           = @machine.provider_config.vagrant_vagrantfile
        host_machine_name = @machine.provider_config.vagrant_machine || :default
        if !vf_path
          # We don't have a Vagrantfile path set, so we're going to use
          # the default but we need to copy it into the data dir so that
          # we don't write into our installation dir (we can't).
          default_path = File.expand_path('../hostmachine/Vagrantfile', __FILE__)
          vf_path      = @machine.env.data_dir.join('docker-host', 'Vagrantfile')
          begin
            @machine.env.lock('docker-provider-hostvm') do
              vf_path.dirname.mkpath
              FileUtils.cp(default_path, vf_path)
            end
          rescue Vagrant::Errors::EnvironmentLockedError
            # Lock contention, just retry
            retry
          end
    
    describe Vagrant::BatchAction do
  let(:called_actions) { [] }
  let!(:lock) { Mutex.new }
  let(:provider_name) { 'test' }
  let(:provider_options) { {} }
    
          # Resolve the request set to ensure proper activation order
      solution = request_set.resolve(current_set)
      solution_specs = solution.map(&:full_spec)
      solution_full_names = solution_specs.map(&:full_name)
    
          def add_host(host, properties={})
        new_host = Server[host]
        new_host.port = properties[:port] if properties.key?(:port)
        # This matching logic must stay in sync with `Server#matches?`.
        key = ServerKey.new(new_host.hostname, new_host.port)
        existing = servers_by_key[key]
        if existing
          existing.user = new_host.user if new_host.user
          existing.with(properties)
        else
          servers_by_key[key] = new_host.with(properties)
        end
      end
    
          def fetch(key, default=nil, &block)
        fetched_keys << key unless fetched_keys.include?(key)
        peek(key, default, &block)
      end
    
    # We use a special :_default_git value so that SCMResolver can tell whether the
# default has been replaced by the user via `set`.
set_if_empty :scm, Capistrano::Configuration::SCMResolver::DEFAULT_GIT
set_if_empty :branch, 'master'
set_if_empty :deploy_to, -> { '/var/www/#{fetch(:application)}' }
set_if_empty :tmp_dir, '/tmp'
    
        def reset
      preferences.each do |name, _value|
        set_preference name, preference_default(name)
      end
    end
    
        def errors
      validators.map(&:errors).reduce({}, :merge)
    end
    
                  inventory_unit.save!
            end
    
          def variants_associations
        [{ option_values: :option_type }, :default_price, :images]
      end
    
            def create
          authorize! :create, Spree::OptionValue
          @option_value = scope.new(option_value_params)
          if @option_value.save
            render :show, status: 201
          else
            invalid_resource!(@option_value)
          end
        end
    
            def index
          @properties = Spree::Property.accessible_by(current_ability)
    
            def index
          authorize! :admin, ReturnAuthorization
          @return_authorizations = order.return_authorizations.accessible_by(current_ability).
                                   ransack(params[:q]).result.
                                   page(params[:page]).per(params[:per_page])
          respond_with(@return_authorizations)
        end