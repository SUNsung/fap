
        
              context 'at the top level' do
        let(:src) { 'if a then b else c end' }
    
              if node.blockarg_type?
            correct_for_blockarg_type(node)
          else
            lambda do |corrector|
              variable_name = if node.optarg_type?
                                node.node_parts[0]
                              else
                                # Extract only a var name without splat (`*`)
                                node.source.gsub(/\A\*+/, '')
                              end
              corrector.replace(node.loc.name, '_#{variable_name}')
            end
          end
        end
    
            def heredoc_node?(node)
          node.respond_to?(:heredoc?) && node.heredoc?
        end
    
          def extract_rhs(node)
        if node.casgn_type?
          _scope, _lhs, rhs = *node
        elsif node.op_asgn_type?
          _lhs, _op, rhs = *node
        elsif node.call_type?
          rhs = node.last_argument
        elsif node.assignment?
          _lhs, rhs = *node
        end
    
        context 'with an else statement' do
      let(:source) do
        ['if foo?',
         '  1',
         'else',
         '  2',
         'end'].join('\n')
      end
    
    
    {      # Checks whether the `block` literal is delimited by curly braces.
      #
      # @return [Boolean] whether the `block` literal is enclosed in braces
      def braces?
        loc.end&.is?('}')
      end
    
          # Returns an array of all the keys in the `hash` literal.
      #
      # @return [Array<Node>] an array of keys in the `hash` literal
      def keys
        each_key.to_a
      end
    
        def startup_window
      '#{name}:#{yaml['startup_window'] || base_index}'
    end
    
      before { instance.extend Tmuxinator::WemuxSupport }
    
      it 'creates an instance' do
    expect(subject).to be_a(Tmuxinator::Pane)
  end
    
        def list
      say 'tmuxinator projects:'
      if options[:newline]
        say Tmuxinator::Config.configs.join('\n')
      else
        print_in_columns Tmuxinator::Config.configs
      end
    end
    
      #
  # SPF
  #
    
      before_action do
    if params[:server_id]
      @server = organization.servers.present.find_by_permalink!(params[:server_id])
      params[:id] && @domain = @server.domains.find_by_uuid!(params[:id])
    else
      params[:id] && @domain = organization.domains.find_by_uuid!(params[:id])
    end
  end
    
      def destroy
    unless current_user.authenticate(params[:password])
      respond_to do |wants|
        wants.html { redirect_to organization_delete_path(@organization), :alert => 'The password you entered was not valid. Please check and try again.' }
        wants.json { render :json => {:alert => 'The password you entered was invalid. Please check and try again.'} }
      end
      return
    end
    
      def update
    if @track_domain.update(params.require(:track_domain).permit(:track_loads, :track_clicks, :excluded_click_domains, :ssl_enabled))
      redirect_to_with_json [organization, @server, :track_domains]
    else
      render_form_errors 'edit', @track_domain
    end
  end
    
          def translate(key, **options)
        options = options.dup
        options[:default] &&= options[:default].to_s
        message = ::I18n.translate(key, **options)
        message.present? ? message : fallback_message(key, **options)
      end
    
          it 'gives an english fallback error when default locale message is blank' do
        I18n.locale = 'pt-BR'.to_sym
        subject.params do
          requires :age, type: Integer
        end
        subject.get '/single' do
          'int works'
        end
    
              get '/with_conditional/sometimes'
          expect(last_response.body).to eq 'sometimes'
    
            def make_inclusion(mod, &block)
          define_boolean_in_mod(mod)
          inject_api_helpers_to_mod(mod, &block)
          namespace_stackable(:helpers, mod)
        end
    
    module Grape
  module DSL
    module RequestResponse
      extend ActiveSupport::Concern
    
          # (see #unset_global_setting)
      def unset_namespace_stackable(key)
        unset :namespace_stackable, key
      end
    
            if presenter
          embeds = { env: env }
          embeds[:version] = env[Grape::Env::API_VERSION] if env[Grape::Env::API_VERSION]
          presented_message = presenter.represent(presented_message, embeds).serializable_hash
        end