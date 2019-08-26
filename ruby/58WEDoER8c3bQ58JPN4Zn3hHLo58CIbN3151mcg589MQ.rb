
        
              it 'returns an active nav link with menu when on a child page' do
        stub(self).current_page?('/things') { false }
        stub(self).current_page?('/things/stuff') { true }
        nav = nav_link('Things', '/things') { nav_link('Stuff', '/things/stuff') }
        expect(nav).to be_html_safe
        a0 = Nokogiri(nav).at('li.dropdown.dropdown-hover.active > a[href='/things']')
        expect(a0).to be_a Nokogiri::XML::Element
        expect(a0.text.strip).to eq('Things')
        a1 = Nokogiri(nav).at('li.dropdown.dropdown-hover.active > li:not(.active) > a[href='/things/stuff']')
        expect(a1).to be_a Nokogiri::XML::Element
        expect(a1.text.strip).to eq('Stuff')
      end
    end
  end
    
            # Fix the order of receivers
        @agents.each do |agent|
          stub.proxy(agent).receivers { |orig| orig.order(:id) }
        end
      end
    
    describe DefaultScenarioImporter do
  let(:user) { users(:bob) }
  describe '.import' do
    it 'imports a set of agents to get the user going when they are first created' do
      mock(DefaultScenarioImporter).seed(is_a(User))
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('IMPORT_DEFAULT_SCENARIO_FOR_ALL_USERS') { 'true' }
      DefaultScenarioImporter.import(user)
    end
    
          desc 'Get the list of the available template' do
        detail 'This feature was introduced in GitLab #{gitlab_version}.'
        success Entities::TemplatesList
      end
      params do
        use :pagination
      end
      get 'templates/#{template_type}' do
        templates = ::Kaminari.paginate_array(TemplateFinder.build(template_type, nil).execute)
        present paginate(templates), with: Entities::TemplatesList
      end
    
            def select_directory(file_name)
          return [] unless @commit
    
            @filters << filter
      end
    
      describe '#can_update?' do
    context 'when user can update_group_member' do
      before do
        allow(presenter).to receive(:can?).with(user, :update_group_member, presenter).and_return(true)
      end
    
            begin
          new_value = value.present? ? ChronicDuration.parse(value).to_i : parameters[:default].presence
          assign_attributes(source_attribute => new_value)
        rescue ChronicDuration::DurationParseError
          # ignore error as it will be caught by validation
        end
      end
    
        helpers ::API::Helpers::MembersHelpers
    
          # The type of trigger, which defines where it will fire. If not defined,
      # the option will default to `:action`
      #
      # @return [Symbol]
      attr_accessor :type
    
      subject { described_class.new(machine) }
    
          iso_env.box3('base', '1.0', :foo, vagrantfile: <<-VF)
      Vagrant.configure('2') do |config|
        config.ssh.port = 123
        config.vm.hostname = 'hello'
      end
      VF
    
      # This allows control over dependency resolution when installing
  # plugins into vagrant. When true, dependency libraries that Vagrant
  # core relies upon will be hard constraints.
  #
  # @return [Boolean]
  def self.strict_dependency_enforcement
    if ENV['VAGRANT_DISABLE_STRICT_DEPENDENCY_ENFORCEMENT']
      false
    else
      true
    end
  end
    
              @env.ui.info('')
        end
    
      def set_poll
    @poll = Poll.attached.find(params[:id])
    authorize @poll.status, :show?
  rescue Mastodon::NotPermittedError
    raise ActiveRecord::RecordNotFound
  end
    
      def signed_payload
    @signed_payload ||= Oj.dump(serialize_payload(@account, ActivityPub::UpdateSerializer, signer: @account, sign_with: @options[:sign_with]))
  end
end

    
        old_account.update!(uri: 'https://example.org/alice', domain: 'example.org', protocol: :activitypub, inbox_url: 'https://example.org/inbox')
    new_account.update!(uri: 'https://example.com/alice', domain: 'example.com', protocol: :activitypub, inbox_url: 'https://example.com/inbox', also_known_as: [old_account.uri])
    
        context '!@username.nil?' do
      let(:username)  { '' }
    
    RSpec.describe UrlValidator, type: :validator do
  describe '#validate_each' do
    before do
      allow(validator).to receive(:compliant?).with(value) { compliant }
      validator.validate_each(record, attribute, value)
    end
    
    ActiveRecord::Migration.maintain_test_schema!
RSpec.configure do |config|
  config.use_transactional_fixtures = true
  config.infer_spec_type_from_file_location!
  config.include FactoryBot::Syntax::Methods
  config.include Postal::RspecHelpers
    
      def create
    @address_endpoint = @server.address_endpoints.build(safe_params)
    if @address_endpoint.save
      flash[:notice] = params[:return_notice] if params[:return_notice].present?
      redirect_to_with_json [:return_to, [organization, @server, :address_endpoints]]
    else
      render_form_errors 'new', @address_endpoint
    end
  end
    
      def create
    @http_endpoint = @server.http_endpoints.build(safe_params)
    if @http_endpoint.save
      flash[:notice] = params[:return_notice] if params[:return_notice].present?
      redirect_to_with_json [:return_to, [organization, @server, :http_endpoints]]
    else
      render_form_errors 'new', @http_endpoint
    end
  end
    
      def safe_params
    params.require(:ip_address).permit(:ipv4, :ipv6, :hostname)
  end
    
      before_action do
    if params[:server_id]
      @server = organization.servers.present.find_by_permalink!(params[:server_id])
      params[:id] && @ip_pool_rule = @server.ip_pool_rules.find_by_uuid!(params[:id])
    else
      params[:id] && @ip_pool_rule = organization.ip_pool_rules.find_by_uuid!(params[:id])
    end
  end