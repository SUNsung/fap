
        
        describe 'Dry running an Agent', js: true do
  let(:agent)   { agents(:bob_website_agent) }
  let(:formatting_agent) { agents(:bob_formatting_agent) }
  let(:user)    { users(:bob) }
  let(:emitter) { agents(:bob_weather_agent) }
    
        it 'defauls foreground and background colors' do
      scenario.tag_fg_color = nil
      scenario.tag_bg_color = nil
      expect(style_colors(scenario)).to eq('color:#FFFFFF;background-color:#5BC0DE')
    end
  end
    
        context 'agents which require a service' do
      let(:valid_parsed_services) do
        data = valid_parsed_data
        data[:agents] = [valid_parsed_basecamp_agent_data,
                         valid_parsed_trigger_agent_data]
        data
      end
    
        it 'always succeeds in sorting even if it finds pairs of incomparable objects' do
      time = Time.now
      tuples = [
        [2,   'a', time - 1],  # 0
        [1,   'b', nil],       # 1
        [1,   'b', time],      # 2
        ['2', nil, time],      # 3
        [1,   nil, time],      # 4
        [nil, 'a', time + 1],  # 5
        [2,   'a', time],      # 6
      ]
      orders = [true, false, true]
      expected = tuples.values_at(3, 6, 0, 4, 2, 1, 5)
    
    describe ConvertWebsiteAgentTemplateForMerge do
  let :old_extract do
    {
      'url' => { 'css' => '#comic img', 'value' => '@src' },
      'title' => { 'css' => '#comic img', 'value' => '@alt' },
      'hovertext' => { 'css' => '#comic img', 'value' => '@title' }
    }
  end
    
      it 'truncates message to a reasonable length' do
    log = AgentLog.new(:agent => agents(:jane_website_agent), :level => 3)
    log.message = 'a' * 11_000
    log.save!
    expect(log.message.length).to eq(10_000)
  end
    
      before(:each) do
    stub_request(:get, /events.json$/).to_return(
      :body => File.read(Rails.root.join('spec/data_fixtures/basecamp.json')),
      :status => 200,
      :headers => {'Content-Type' => 'text/json'}
    )
    stub_request(:get, /projects.json$/).to_return(
      :body => JSON.dump([{name: 'test', id: 1234},{name: 'test1', id: 1235}]),
      :status => 200,
      :headers => {'Content-Type' => 'text/json'}
    )
    stub_request(:get, /02:00$/).to_return(
      :body => File.read(Rails.root.join('spec/data_fixtures/basecamp.json')),
      :status => 200,
      :headers => {'Content-Type' => 'text/json'}
    )
    @valid_params = { :project_id => 6789 }
    
      # POST /resource/sign_in
  def create
    self.resource = warden.authenticate!(auth_options)
    set_flash_message!(:notice, :signed_in)
    sign_in(resource_name, resource)
    yield resource if block_given?
    respond_with resource, location: after_sign_in_path_for(resource)
  end
    
        if resource.errors.empty?
      set_flash_message! :notice, :unlocked
      respond_with_navigational(resource){ redirect_to after_unlock_path_for(resource) }
    else
      respond_with_navigational(resource.errors, status: :unprocessable_entity){ render :new }
    end
  end
    
      # Returns real navigational formats which are supported by Rails
  def navigational_formats
    @navigational_formats ||= Devise.navigational_formats.select { |format| Mime::EXTENSION_LOOKUP[format.to_s] }
  end
    
            if options[:bypass]
          ActiveSupport::Deprecation.warn(<<-DEPRECATION.strip_heredoc, caller)
          [Devise] bypass option is deprecated and it will be removed in future version of Devise.
          Please use bypass_sign_in method instead.
          Example:
    
          # Stores the provided location to redirect the user after signing in.
      # Useful in combination with the `stored_location_for` helper.
      #
      # Example:
      #
      #   store_location_for(:user, dashboard_path)
      #   redirect_to user_facebook_omniauth_authorize_path
      #
      def store_location_for(resource_or_scope, location)
        session_key = stored_location_key_for(resource_or_scope)
        
        path = extract_path_from_location(location)
        session[session_key] = path if path
      end
    
    module Devise
  module Controllers
    # Create url helpers to be used with resource/scope configuration. Acts as
    # proxies to the generated routes created by devise.
    # Resource param can be a string or symbol, a class, or an instance object.
    # Example using a :user resource:
    #
    #   new_session_path(:user)      => new_user_session_path
    #   session_path(:user)          => user_session_path
    #   destroy_session_path(:user)  => destroy_user_session_path
    #
    #   new_password_path(:user)     => new_user_password_path
    #   password_path(:user)         => user_password_path
    #   edit_password_path(:user)    => edit_user_password_path
    #
    #   new_confirmation_path(:user) => new_user_confirmation_path
    #   confirmation_path(:user)     => user_confirmation_path
    #
    # Those helpers are included by default to ActionController::Base.
    #
    # In case you want to add such helpers to another class, you can do
    # that as long as this new class includes both url_helpers and
    # mounted_helpers. Example:
    #
    #     include Rails.application.routes.url_helpers
    #     include Rails.application.routes.mounted_helpers
    #
    module UrlHelpers
      def self.remove_helpers!
        self.instance_methods.map(&:to_s).grep(/_(url|path)$/).each do |method|
          remove_method method
        end
      end
    
              resource 'setuptools' do
          ^^^^^^^^^^^^^^^^^^^^^ Formulae using virtualenvs do not need a `setuptools` resource.
            url 'https://foo.com/foo.tar.gz'
            sha256 'db0904a28253cfe53e7dedc765c71596f3c53bb8a866ae50123320ec1a7b73fd'
          end
    
      def patch(strip = :p1, src = nil, &block)
    p = Patch.create(strip, src, &block)
    dependency_collector.add(p.resource) if p.is_a? ExternalPatch
    patches << p
  end
    
      describe '#message' do
    its(:message) { is_expected.to match(/Java is required to install this formula./) }
  end
    
          # Look in the standard locations, because even if port or fink are
      # not in the path they can still break builds if the build scripts
      # have these paths baked in.
      %w[/sw/bin/fink /opt/local/bin/port].each do |ponk|
        path = Pathname.new(ponk)
        paths << path if path.exist?
      end
    
          def latest_version
        case MacOS.version
        when '10.9'  then '6.2'
        when '10.10' then '7.2.1'
        when '10.11' then '8.2.1'
        when '10.12' then '9.2'
        when '10.13' then '10.1'
        when '10.14' then '10.2.1'
        when '10.15' then '11.0'
        else
          raise 'macOS '#{MacOS.version}' is invalid' unless OS::Mac.prerelease?
    
        def extract_primary_container
      odebug 'Extracting primary container'
    
    require 'cask/config'
    
          if @quarantine
        Quarantine.cask!(cask: @cask, download_path: @downloaded_path)
      else
        Quarantine.release!(download_path: @downloaded_path)
      end
    end
  end
