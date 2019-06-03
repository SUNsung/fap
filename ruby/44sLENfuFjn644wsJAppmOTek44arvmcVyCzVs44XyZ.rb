
        
            # This returns whether the guest is ready to work. If this returns
    # `false`, then {#detect!} should be called in order to detect the
    # guest OS.
    #
    # @return [Boolean]
    def ready?
      !!capability_host_chain
    end
  end
end

    
            # Called after the configuration is finalized and loaded to validate
        # this object.
        #
        # @param [Environment] env Vagrant::Environment object of the
        #   environment that this configuration has been loaded into. This
        #   gives you convenient access to things like the the root path
        #   and so on.
        # @param [ErrorRecorder] errors
        def validate(env, errors)
        end
      end
    end
  end
end

    
            # This is an internal initialize function that should never be
        # overridden. It is used to initialize some common internal state
        # that is used in a provider.
        def _initialize(name, machine)
          initialize_capabilities!(
            name.to_sym,
            { name.to_sym => [Class.new, nil] },
            Vagrant.plugin('2').manager.provider_capabilities,
            machine,
          )
        end
      end
    end
  end
end

    
        def load_imports
      if options.show_tasks && Rake::Task.task_defined?('load:defaults')
        invoke 'load:defaults'
        set(:stage, '')
        Dir[deploy_config_path].each { |f| add_import f }
      end
    
          private
    
    set_if_empty :format, :airbrussh
set_if_empty :log_level, :debug
    
    @@ chat
<pre id='chat'></pre>
<form>
  <input id='msg' placeholder='type message here...' />
</form>
    
          <div id='post'>
        <h3 id='post-info'>POST</h3>
        <% if req.POST and not req.POST.empty? %>
          <table class='req'>
            <tr>
              <th>Variable</th>
              <th>Value</th>
            </tr>
            <% req.POST.sort_by { |k, v| k.to_s }.each { |key, val| %>
            <tr>
              <td><%=h key %></td>
              <td class='code'><div><%=h val.inspect %></div></td>
            </tr>
            <% } %>
          </table>
        <% else %>
          <p class='no-data'>No POST data.</p>
        <% end %>
        <div class='clear'></div>
      </div> <!-- /POST -->
    <% end %>
    
          # Creates a masked version of the authenticity token that varies
      # on each request. The masking is used to mitigate SSL attacks
      # like BREACH.
      def mask_token(token)
        token = decode_token(token)
        one_time_pad = SecureRandom.random_bytes(token.length)
        encrypted_token = xor_byte_strings(one_time_pad, token)
        masked_token = one_time_pad + encrypted_token
        encode_token(masked_token)
      end
    
            reaction
      end
    
        it 'Reads referrer from Host header when Referer header is relative' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => '/valid'}
      expect(subject.referrer(env)).to eq('foo.com')
    end
    
      context 'with redirect reaction' do
    before(:each) do
      mock_app do
        use Rack::Protection::CookieTossing, :reaction => :redirect
        run DummyApp
      end
    end
    
            it 'contains elements' do
          within('.additional-info') do
            expect(page).to have_content('complete')
            expect(page).to have_content('spree')
            expect(page).to have_content('backorder')
            expect(page).to have_content('balance due')
          end
        end
      end
    end
  end
    
              def render_order(result)
            if result.success?
              render_serialized_payload { serialized_current_order }
            else
              render_error_payload(result.error)
            end
          end
    
              def shipping_rates_service
            Spree::Api::Dependencies.storefront_checkout_get_shipping_rates_service.constantize
          end
    
      it 'calls Hooks.commands_from' do
    expect(Tmuxinator::Hooks).to receive(:commands_from).
      with(kind_of(Tmuxinator::Project), hook_name).once
    project.send('hook_#{hook_name}')
  end
    
    describe Tmuxinator::Pane do
  let(:klass) { described_class }
  let(:instance) { klass.new(index, project, window, *commands) }
  # let(:index) { 'vim' }
  # let(:project) { 0 }
  # let(:tab) { nil }
  # let(:commands) { nil }
  let(:index) { 0 }
  let(:project) { double }
  let(:window) { double }
  let(:commands) { ['vim', 'bash'] }
    
        context 'base index present' do
      before do
        allow(project).to receive_messages(get_base_index: '1')
      end
    
      if base_index = options.fetch(:base_index) { 1 }
    standard_options << 'base-index #{base_index}'
  end
    
          def valid_standard_project?(name)
        return false unless name
        raise 'Project #{name} doesn't exist.' unless exists?(name: name)
        true
      end