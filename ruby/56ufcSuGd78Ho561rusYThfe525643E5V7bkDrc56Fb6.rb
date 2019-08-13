
        
                # On Windows, we have to set a default chmod flag to avoid permission issues
        if Vagrant::Util::Platform.windows? && !args.any? { |arg| arg.start_with?('--chmod=') }
          # Ensures that all non-masked bits get enabled
          args << '--chmod=ugo=rwX'
    
      let(:iso_env) do
    # We have to create a Vagrantfile so there is a root path
    env = isolated_environment
    env.vagrantfile('')
    env.create_vagrant_env
  end
    
      after do
    ENV['VAGRANT_HOME'] = @vh
    FileUtils.rm_rf(@tmpdir)
  end
    
    puts '\nUnable to find an RSS feed for the following blogs:'
puts '==================================================='
unavailable.each do |b|
  puts '#{b.name} | #{b.web_url}'
end
puts '==================================================='

    
    class Converter
  extend Forwardable
  include Network
  include LessConversion
  include JsConversion
  include FontsConversion
    
      class SendPublic < Base
    def perform(*_args)
      # don't federate in cucumber
    end
  end
    
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

    
        describe 'other streams' do
      it 'redirects to the login page' do
        %i[activity followed_tags liked mentioned multi].each do |stream_path|
          get stream_path
          expect(response).to be_redirect
          expect(response).to redirect_to new_user_session_path
        end
      end
    end
  end
end

    
        it 'should use the given template URL' do
      template_url = 'https://github.com/custom/template.git'
      @sut.any_instance.expects(:git!).with(['clone', template_url, 'TestPod']).once
      run_command('lib', 'create', 'TestPod', '--template-url=#{template_url}')
    end
    
          # Init a new Indenter
      #
      # @param [IO] io @see io
      #
      def initialize(io = nil)
        @io = io
        @indent = ' ' * UI.indentation_level
      end
    
          it 'shows the git URL (when an upstream is not configured)' do
        output = run_command('repo', 'list')
        output.should.include? '- URL:  https://github.com/apiaryio/Specs'
      end
    end
  end
end

    
            # @return [Bool] Whether the sandbox is in synch with the lockfile.
        #
        def sandbox_needs_install?
          state = sandbox_state
          needing_install = state.added.length + state.changed.length + state.deleted.length
          needing_install > 0
        end
      end
    end
  end
end

    
    RSpec.describe FlareTag do
  let(:user) { create(:user) }
  let(:article) { create(:article, user_id: user.id) }
    
          it 'creates an ApiSecret for the user' do
        expect { post '/users/api_secrets', params: { api_secret: valid_params } }.
          to change { user.api_secrets.count }.by 1
      end
    
      describe 'DELETE /chat_channel_memberships/:id' do
    before do
      user.add_role(:super_admin)
      post '/chat_channel_memberships', params: {
        chat_channel_membership: { user_id: second_user.id, chat_channel_id: chat_channel.id }
      }
    end
    
        context 'when :username param is given and belongs to an organization' do
      include_context 'when user/organization articles exist'
      before { get '/feed', params: { username: organization.slug } }
    
      def main_tweet!
    BufferUpdate.buff!(@article.id, twitter_buffer_text, ApplicationConfig['BUFFER_TWITTER_ID'], 'twitter', nil)
    @article.update(last_buffered: Time.current)
  end
    
      def self.send_to_buffer(text, buffer_profile_id_code)
    client = Buffer::Client.new(ApplicationConfig['BUFFER_ACCESS_TOKEN'])
    client.create_update(
      body: {
        text:
        text,
        profile_ids: [
          buffer_profile_id_code,
        ]
      },
    )
  end
    
        # returns the formatted full price for the variant, if at least one variant price differs from product price
    def variant_full_price(variant)
      product = variant.product
      unless product.variants.active(current_currency).all? { |v| v.price == product.price }
        Spree::Money.new(variant.price, currency: current_currency).to_html
      end
    end
    
          after_transition do |payment, transition|
        payment.state_changes.create!(
          previous_state: transition.from,
          next_state: transition.to,
          name: 'payment'
        )
      end
    end
    
        def set(*args)
      options = args.extract_options!
      options.each do |name, value|
        set_preference name, value
      end
    
                if s[:shipped_at].present?
              shipment.shipped_at = s[:shipped_at]
              shipment.state      = 'shipped'
            end
    
          def must_specify_api_key
        render 'spree/api/errors/must_specify_api_key', status: 401
      end