end

    
        def metadata_versioned_path(version: self.version)
      cask_version = (version || :unknown).to_s
    
        it_behaves_like 'literal', '!true'
    it_behaves_like 'literal', ''#{2}''
    it_behaves_like 'literal', '(1)'
    it_behaves_like 'literal', '(false && true)'
    it_behaves_like 'literal', '(false <=> true)'
    it_behaves_like 'literal', '(false or true)'
    it_behaves_like 'literal', '[1, 2, 3]'
    it_behaves_like 'literal', '{ :a => 1, :b => 2 }'
    it_behaves_like 'literal', '{ a: 1, b: 2 }'
    it_behaves_like 'literal', '/./'
    it_behaves_like 'literal', '%r{abx}ixo'
    it_behaves_like 'literal', '1.0'
    it_behaves_like 'literal', '1'
    it_behaves_like 'literal', 'false'
    it_behaves_like 'literal', 'nil'
    it_behaves_like 'literal', ''str''
    
            private
    
      describe 'similar name suggestion' do
    context 'when there's a similar variable-like method invocation' do
      it 'suggests the method name' do
        expect_offense(<<~RUBY)
          def some_method
            enviromnent = {}
            ^^^^^^^^^^^ Useless assignment to variable - `enviromnent`. Did you mean `environment`?
            another_symbol
            puts environment
          end
        RUBY
      end
    end
    
            def check_closing_pipe_space(args, closing_pipe)
          last         = args.last.source_range
          last_end_pos = last_end_pos_inside_pipes(last.end_pos)
    
      it 'registers an offense for next guard clause not followed by empty line ' \
     'when guard clause is after heredoc including string interpolation' do
    expect_offense(<<~'RUBY')
      raise(<<-FAIL) unless true
        #{1 + 1}
      FAIL
      ^^^^ Add empty line after guard clause.
      1
    RUBY
  end
    
    
    {      # Checks whether the `block` literal is delimited by curly braces.
      #
      # @return [Boolean] whether the `block` literal is enclosed in braces
      def braces?
        loc.end&.is?('}')
      end
    
    module RuboCop
  module AST
    # A node extension for `for` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `for` nodes within RuboCop.
    class ForNode < Node
      # Returns the keyword of the `for` statement as a string.
      #
      # @return [String] the keyword of the `until` statement
      def keyword
        'for'
      end
    
          set_preference args[0], args[1] if args.size == 2
    end
    
      private
    
                it_behaves_like 'shipping rate matches'
          end
    
            def update
          authorize! :update, @order, order_token
          @address = find_address
    
            def prepare_event
          return unless @event = params[:fire]
    
            def create
          authorize! :create, ProductProperty
          @product_property = @product.product_properties.new(product_property_params)
          if @product_property.save
            respond_with(@product_property, status: 201, default_template: :show)
          else
            invalid_resource!(@product_property)
          end
        end