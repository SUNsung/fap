
        
              it 'adds docset_cert_issuer param to command' do
        result = Fastlane::FastFile.new.parse('lane :test do
          appledoc(
            project_name: 'Project Name',
            project_company: 'Company',
            input: 'input/dir',
            docset_cert_issuer: 'Some issuer'
          )
        end').runner.execute(:test)
    
            it 'sets up screenshots folder in current folder' do
          expect(options[:screenshots_path]).to eq('./screenshots')
        end
    
        class [[NAME_CLASS]] < Action
      def self.run(params)
        # fastlane will take care of reading in the parameter and fetching the environment variable:
        UI.message 'Parameter API Token: #{params[:api_token]}'
    
      it 'shows the dry run pop up without previous events and selects the log tab when no event was created' do
    stub_request(:get, 'http://xkcd.com/').
      with(:headers => {'Accept-Encoding'=>'gzip,deflate', 'User-Agent'=>'Huginn - https://github.com/huginn/huginn'}).
      to_return(:status => 200, :body => '', :headers => {})
    
      it 'imports a scenario which requires a service' do
    visit new_scenario_imports_path
    attach_file('Option 2: Upload a Scenario JSON File', File.join(Rails.root, 'spec/data_fixtures/twitter_scenario.json'))
    click_on 'Start Import'
    check('I confirm that I want to import these Agents.')
    expect { click_on 'Finish Import' }.to change(Scenario, :count).by(1)
    expect(page).to have_text('Import successful!')
  end
end

    
    describe DotHelper do
  describe 'with example Agents' do
    class Agents::DotFoo < Agent
      default_schedule '2pm'
    
      context '#set_traps' do
    it 'sets traps for INT TERM and QUIT' do
      agent_runner = AgentRunner.new
      mock(Signal).trap('INT')
      mock(Signal).trap('TERM')
      mock(Signal).trap('QUIT')
      agent_runner.set_traps
    
        it 'has a default when the result is empty' do
      expect(AgentsExporter.new(:name => '').filename).to eq('exported-agents.json')
      expect(AgentsExporter.new(:name => 'Ə').filename).to eq('exported-agents.json')
      expect(AgentsExporter.new(:name => '-').filename).to eq('exported-agents.json')
      expect(AgentsExporter.new(:name => ',,').filename).to eq('exported-agents.json')
    end
  end
    
        it 'should raise an exception when encountering complex JSONPaths' do
      @agent.options['username_path'] = '$.very.complex[*]'
      expect { LiquidMigrator.convert_all_agent_options(@agent) }.
        to raise_error('JSONPath '$.very.complex[*]' is too complex, please check your migration.')
    end
    
      let :old_template do
    {
      'url' => '{{url}}',
      'title' => '{{ title }}',
      'description' => '{{ hovertext }}',
      'comment' => '{{ comment }}'
    }
  end
    
          send_e404(cli, request)
    end
    
    
  # open rmcpplus_request with cipherzero
  def self.create_ipmi_session_open_cipher_zero_request(console_session_id)
    head = [
      0x06, 0x00, 0xff, 0x07,   # RMCP Header
      0x06,                     # RMCP+ Authentication Type
      PAYLOAD_RMCPPLUSOPEN_REQ, # Payload Type
      0x00, 0x00, 0x00, 0x00,   # Session ID
      0x00, 0x00, 0x00, 0x00    # Sequence Number
    ].pack('C*')
    
                encoded
          end
    
    module Rex
  module Proto
    module Kerberos
      module Model
        # This class provides a representation of a Kerberos Checksum definition.
        class Checksum < Element
    
              # Decodes the flags field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_flags(input)
            input.value[0].value.to_i
          end
    
              # Decodes the crealm field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [String]
          def decode_crealm(input)
            input.value[0].value
          end
    
              # Decodes the stime field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Time]
          def decode_stime(input)
            input.value[0].value
          end
    
      def up
    Photo.joins('INNER JOIN posts ON posts.guid = photos.status_message_guid')
         .where(posts: {type: 'StatusMessage', public: true}).update_all(public: true)
    
          @conv2 = Conversation.create(hash)
      Message.create(:author => @person, :created_at => Time.now + 100, :text => 'message', :conversation_id => @conv2.id)
             .increase_unread(alice)
    
        it 'generates a jasmine fixture', :fixture => true do
      contact = alice.contact_for(bob.person)
      aspect = alice.aspects.create(:name => 'people')
      contact.aspects << aspect
      contact.save
      get :new, params: {person_id: bob.person.id}
      save_fixture(html_for('body'), 'status_message_new')
    end
  end
end

    
        context 'on my own post' do
      before do
        aspect_to_post = alice.aspects.where(:name => 'generic').first
        @post = alice.post :status_message, :text => 'something', :to => aspect_to_post
      end
    
        it 'redirects to /stream for a mobile user' do
      request.headers['X_MOBILE_DEVICE'] = true
      post :create, params: {user: {remember_me: '0', username: @user.username, password: 'evankorth'}}
      expect(response).to be_redirect
      expect(response.location).to match /^#{stream_url}\??$/
    end
  end
    
        context 'filter on payment state' do
      it 'only shows the orders with the selected payment state' do
        select Spree.t('payment_states.#{order1.payment_state}'), from: 'Payment State'
        click_on 'Filter Results'
        within_row(1) { expect(page).to have_content('R100') }
        within('table#listing_orders') { expect(page).not_to have_content('R200') }
      end
    end
    
            def advance
          authorize! :update, @order, order_token
          while @order.next; end
          respond_with(@order, default_template: 'spree/api/v1/orders/show', status: 200)
        end
    
          @@user_attributes = [:id, :email, :created_at, :updated_at]
    
    # and write them both.
begin
  output_packages.each do |output_package|
    output = output_package.to_s
    output_package.output(output)
    
          mandatory(@command.args.any? || @command.inputs || @command.input_type == 'empty',
                'No parameters given. You need to pass additional command ' \
                'arguments so that I know what you want to build packages ' \
                'from. For example, for '-s dir' you would pass a list of ' \
                'files and directories. For '-s gem' you would pass a one' \
                ' or more gems to package from. As a full example, this ' \
                'will make an rpm of the 'json' rubygem: ' \
                '`fpm -s gem -t rpm json`')
    end # def validate
    
    # Use an OS X pkg built with pkgbuild.
#
# Supports input and output. Requires pkgbuild and (for input) pkgutil, part of a
# standard OS X install in 10.7 and higher.
class FPM::Package::OSXpkg < FPM::Package
    
      option '--user', 'USER', 'The owner of files in this package', :default => 'root'
    
      option '--channel', 'CHANNEL_URL',
    'The pear channel url to use instead of the default.'
    
      # Default specfile generator just makes one specfile, whatever that is for
  # this package.
  def generate_specfile(builddir)
    paths = []
    logger.info('PWD: #{File.join(builddir, unpack_data_to)}')
    fileroot = File.join(builddir, unpack_data_to)
    Dir.chdir(fileroot) do
      Find.find('.') do |p|
        next if p == '.'
        paths << p
      end
    end
    logger.info(paths[-1])
    manifests = %w{package.pp package/remove.pp}
    
      option '--user', 'USER',
    'Set the user to USER in the prototype files.',
    :default => 'root'
    
          version_components = version.split('.').collect { |v| v.to_i }