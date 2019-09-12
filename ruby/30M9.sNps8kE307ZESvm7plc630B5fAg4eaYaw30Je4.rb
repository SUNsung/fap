
        
            def find_by_content(query)
      repository.search_files_by_content(query, ref).map do |result|
        Gitlab::Search::FoundBlob.new(content_match: result, project: project, ref: ref, repository: repository)
      end
    end
    
          option :secret, nil
      option :algorithm, 'HS256'
      option :uid_claim, 'email'
      option :required_claims, %w(name email)
      option :info_map, { name: 'name', email: 'email' }
      option :auth_url, nil
      option :valid_within, nil
    
              status :created
          present member, with: Entities::Member
        end
        # rubocop: enable CodeReuse/ActiveRecord
    
            def setup_config(template, filename, template_vars)
          # If we have custom configuration, upload it
          remote_custom_config_path = nil
          if @config.custom_config_path
            expanded = File.expand_path(
              @config.custom_config_path, @machine.env.root_path)
            remote_custom_config_path = File.join(
              guest_provisioning_path, 'custom-config.rb')
    
    require Vagrant.source_root.join('plugins/provisioners/chef/cap/freebsd/chef_installed')
    
      if Vagrant::Util::Platform.windows?
    c.filter_run_excluding :skip_windows
  else
    c.filter_run_excluding :windows
  end
    
          subject.call(env)
    end
    
        # Returns a {Machine} for the given name and provider that
    # is represented by this Vagrantfile.
    #
    # @param [Symbol] name Name of the machine.
    # @param [Symbol] provider The provider the machine should
    #   be backed by (required for provider overrides).
    # @param [BoxCollection] boxes BoxCollection to look up the
    #   box Vagrantfile.
    # @param [Pathname] data_path Path where local machine data
    #   can be stored.
    # @param [Environment] env The environment running this machine
    # @return [Machine]
    def machine(name, provider, boxes, data_path, env)
      # Load the configuration for the machine
      results = machine_config(name, provider, boxes, data_path)
      box             = results[:box]
      config          = results[:config]
      config_errors   = results[:config_errors]
      config_warnings = results[:config_warnings]
      provider_cls    = results[:provider_cls]
      provider_options = results[:provider_options]
    
          subject.send(:run_remote, shell_config, on_error, exit_codes)
    end
    
        def create_eligible_credit_event
      # When cancelling an order, a payment with the negative amount
      # of the payment total is created to refund the customer. That
      # payment has a source of itself (Spree::Payment) no matter the
      # type of payment getting refunded, hence the additional check
      # if the source is a store credit.
      return unless store_credit? && source.is_a?(Spree::StoreCredit)
    
          it { is_expected.to be_persisted }
    end
  end
    
            private
    
            def create
          @order.validate_payments_attributes([payment_params])
          @payment = @order.payments.build(payment_params)
          if @payment.save
            respond_with(@payment, status: 201, default_template: :show)
          else
            invalid_resource!(@payment)
          end
        end
    
            def show
          authorize! :admin, ReturnAuthorization
          @return_authorization = order.return_authorizations.accessible_by(current_ability, :show).find(params[:id])
          respond_with(@return_authorization)
        end
    
            def add
          quantity = params[:quantity].to_i
    
      describe '#output' do
    let(:original) { FPM::Package::Snap.new }
    let(:input) { FPM::Package::Snap.new }
    
        if @attributes.include?(:prefix)
      installdir = staging_path(@attributes[:prefix])
    else
      installdir = staging_path
    end
    
      dont_obsolete_paths = []
  option '--dont-obsolete', 'DONT_OBSOLETE_PATH',
    'A file path for which to 'dont-obsolete' in the built PackageInfo. ' \
    'Can be specified multiple times.' do |path|
      dont_obsolete_paths << path
    end
    
        ::Dir.mkdir(File.join(builddir, 'manifests'))
    manifests.each do |manifest|
      dir = File.join(builddir, 'manifests', File.dirname(manifest))
      logger.info('manifests targeting: #{dir}')
      ::Dir.mkdir(dir) if !File.directory?(dir)