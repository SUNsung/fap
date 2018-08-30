
        
            it 'allows to delete a user' do
      visit admin_users_path
      find(:css, 'a[href='/admin/users/#{users(:bob).id}']').click
      expect(page).to have_text('User 'bob' was deleted.')
      expect(page).to have_no_text('bob@example.com')
    end
    
      it 'shows the dry run pop up without previous events and selects the log tab when no event was created' do
    stub_request(:get, 'http://xkcd.com/').
      with(:headers => {'Accept-Encoding'=>'gzip,deflate', 'User-Agent'=>'Huginn - https://github.com/huginn/huginn'}).
      to_return(:status => 200, :body => '', :headers => {})
    
        class Agents::DotBar < Agent
      cannot_be_scheduled!
    
    describe DefaultScenarioImporter do
  let(:user) { users(:bob) }
  describe '.import' do
    it 'imports a set of agents to get the user going when they are first created' do
      mock(DefaultScenarioImporter).seed(is_a(User))
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('IMPORT_DEFAULT_SCENARIO_FOR_ALL_USERS') { 'true' }
      DefaultScenarioImporter.import(user)
    end
    
      describe '#pretty_jsonify' do
    it 'escapes </script> tags in the output JSON' do
      cleaned_json = Utils.pretty_jsonify(:foo => 'bar', :xss => '</script><script>alert('oh no!')</script>')
      expect(cleaned_json).not_to include('</script>')
      expect(cleaned_json).to include('<\\/script>')
    end
  end
    
            # Configures the given list of networks on the virtual machine.
        #
        # The networks parameter will be an array of hashes where the hashes
        # represent the configuration of a network interface. The structure
        # of the hash will be roughly the following:
        #
        # {
        #   type:      :static,
        #   ip:        '192.168.33.10',
        #   netmask:   '255.255.255.0',
        #   interface: 1
        # }
        #
        def configure_networks(networks)
          raise BaseError, _key: :unsupported_configure_networks
        end
    
              @registered.each do |plugin|
            hosts.merge!(plugin.host.to_hash)
          end
    
            # This is the method called to 'prepare' the provisioner. This is called
        # before any actions are run by the action runner (see {Vagrant::Actions::Runner}).
        # This can be used to setup shared folders, forward ports, etc. Whatever is
        # necessary on a 'meta' level.
        #
        # No return value is expected.
        def prepare
        end
    
            # This registers a plugin. This should _NEVER_ be called by the public
        # and should only be called from within Vagrant. Vagrant will
        # automatically register V2 plugins when a name is set on the
        # plugin.
        def register(plugin)
          if !@registered.include?(plugin)
            @logger.info('Registered plugin: #{plugin.name}')
            @registered << plugin
          end
        end
    
            # Registers a callback to be called when a specific action sequence
        # is run. This allows plugin authors to hook into things like VM
        # bootup, VM provisioning, etc.
        #
        # @param [String] name Name of the action.
        # @param [Symbol] hook_name The location to hook. If this isn't
        #   set, every middleware action is hooked.
        # @return [Array] List of the hooks for the given action.
        def self.action_hook(name, hook_name=nil, &block)
          # The name is currently not used but we want it for the future.
    
    module Vagrant
  module Plugin
    module V2
      # This is the base class for a provider for the V2 API. A provider
      # is responsible for creating compute resources to match the needs
      # of a Vagrant-configured system.
      class Provider
        include CapabilityHost
    
      it 'accepts a Fixnum' do
    sleep(0).should be_close(0, 2)
  end
    
      desc 'Build all spree gems'
  task :build do
    pkgdir = File.expand_path('../pkg', __FILE__)
    FileUtils.mkdir_p pkgdir
    
              inventory_unit.transaction do
            if inventory_unit.update_attributes(inventory_unit_params)
              fire
              render :show, status: 200
            else
              invalid_resource!(inventory_unit)
            end
          end
        end
    
            def line_items_attributes
          { line_items_attributes: {
              id: params[:id],
              quantity: params[:line_item][:quantity],
              options: line_item_params[:options] || {}
          } }
        end
    
            def show
          respond_with(@payment)
        end
    
            def ship
          @shipment.ship! unless @shipment.shipped?
          respond_with(@shipment, default_template: :show)
        end
    
            def stock_movement_params
          params.require(:stock_movement).permit(permitted_stock_movement_attributes)
        end
      end
    end
  end
end
